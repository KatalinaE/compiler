#include "PrintVisitor.h"

#include <semantic/include.h>

#include <iostream>

PrintVisitor::PrintVisitor(const std::string& filename) : stream_(filename) {
}

void PrintVisitor::Visit(Program* program) {
    stream_ << "Program:" << std::endl;

    ++num_tabs_;
    --num_tabs_;
}

void PrintVisitor::Visit(Add* expression) {
    PrintTabs();
    stream_ << "Add is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Alloc* expression) {
    PrintTabs();
    stream_ << "Alloc:" << expression->_type->toString() << std::endl;

    if (expression->_size) {
        ++num_tabs_;
        expression->_size->Accept(this);
        --num_tabs_;
    }
}

void PrintVisitor::Visit(And* expression) {
    PrintTabs();
    stream_ << "And is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Assert* expression) {
    PrintTabs();
    stream_ << "Assert is:" << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Bool* expression) {
    PrintTabs();
    stream_ << "Bool:" << expression->_value << std::endl;
}

void PrintVisitor::Visit(ByName* expression) {
    PrintTabs();
    stream_ << "Symbol " << expression->_name << std::endl;
}

void PrintVisitor::Visit(Div* expression) {
    PrintTabs();
    stream_ << "Div is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Equel* expression) {
    PrintTabs();
    stream_ << "Equel is:" << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(ExpressionStatment* expression) {
    PrintTabs();
    stream_ << "ExpressionStatment is: " << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(If* expression) {
    PrintTabs();
    stream_ << "If is: " << std::endl;

    ++num_tabs_;
    expression->_cond->Accept(this);
    expression->_then->Accept(this);
    if (expression->_ifelse)
        expression->_ifelse->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(IndexOf* expression) {
    PrintTabs();
    stream_ << "IndexOf is: " << std::endl;

    ++num_tabs_;
    expression->_obj->Accept(this);
    expression->_index->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(InvocationOf* expression) {
    PrintTabs();
    stream_ << "InvocationOf: " << expression->_name << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    PrintTabs();
    stream_ << "Arguments: " << std::endl;
    ++num_tabs_;
    for (Expression* argument: expression->_args->store)
        argument->Accept(this);
    num_tabs_ -= 2;
}

void PrintVisitor::Visit(LengthOf* expression) {
    PrintTabs();
    stream_ << "LengthOf is: " << std::endl;

    ++num_tabs_;
    expression->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Less* expression) {
    PrintTabs();
    stream_ << "Less is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(LocalVariable* decl) {
    PrintTabs();
    stream_ << "LocalVariable: " << decl->_var->toString() << std::endl;
}

void PrintVisitor::Visit(Mod* expression) {
    PrintTabs();
    stream_ << "Mod is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(More* expression) {
    PrintTabs();
    stream_ << "More is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Move* assignment) {
    PrintTabs();
    stream_ << "Move: " << std::endl;
    ++num_tabs_;
    assignment->_dst->Accept(this);
    assignment->_src->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Mull* expression) {
    PrintTabs();

    stream_ << "Mull is: " << std::endl;
    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Negativ* expression) {
    PrintTabs();
    stream_ << "Negativ: " << std::endl;
    ++num_tabs_;
    statment->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Not* expression) {
    PrintTabs();
    stream_ << "Not: " << std::endl;
    ++num_tabs_;
    statment->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Number* expression) {
    PrintTabs();
    stream_ << "Number: " << expression->_value << std::endl;
}

void PrintVisitor::Visit(Or* expression) {
    PrintTabs();

    stream_ << "Or is: " << std::endl;
    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Println* statment) {
    PrintTabs();
    stream_ << "Println: " << std::endl;
    ++num_tabs_;
    statment->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Return* statment) {
    PrintTabs();
    stream_ << "Return: " << std::endl;
    ++num_tabs_;
    statment->_expr->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Statments* block) {
    PrintTabs();
    stream_ << "Statments is: " << std::endl;

    ++num_tabs_;
    for (Statment* statment: block->store)
        statment->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(Sub* expression) {
    PrintTabs();
    stream_ << "Sub is: " << std::endl;

    ++num_tabs_;
    expression->first->Accept(this);
    expression->second->Accept(this);
    --num_tabs_;
}

void PrintVisitor::Visit(This* expression) {
    PrintTabs();
    stream_ << "This" << std::endl;
}

void PrintVisitor::Visit(ThisField* expression) {
    PrintTabs();
    stream_ << "This." << expression->_name << std::endl;
}

void PrintVisitor::Visit(While* statment) {
    PrintTabs();
    stream_ << "While: " << std::endl;

    ++num_tabs_;
    statment->_cond->Accept(this);
    statment->_then->Accept(this);
    --num_tabs_;
}


void PrintVisitor::PrintTabs() {
    for (int i = 0; i < num_tabs_; ++i) {
        stream_ << '\t';
    }
}

PrintVisitor::~PrintVisitor() {
    stream_.close();
}