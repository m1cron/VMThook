#pragma once

#include <iostream>

class Base {

public:
    Base() { std::cout << "Base::Base" << std::endl; }
    virtual ~Base() { std::cout << "Base::~Base" << std::endl; }

    void A() { std::cout << "Base::A" << std::endl; }
    virtual void B() { std::cout << "Base::B" << std::endl; }
    virtual void C() { std::cout << "Base::C" << std::endl; }
};

