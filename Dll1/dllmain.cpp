// dllmain.cpp : DLL アプリケーションのエントリ ポイントを定義します。
#include "pch.h"
#include "Dll1.h"
#include <wchar.h>
#include <string>

extern "C" __declspec(dllexport) BOOL __stdcall IsStringLengthAtLeast10(const wchar_t* str)
{
    if (str == nullptr)
    {
        return FALSE;
    }

    return (wcslen(str) >= 10) ? TRUE : FALSE;
}

extern "C" __declspec(dllexport) void __stdcall GetNativeMessage(wchar_t* buffer, int bufferSize)
{
    if (buffer == nullptr || bufferSize <= 0)
    {
        return;
    }

    std::wstring message = L"Hello from C++";
    wcsncpy_s(buffer, bufferSize, message.c_str(), _TRUNCATE);
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

