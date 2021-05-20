#include "Interpretator.h"
#include "PrintVisitor.h"

#include <semantic/include.h>
#include <Objects/Int.h>
#include <Objects/Bool.h>
#include <Objects/Array.h>

#include <iostream>

Any Allocate(Type* type, int size = 0)
{
    auto type_name = type->toString();
    if (type_name.back() == ']') {
        return std::make_shared<ObjectArray>(type_name.substr(0, type_name.size()-2), size); 
    } else {
        if (type_name == "int")
            return std::make_shared<ObjectInt>(0);
        if (type_name == "boolean")
            return std::make_shared<ObjectBool>(false);
        throw (std::string("Allocate error: unknown type '") + type_name + "'");
    }
}

Interpretator::Interpretator() {}

void Interpretator::Visit(Program* program) {
    try {
        Accept(program->_main->_declarations->store[0]);
    } catch (Assert * expression) {
        PrintVisitor printer(&std::cout);
        expression->Accept(&printer);
    } catch (Move * move) {
        PrintVisitor printer(&std::cout);
        move->Accept(&printer); 
    } catch (std::string str) {
        std::cout << str << std::endl;
    } catch (...) {
        std::cout << "Somthing... wrong!" << std::endl;
    }
}

void Interpretator::Visit(Class* decl) {}

void Interpretator::Visit(Variable* var) {
    variables[var->_name] = Allocate(var->_type);
}

void Interpretator::Visit(Method* method) {
    Accept(method->_statments);
}

void Interpretator::Visit(Add* expression) {
    value_.reset(new ObjectInt(Accept(expression->first)->GetInt() + Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(Alloc* expression) {
    int size = 1;
    if (expression->_size)
        size = Accept(expression->_size)->GetInt();
    if (size < 1)
        throw std::string("Alloc error: bad size");
    value_ = Allocate(expression->_type, size);
}

void Interpretator::Visit(And* expression) {
    value_.reset(new ObjectBool(Accept(expression->first)->GetBool() && Accept(expression->second)->GetBool()));
}

void Interpretator::Visit(Assert* expression) {
    if (!Accept(expression->_expr)->GetBool()) {
        std::cout << "Asserting!" << std::endl;
        throw expression;
    }
}

void Interpretator::Visit(Bool* expression) {
    value_.reset(new ObjectBool(expression->_value));
}

void Interpretator::Visit(ByName* expression) {
    value_ = variables[expression->_name];
}

void Interpretator::Visit(Div* expression) {
    value_.reset(new ObjectInt(Accept(expression->first)->GetInt() / Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(Equel* expression) {
    value_.reset(new ObjectBool(Accept(expression->first)->GetInt() == Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(ExpressionStatment* expression) {
    Accept(expression->_expr);
}

void Interpretator::Visit(If* expression) {
    if (Accept(expression->_cond)->GetBool())
        Accept(expression->_then);
    else if (expression->_ifelse)
        Accept(expression->_ifelse);
}

void Interpretator::Visit(IndexOf* expression) {
    value_ = Accept(expression->_obj)->GetArray()[Accept(expression->_index)->GetInt()];
}

void Interpretator::Visit(InvocationOf* expression) {
    throw std::string("Not implemented 'InvocationOf'");
}

void Interpretator::Visit(LengthOf* expression) {
    value_.reset(new ObjectInt(Accept(expression->_expr)->GetArray().size()));
}

void Interpretator::Visit(Less* expression) {
    value_.reset(new ObjectBool(Accept(expression->first)->GetInt() < Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(LocalVariable* decl) {
    variables[((Variable*)(decl->_var))->_name] = Allocate(((Variable*)(decl->_var))->_type);
}

void Interpretator::Visit(Mod* expression) {
    value_.reset(new ObjectInt(Accept(expression->first)->GetInt() % Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(More* expression) {
    value_.reset(new ObjectBool(Accept(expression->first)->GetInt() > Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(Move* assignment) {
    auto tmp = Accept(assignment->_dst);
    if (dynamic_cast<ObjectBool*>(tmp.get()))
        tmp->GetBool() = Accept(assignment->_src)->GetBool();
    else if (dynamic_cast<ObjectInt*>(tmp.get()))
        tmp->GetInt() = Accept(assignment->_src)->GetInt();
    else if (dynamic_cast<ObjectArray*>(tmp.get()))
        tmp->GetArray() = Accept(assignment->_src)->GetArray();
    else throw assignment;
}

void Interpretator::Visit(Mull* expression) {
    value_.reset(new ObjectInt(Accept(expression->first)->GetInt() * Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(Negativ* expression) {
    value_.reset(new ObjectInt(-Accept(expression->_expr)->GetInt()));
}

void Interpretator::Visit(Not* expression) {
    value_.reset(new ObjectBool(!Accept(expression->_expr)->GetBool()));
}

void Interpretator::Visit(Number* expression) {
    value_.reset(new ObjectInt(expression->_value));
}

void Interpretator::Visit(Or* expression) {
    value_.reset(new ObjectBool(Accept(expression->first)->GetBool() || Accept(expression->second)->GetBool()));
}

void Interpretator::Visit(Println* statment) {
    std::cout << Accept(statment->_expr)->toString() << std::endl;
}

void Interpretator::Visit(Return* statment) {
    value_ = Accept(statment->_expr);
    throw statment;
}

void Interpretator::Visit(Statments* block) {
    for (Statment* statment: block->store)
        Accept(statment);
}

void Interpretator::Visit(Sub* expression) {
    value_.reset(new ObjectInt(Accept(expression->first)->GetInt() - Accept(expression->second)->GetInt()));
}

void Interpretator::Visit(This* expression) {
    value_.reset(new Object());
}

void Interpretator::Visit(ThisField* expression) {
    value_.reset(new Object());
}

void Interpretator::Visit(While* statment) {
    while (Accept(statment->_cond)->GetBool())
        Accept(statment->_then);
}

Interpretator::~Interpretator() {}