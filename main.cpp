#include "classes/Base.h"
#include "classes/Derived.h"
#include "Hook.h"

#include <iostream>
#include <windows.h>
#include <memory>

#define Bfunc       8
#define Cfunc       12

typedef void(__thiscall *save_ptr)(Base*);

void __fastcall hook_func(Base *pBase) {
    std::cout << "----hook----" << std::endl;
    std::cout << "FUNC HAS BEEN HOOKED! :D" << std::endl;
    pBase->A();
    std::cout << "------------" << std::endl;
}

int main() {
    std::unique_ptr<Base> base = std::make_unique<Derived>();
    auto oldMethod = (save_ptr) HookMethod(static_cast<LPVOID>(base.get()), (PVOID) hook_func, Cfunc);      // hook C method and save ptr
    base->C();                                                                                              // invoke
    HookMethod(static_cast<LPVOID>(base.get()), (PVOID) oldMethod, Cfunc);                                  // unhook
    base->C();                                                                                              // invoke
    return (0);
}