#include "TypeCheck.h"
#include <memory>
#include <iostream>

//global tabels
//typeMap func2retType; // function name to return type

// global token ids to type
typeMap g_token2Type; 

// local token ids to type, since func param can override global param
typeMap funcparam_token2Type;
vector<typeMap*> local_token2Type;
// typeMap l_token2Type;

static auto vaatype =  std::make_unique<aA_type_>();

std::unordered_map<string, bool> func2IsDef;
paramMemberMap func2Param;
std::unordered_map<string, aA_type> func2retType;
paramMemberMap struct2Members;


// private util functions
void error_print(std::ostream& out, A_pos p, string info)
{
    out << "Typecheck error in line " << p->line << ", col " << p->col << ": " << info << std::endl;
    exit(0);
}

void print_local_val(){
    for(auto i: local_token2Type){
        for(auto j: *i){
            std::cout << j.first << " : ";
            switch (j.second->type->type)
            {
            case A_dataType::A_nativeTypeKind:
                switch (j.second->type->u.nativeType)
                {
                case A_nativeType::A_intTypeKind:
                    std::cout << "int";
                    break;
                default:
                    break;
                }
                break;
            case A_dataType::A_structTypeKind:
                std::cout << *(j.second->type->u.structType);
                break;
            default:
                break;
            }
            switch(j.second->isVarArrFunc){
                case 0:
                    std::cout << " scalar";
                    break;
                case 1:
                    std::cout << " array";
                    break;
                case 2:
                    std::cout << " function";
                    break;
            }
            std::cout << std::endl;
        }
    }
    std::cout <<"----------------------------"<< std::endl;
}
void print_token_map(typeMap* map){
    for(auto it = map->begin(); it != map->end(); it++){
        std::cout << it->first << " : ";
        switch (it->second->type->type)
        {
        case A_dataType::A_nativeTypeKind:
            switch (it->second->type->u.nativeType)
            {
            case A_nativeType::A_intTypeKind:
                std::cout << "int";
                break;
            default:
                break;
            }
            break;
        case A_dataType::A_structTypeKind:
            std::cout << *(it->second->type->u.structType);
            break;
        default:
            break;
        }
        switch(it->second->isVarArrFunc){
            case 0:
                std::cout << " scalar";
                break;
            case 1:
                std::cout << " array";
                break;
            case 2:
                std::cout << " function";
                break;
        }
        std::cout << std::endl;
    }
}


void print_token_maps(){
    std::cout << "global token2Type:" << std::endl;
    print_token_map(&g_token2Type);
    std::cout << "local token2Type:" << std::endl;
    print_token_map(&funcparam_token2Type);
}


bool comp_aA_type(aA_type target, aA_type t){
    if(!target || !t)
        return false;
    if(target->type != t->type)
        return false;
    if(target->type == A_dataType::A_nativeTypeKind)
        if(target->u.nativeType != t->u.nativeType)
            return false;
    if(target->type == A_dataType::A_structTypeKind)
        if(target->u.structType != t->u.structType)
            return false;
    return true;
}


bool comp_tc_type(tc_type target, tc_type t){
    if(!target || !t)
        return false;
    
    // arr kind first
    if (target->isVarArrFunc && t->isVarArrFunc == 0)
        return false;
    
    // if target type is nullptr, alwayse ok
    return comp_aA_type(target->type, t->type);
}


tc_type tc_Type(aA_type t, uint isVarArrFunc){
    tc_type ret = new tc_type_;
    ret->type = t;
    ret->isVarArrFunc = isVarArrFunc;
    return ret;
}


tc_type tc_Type(aA_varDecl vd){
    if(vd->kind == A_varDeclType::A_varDeclScalarKind)
        return tc_Type(vd->u.declScalar->type, 0);
    else if(vd->kind == A_varDeclType::A_varDeclArrayKind)
        return tc_Type(vd->u.declArray->type, 1);
    return nullptr;
}


// public functions
void check_Prog(std::ostream& out, aA_program p)
{
    for (auto ele : p->programElements)
    {
        if(ele->kind == A_programVarDeclStmtKind){
            check_Global_VarDecl(out, ele->u.varDeclStmt);
        }else if (ele->kind == A_programStructDefKind){
            check_StructDef(out, ele->u.structDef);
        }
    }
    
    for (auto ele : p->programElements){
        if(ele->kind == A_programFnDeclStmtKind){
            check_FnDeclStmt(out, ele->u.fnDeclStmt);
        }
        else if (ele->kind == A_programFnDefKind){
            check_FnDecl(out, ele->u.fnDef->fnDecl);
        }
    }

    for (auto ele : p->programElements){
        if(ele->kind == A_programFnDefKind){
            check_FnDef(out, ele->u.fnDef);
        }
        else if (ele->kind == A_programNullStmtKind){
            // do nothing
        }
    }

    out << "Typecheck passed!" << std::endl;
    return;
}


void check_Global_VarDecl(std::ostream& out, aA_varDeclStmt vd)
{
    if (!vd)
        return;
    string name;
    if (vd->kind == A_varDeclStmtType::A_varDeclKind){
        // decl only
        aA_varDecl vdecl = vd->u.varDecl;
        if(vdecl->kind == A_varDeclType::A_varDeclScalarKind){
            name = *vdecl->u.declScalar->id;
            if(g_token2Type.find(name) != g_token2Type.end()){
                error_print(out, vd->pos,"global var: "+ name + " has existed");
            } else {
                g_token2Type.emplace(name, tc_Type(vdecl));
            }
        }else if (vdecl->kind == A_varDeclType::A_varDeclArrayKind){
            name = *vdecl->u.declArray->id;
            /* fill code here*/
            if(g_token2Type.find(name) != g_token2Type.end()){
                error_print(out, vd->pos,"global var: "+ name + " has existed");
            } else {
                g_token2Type.emplace(name, tc_Type(vdecl));
            }
        }
    }
    else if (vd->kind == A_varDeclStmtType::A_varDefKind){
        // decl and def
        aA_varDef vdef = vd->u.varDef;
        if (vdef->kind == A_varDefType::A_varDefScalarKind){
            name = *vdef->u.defScalar->id;
            /* fill code here, allow omited type */
            auto type = vdef->u.defScalar->type;
            auto rValType = check_ArithExpr(out, vdef->u.defScalar->val->u.arithExpr)->type;
            if(g_token2Type.find(name) != g_token2Type.end()){
                error_print(out, vd->pos,"global var: "+ name + " has existed");
            }else if(type == nullptr){
                type = rValType;
            }else if(!comp_aA_type(type, rValType)){
                error_print(out, vd->pos, "Declared type dosenot match the type of rightvalue");
            }
            g_token2Type.emplace(name, tc_Type(type, 0));
            

        }
        else if (vdef->kind == A_varDefType::A_varDefArrayKind){
            name = *vdef->u.defArray->id;
            /* fill code here, allow omited type */
            int arrLen = vdef->u.defArray->len;
            auto vals = vdef->u.defArray->vals;
            if(g_token2Type.find(name) != g_token2Type.end()){
                error_print(out, vd->pos,"global var: "+ name + " has existed");
            } else if(arrLen < vals.size()){
                error_print(out, vd->pos, "Array length is less than the number of values");
            } else {
                g_token2Type.emplace(name, tc_Type(vdef->u.defArray->type, 1));
            }
        }
    }
    return;
}

void check_Local_VarDecl(std::ostream& out, aA_varDeclStmt vd)
{
    if (!vd)
        return;
    string name; 
    auto decledVars = new typeMap();
    auto l_token2Type = local_token2Type.back();
    for(auto i: local_token2Type){
        for(auto j: *i){
            decledVars->emplace(j.first, j.second);
        }
    }
    for(auto i: g_token2Type){
        decledVars->emplace(i.first, i.second);
    }
    if (vd->kind == A_varDeclStmtType::A_varDeclKind){
        // decl only
        aA_varDecl vdecl = vd->u.varDecl;
        
        if(vdecl->kind == A_varDeclType::A_varDeclScalarKind){
            name = *vdecl->u.declScalar->id;
            if(decledVars->find(name) != decledVars->end()){
                error_print(out, vd->pos,"local var: "+ name + " has existed");
            } else {
                l_token2Type->emplace(name, tc_Type(vdecl));
            }
        }else if (vdecl->kind == A_varDeclType::A_varDeclArrayKind){
            name = *vdecl->u.declArray->id;
            /* fill code here*/
            if(decledVars->find(name) != decledVars->end()){
                error_print(out, vd->pos,"local var: "+ name + " has existed");
            } else {
                l_token2Type->emplace(name, tc_Type(vdecl));
            }
        }
    }
    else if (vd->kind == A_varDeclStmtType::A_varDefKind){
        // decl and def
        aA_varDef vdef = vd->u.varDef;
        if (vdef->kind == A_varDefType::A_varDefScalarKind){
            name = *vdef->u.defScalar->id;
            /* fill code here, allow omited type */
            auto type = vdef->u.defScalar->type;
            auto rValType = check_ArithExpr(out, vdef->u.defScalar->val->u.arithExpr)->type;
            if(decledVars->find(name) != decledVars->end()){
                error_print(out, vd->pos,"local var: "+ name + " has existed");
            } else if(type == nullptr){
                type = rValType;
            } else if(!comp_aA_type(type, rValType)){
                error_print(out, vd->pos, "Declared type dosenot match the type of rightvalue");
            } 
            l_token2Type->emplace(name, tc_Type(type, 0));

        }else if (vdef->kind == A_varDefType::A_varDefArrayKind){
            name = *vdef->u.defArray->id;
            /* fill code here, allow omited type */
            int arrLen = vdef->u.defArray->len;
            auto vals = vdef->u.defArray->vals;
            if(decledVars->find(name) != decledVars->end()){
                error_print(out, vd->pos,"local var: "+ name + " has existed");
            } else if(arrLen < vals.size()){
                error_print(out, vd->pos, "Array length is less than the number of values");
            } else {
                l_token2Type->emplace(name, tc_Type(vdef->u.defArray->type, 1));
            }
        }
    }
    return;
}

void check_StructDef(std::ostream& out, aA_structDef sd)
{
    if (!sd)
        return;
    string name = *sd->id;
    if (struct2Members.find(name) != struct2Members.end())
        error_print(out, sd->pos, "This id is already defined!");
    struct2Members[name] = &(sd->varDecls);
    return;
}


void check_FnDecl(std::ostream& out, aA_fnDecl fd)
{
    if (!fd)
        return;
    string name = *fd->id;

    // if already declared, should match
    if (func2Param.find(name) != func2Param.end()){
        // is function ret val matches
        /* fill code here */
        auto retType = fd->type;
        auto DecledRetType = func2retType[name];
        if(!comp_aA_type(retType, DecledRetType)){
            error_print(out, fd->pos, "Function ret type dosenot match");
        }
        // is function params matches decl
        vector<aA_varDecl>* DecledParams = func2Param[name];
        vector<aA_varDecl> params = fd->paramDecl->varDecls;
        if(params.size() != DecledParams->size()){
            error_print(out, fd->pos, "Function params does not match the declared ones");
        }
        for(int i = 0; i < DecledParams->size(); i++){
            if(!comp_aA_type((*DecledParams)[i]->u.declScalar->type, params[i]->u.declScalar->type)){
                error_print(out, fd->pos, "Function params does not match the declared ones");
            }
        }          
        /* fill code here */
    }else{
        // if not defined
        /* fill code here */
        func2Param.emplace(name, &fd->paramDecl->varDecls);
        func2retType.emplace(name, fd->type);
        func2IsDef.emplace(name, false);
    }
    return;
}


void check_FnDeclStmt(std::ostream& out, aA_fnDeclStmt fd)
{
    if (!fd)
        return;
    check_FnDecl(out, fd->fnDecl);
    return;
}


void check_FnDef(std::ostream& out, aA_fnDef fd)
{
    if (!fd)
        return;
    // should match if declared
    check_FnDecl(out, fd->fnDecl);
    local_token2Type.push_back(new typeMap());
    auto l_token2Type = local_token2Type.back();
    if(func2IsDef.find(*fd->fnDecl->id) != func2IsDef.end() && func2IsDef[*fd->fnDecl->id] == true){
        error_print(out, fd->pos, "Function: "+ *(fd->fnDecl->id) + " has been defined");
    } else {
        func2IsDef[*fd->fnDecl->id] = true;
    }
    typeMap* overrideGVars = new typeMap();
    // add params to local tokenmap, func params override global ones
    for (aA_varDecl vd : fd->fnDecl->paramDecl->varDecls)
    {
        /* fill code here */
        string name;
        if(vd->kind == A_varDeclScalarKind){
            name = *vd->u.declScalar->id;
        } else {
            name = *vd->u.declArray->id;
        }
        //if param in globalVarMap then override
        if(g_token2Type.find(name) != g_token2Type.end()){
            overrideGVars->emplace(name, g_token2Type[name]);
            g_token2Type.erase(name);
        }
        l_token2Type->emplace(name, tc_type(vd));

    }

    /* fill code here */
    for (aA_codeBlockStmt stmt : fd->stmts)
    {
        check_CodeblockStmt(out, stmt, fd->fnDecl->type);
        // return value type should match
        /* fill code here */
    }
    
    for(auto it = overrideGVars->begin(); it != overrideGVars->end(); it++){
        g_token2Type.emplace(it->first, it->second);
    }
    overrideGVars->clear();
    local_token2Type.pop_back();
    return;
}


void check_CodeblockStmt(std::ostream& out, aA_codeBlockStmt cs, aA_type retType){
    if(!cs)
        return;
    // variables declared in a code block should not duplicate with outer ones.
    switch (cs->kind)
    {
    case A_codeBlockStmtType::A_varDeclStmtKind:
        // print_local_val();
        check_Local_VarDecl(out, cs->u.varDeclStmt);
        // print_local_val();
        break;
    case A_codeBlockStmtType::A_assignStmtKind:
        check_AssignStmt(out, cs->u.assignStmt);
        break;
    case A_codeBlockStmtType::A_ifStmtKind:
        check_IfStmt(out, cs->u.ifStmt);
        break;
    case A_codeBlockStmtType::A_whileStmtKind:
        check_WhileStmt(out, cs->u.whileStmt);
        break;
    case A_codeBlockStmtType::A_callStmtKind:
        check_CallStmt(out, cs->u.callStmt);
        break;
    case A_codeBlockStmtType::A_returnStmtKind:
        check_ReturnStmt(out, cs->u.returnStmt, retType);
        break;
    default:
        break;
    }
    return;
}


void check_AssignStmt(std::ostream& out, aA_assignStmt as){
    if(!as)
        return;
    string name;
    tc_type deduced_type; // deduced type if type is omitted at decl
    aA_type lType, rType;
    auto decledVars = new typeMap();
    for(auto i: local_token2Type){
        for(auto j: *i){
            decledVars->emplace(j.first, j.second);
        }
    }
    for(auto i: g_token2Type){
        decledVars->emplace(i.first, i.second);
    }
    switch (as->leftVal->kind)
    {
        case A_leftValType::A_varValKind:{
            name = *as->leftVal->u.id;
            /* fill code here */
            if(decledVars->find(name) == decledVars->end()){
                error_print(out, as->pos, "Variable: "+ name + " not declared");
            }
            lType = decledVars->at(name)->type;

        }
            break;
        case A_leftValType::A_arrValKind:{
            name = *as->leftVal->u.arrExpr->arr->u.id;
            /* fill code here */
            if(decledVars->find(name) == decledVars->end()){
                error_print(out, as->pos, "Variable: "+ name + " not declared");
            }
            lType = decledVars->at(name)->type;
        }
            break;
        case A_leftValType::A_memberValKind:{
            /* fill code here */
            lType = check_MemberExpr(out, as->leftVal->u.memberExpr)->type;
        }
            break;
    }

    deduced_type = check_ArithExpr(out, as->rightVal->u.arithExpr);
    rType = deduced_type->type;
    if(lType == nullptr){
        lType = rType;
        if(g_token2Type.find(name) != g_token2Type.end()){
            g_token2Type[name] = tc_Type(lType, 0);
        } else {
            for(auto i: local_token2Type){
                if(i->find(name) != i->end()){
                    i->at(name) = tc_Type(lType, 0);
                    break;
                }
            
            }
        }
    }
    if(!comp_aA_type(lType, rType)){
        error_print(out, as->pos, "Left value type does not match right value type");
    }
    return;
}


void check_ArrayExpr(std::ostream& out, aA_arrayExpr ae){
    if(!ae)
        return;
    auto decledVars = new typeMap();
    for(auto i: local_token2Type){
        for(auto j: *i){
            decledVars->emplace(j.first, j.second);
        }
    }
    for(auto i: g_token2Type){
        decledVars->emplace(i.first, i.second);
    }
    string name = *ae->arr->u.id;
    // check array name
    /* fill code here */
    if(decledVars->find(name) == decledVars->end()){
        error_print(out, ae->pos, "Array: "+ name + " not declared");
    } else if(decledVars->at(name)->isVarArrFunc != 1){
        error_print(out, ae->pos, "Variable: "+ name + " is not an array");
    } else {
        // check array index
        if(ae->idx->kind == A_idIndexKind){
            name = *ae->idx->u.id;
            if(decledVars->find(name) == decledVars->end()){
                error_print(out, ae->pos, "Array index: "+ name + " not declared");
            } else if(decledVars->at(name)->isVarArrFunc != 0){
                error_print(out, ae->pos, "Array index: "+ name + " is not a scalar");
            }
        } 
    }
    return;
}

 
tc_type check_MemberExpr(std::ostream& out, aA_memberExpr me){
    // check if the member exists and return the type of the member
    if(!me)
        return nullptr;
    auto decledVars = new typeMap();
    for(auto i: local_token2Type){
        for(auto j: *i){
            decledVars->emplace(j.first, j.second);
        }
    }
    for(auto i: g_token2Type){
        decledVars->emplace(i.first, i.second);
    }
    string name = *me->structId->u.id;
    // print_token_map(decledVars);
    string structTypeName;
    // check struct name
    /* fill code here */
    // out << decledVars->at(name)->type->type << std::endl;
    if(decledVars->find(name) == decledVars->end()){
        error_print(out, me->pos, "Struct: "+ name + " not declared");
    } if(decledVars->at(name)->type->type != A_dataType::A_structTypeKind){
        error_print(out, me->pos, "Variable: "+ name + " is not a struct");
    } else {
        structTypeName = *decledVars->at(name)->type->u.structType;
        for(aA_varDecl vd : *struct2Members[structTypeName]){
            if(vd->kind == A_varDeclType::A_varDeclScalarKind){
                if(*vd->u.declScalar->id == *me->memberId){
                    return tc_Type(vd);
                }
            }
        }
    }
    error_print(out, me->pos, "Member: "+ *me->memberId + " not declared in struct: " + structTypeName);
    return nullptr;
}


void check_IfStmt(std::ostream& out, aA_ifStmt is){
    if(!is)
        return;
    check_BoolExpr(out, is->boolExpr);
    /* fill code here, take care of variable scope */
    local_token2Type.push_back(new typeMap());
    for(aA_codeBlockStmt s : is->ifStmts){
        // print_local_val();
        check_CodeblockStmt(out, s, vaatype.get());
    }
    local_token2Type.pop_back();
    local_token2Type.push_back(new typeMap());
    
    /* fill code here */    
    for(aA_codeBlockStmt s : is->elseStmts){
        check_CodeblockStmt(out, s, vaatype.get());
    }
    /* fill code here */
    local_token2Type.pop_back();

    return;
}


void check_BoolExpr(std::ostream& out, aA_boolExpr be){
    if(!be)
        return;
    switch (be->kind)
    {
    case A_boolExprType::A_boolBiOpExprKind:
        check_BoolExpr(out, be->u.boolBiOpExpr->left);
        check_BoolExpr(out, be->u.boolBiOpExpr->right);
        break;
    case A_boolExprType::A_boolUnitKind:
        check_BoolUnit(out, be->u.boolUnit);
        break;
    default:
        break;
    }
    return;
}


void check_BoolUnit(std::ostream& out, aA_boolUnit bu){
    if(!bu)
        return;
    switch (bu->kind)
    {
        case A_boolUnitType::A_comOpExprKind:{
            /* fill code here */
            auto lType = check_ExprUnit(out, bu->u.comExpr->left);
            auto rType = check_ExprUnit(out, bu->u.comExpr->right);
            if(!comp_tc_type(lType, rType)){
                error_print(out, bu->pos, "Left value type cannot compare to right value type");
            }
        }
            break;
        case A_boolUnitType::A_boolExprKind:
            check_BoolExpr(out, bu->u.boolExpr);
            break;
        case A_boolUnitType::A_boolUOpExprKind:
            check_BoolUnit(out, bu->u.boolUOpExpr->cond);
            break;
        default:
            break;
    }
    return;
}


tc_type check_ExprUnit(std::ostream& out, aA_exprUnit eu){
    // return the aA_type of expr eu
    if(!eu)
        return nullptr;
    tc_type ret;
    switch (eu->kind)
    {
        case A_exprUnitType::A_idExprKind:{
            /* fill code here */
            auto decledVars = new typeMap();
            for(auto i: local_token2Type){
                for(auto j: *i){
                    decledVars->emplace(j.first, j.second);
                }
            }
            for(auto i: g_token2Type){
                decledVars->emplace(i.first, i.second);
            }
            string name = *eu->u.id;
            if(decledVars->find(name) == decledVars->end()){
                for(auto i = decledVars->begin(); i != decledVars->end(); i++){
                    std::cout << i->first << std::endl;
                }
                error_print(out, eu->pos, "Variable: "+ name + " not declared");
            } else {
                ret = decledVars->at(name);
            }
        }
            break;
        case A_exprUnitType::A_numExprKind:{
            aA_type numt = new aA_type_;
            numt->pos = eu->pos;
            numt->type = A_dataType::A_nativeTypeKind;
            numt->u.nativeType = A_nativeType::A_intTypeKind;
            ret = tc_Type(numt, 0);
        }
            break;
        case A_exprUnitType::A_fnCallKind:{
            check_FuncCall(out, eu->u.callExpr);
            // check_FuncCall will check if the function is defined
            /* fill code here */
            auto name = *eu->u.callExpr->fn;
            ret = tc_Type(func2retType[name], 2);
        }
            break;
        case A_exprUnitType::A_arrayExprKind:{
            check_ArrayExpr(out, eu->u.arrayExpr);
            /* fill code here */
            aA_type type = new aA_type_;
            type->type = A_dataType::A_nativeTypeKind;
            type->u.nativeType = A_nativeType::A_intTypeKind;
            ret = tc_Type(type, 1);
        }
            break;
        case A_exprUnitType::A_memberExprKind:{
            ret = check_MemberExpr(out, eu->u.memberExpr);
        }
            break;
        case A_exprUnitType::A_arithExprKind:{
            ret = check_ArithExpr(out, eu->u.arithExpr);
        }
            break;
        case A_exprUnitType::A_arithUExprKind:{
            ret = check_ExprUnit(out, eu->u.arithUExpr->expr);
        }
            break;
    }
    return ret;
}


tc_type check_ArithExpr(std::ostream& out, aA_arithExpr ae){
    if(!ae)
        return nullptr;
    tc_type ret;
    switch (ae->kind)
    {
        case A_arithExprType::A_arithBiOpExprKind:{
            ret = check_ArithExpr(out, ae->u.arithBiOpExpr->left);
            tc_type rightTyep = check_ArithExpr(out, ae->u.arithBiOpExpr->right);
            if(ret->type->type > 0 || ret->type->type != A_dataType::A_nativeTypeKind || ret->type->u.nativeType != A_nativeType::A_intTypeKind ||
            rightTyep->type->type > 0 || rightTyep->type->type != A_dataType::A_nativeTypeKind || rightTyep->type->u.nativeType != A_nativeType::A_intTypeKind)
                error_print(out, ae->pos, "Only int can be arithmetic expression operation values!");
        }
            break;
        case A_arithExprType::A_exprUnitKind:
            ret = check_ExprUnit(out, ae->u.exprUnit);
            break;
    }
    return ret;
}


void check_FuncCall(std::ostream& out, aA_fnCall fc){
    if(!fc)
        return;
    // check if function defined
    string func_name = *fc->fn;
    /* fill code here */
    if(func2retType.find(func_name) == func2retType.end()){
        error_print(out, fc->pos, "Function: "+ func_name + " not defined");
    }
    // check if parameter list matches
    if(fc->vals.size() != func2Param[func_name]->size()){
        error_print(out, fc->pos, "Function: "+ func_name + " parameter number does not match");
    }
    for(int i = 0; i < fc->vals.size(); i++){
        /* fill code here */
        auto decledType = func2Param[func_name]->at(i)->u.declScalar->type; 
        auto paramType = check_ArithExpr(out, fc->vals[i]->u.arithExpr)->type;
        if(!comp_aA_type(decledType, paramType)){
            error_print(out, fc->pos, "Function: "+ func_name + " parameter type does not match");
        }
    }
    return ;
}


void check_WhileStmt(std::ostream& out, aA_whileStmt ws){
    if(!ws)
        return;
    check_BoolExpr(out, ws->boolExpr);
    /* fill code here, take care of variable scope */
    local_token2Type.push_back(new typeMap());
    for(aA_codeBlockStmt s : ws->whileStmts){
        check_CodeblockStmt(out, s, vaatype.get());
    }
    /* fill code here */
    local_token2Type.pop_back();
    return;
}


void check_CallStmt(std::ostream& out, aA_callStmt cs){
    if(!cs)
        return;
    check_FuncCall(out, cs->fnCall);
    return;
}


void check_ReturnStmt(std::ostream& out, aA_returnStmt rs, aA_type expectedType){
    if(!rs)
        return;
    aA_type retType = check_ArithExpr(out, rs->retVal->u.arithExpr)->type;
    if(!comp_aA_type(expectedType, retType)){
        error_print(out, rs->pos, "Return type does not match the expected type");
    }
    return;
}
