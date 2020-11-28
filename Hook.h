#pragma once

#include <windows.h>

LPVOID HookMethod(_In_ LPVOID lpVirtualTable, _In_ PVOID pHookMethod, _In_opt_ uintptr_t dwOffset);