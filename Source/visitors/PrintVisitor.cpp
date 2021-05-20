#include "PrintVisitor.h"

#include <semantic/include.h>

#include <iostream>

PrintVisitor::PrintVisitor(const std::string& filename) : stream_(filename), file_(&stream_) {}
PrintVisitor::PrintVisitor(std::ostream* file): file_(file) {}

void PrintVisitor::Visit(Program* program) {
    (*file_) << "Program:" << std::endl;

    ++num_tabs_;
    for (Class* decl: program->_classes->store)
        decl->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Class* decl) {
    PrintTabs();
    (*file_) << "Class " << decl->_name << " " << decl->_extends->toString() << std::endl;

    ++num_tabs_;
    for (Declaration* field: decl->_declarations->store)
        field->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Variable* var) {
    PrintTabs();
    (*file_) << "Variable: " << var->toString() << std::endl;
}

void PrintVisitor::Visit(Method* method) {
    PrintTabs();
    (*file_) << "Method: " << method->_type->toString() << " " << method->_name << "(";
    ++num_tabs_;
    for (Formal* formal: method->_formals->store) {
        (*file_) << "\n";
        PrintTabs();
        (*file_) << formal->toString() << ",";
    }
    --num_tabs_;
    if (method->_formals->store.size()) {
        (*file_) << "\n";
        PrintTabs();
    }
    (*file_) << ")" << std::endl;

    ++num_tabs_;
    method->_statments->Accept(this);
    --num_tabs_;
}


void PrintVisitor::Visit(Add* expression) {
    PrintTabs();
    (*file_) << "Add is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Alloc* expression) {
    PrintTabs();
    (*file_) << "Alloc: " << expression->_type->toString() << std::endl;

    if (expression->_size) {
        ++num_tabs_;
        expression->_size->Accept(this);
        --num_tabs_;
    }
}

void PrintVisitor::Visit(And* expression) {
    PrintTabs();
    (*file_) << "And is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Assert* expression) {
    PrintTabs();
    (*file_) << "Assert is:" << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Bool* expression) {
    PrintTabs();
    (*file_) << "Bool:" << expression->_value << std::endl;
}

void PrintVisitor::Visit(ByName* expression) {
    PrintTabs();
    (*file_) << "Symbol " << expression->_name << std::endl;
}

void PrintVisitor::Visit(Div* expression) {
    PrintTabs();
    (*file_) << "Div is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Equel* expression) {
    PrintTabs();
    (*file_) << "Equel is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(ExpressionStatment* expression) {
    PrintTabs();
    (*file_) << "ExpressionStatment is: " << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(If* expression) {
    PrintTabs();
    (*file_) << "If is: " << std::endl;

    ++num_tabs_;
    expression->_cond->Accept(this);
    expression->_then->Accept(this);
    if (expression->_ifelse)
        expression->_ifelse->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(IndexOf* expression) {
    PrintTabs();
    (*file_) << "IndexOf is: " << std::endl;

    ++num_tabs_;
    expression->_obj->Accept(this);
    expression->_index->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(InvocationOf* expression) {
    PrintTabs();
    (*file_) << "InvocationOf: " << expression->_name << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    PrintTabs();
    (*file_) << "Arguments: " << std::endl;
    ++num_tabs_;
    for (Expression* argument: expression->_args->store)
        argument->Accept(this);
    num_tabs_ -= 2;
}

void PrintVisitor::Visit(LengthOf* expression) {
    PrintTabs();
    (*file_) << "LengthOf is: " << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Less* expression) {
    PrintTabs();
    (*file_) << "Less is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(LocalVariable* decl) {
    PrintTabs();
    (*file_) << "LocalVariable: " << decl->_var->toString() << std::endl;
}

void PrintVisitor::Visit(Mod* expression) {
    PrintTabs();
    (*file_) << "Mod is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(More* expression) {
    PrintTabs();
    (*file_) << "More is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Move* assignment) {
    PrintTabs();
    (*file_) << "Move: " << std::endl;
    ++num_tabs_;
    assignment->_dst->Accept(this);
    assignment->_src->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Mull* expression) {
    PrintTabs();

    (*file_) << "Mull is: " << std::endl;
    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Negativ* expression) {
    PrintTabs();
    (*file_) << "Negativ: " << std::endl;
    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Not* expression) {
    PrintTabs();
    (*file_) << "Not: " << std::endl;
    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Number* expression) {
    PrintTabs();
    (*file_) << "Number: " << expression->_value << std::endl;
}

void PrintVisitor::Visit(Or* expression) {
    PrintTabs();

    (*file_) << "Or is: " << std::endl;
    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Println* statment) {
    PrintTabs();
    (*file_) << "Println: " << std::endl;
    ++num_tabs_;
    statment->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Return* statment) {
    PrintTabs();
    (*file_) << "Return: " << std::endl;
    ++num_tabs_;
    statment->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Statments* block) {
    PrintTabs();
    (*file_) << "Statments is: " << std::endl;

    ++num_tabs_;
    for (Statment* statment: block->store)
        statment->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Sub* expression) {
    PrintTabs();
    (*file_) << "Sub is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(This* expression) {
    PrintTabs();
    (*file_) << "This" << std::endl;
}

void PrintVisitor::Visit(ThisField* expression) {
    PrintTabs();
    (*file_) << "This." << expression->_name << std::endl;
}

void PrintVisitor::Visit(While* statment) {
    PrintTabs();
    (*file_) << "While: " << std::endl;

    ++num_tabs_;
    statment->_cond->Accept(this);
    statment->_then->Accept(this);
    --num_tabs_;
}


void PrintVisitor::PrintTabs() {
    for (int i = 0; i < num_tabs_; ++i) {
        (*file_) << '\t';
    }
}

PrintVisitor::~PrintVisitor() {
    if (!file_)
        stream_.close();
}