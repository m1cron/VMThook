#pragma once

#include "Base.h"

class Derived final : public Base {
public:
    Derived() { std::cout << "Derived::Derived" << std::endl; }
    virtual ~Derived() { std::cout << "Derived::~Derived" << std::endl; }

    void B() override { std::cout << "Derived::B" << std::endl; }
    void C() override { std::cout << "Derived::C" << std::endl; }
};