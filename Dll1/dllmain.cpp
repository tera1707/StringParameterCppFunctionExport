// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "pch.h"
#include "Dll1.h"
#include <wchar.h>

extern "C" __declspec(dllexport) BOOL __stdcall IsStringLengthAtLeast10(const wchar_t* str)
{
    if (str == nullptr)
    {
        return FALSE;
    }

    return (wcslen(str) >= 10) ? TRUE : FALSE;
}

BOOL APIENTRY DllMain(
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

