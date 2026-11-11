#pragma once

extern "C" __declspec(dllexport) BOOL __stdcall IsStringLengthAtLeast10(const wchar_t* str);
extern "C" __declspec(dllexport) void __stdcall GetNativeMessage(wchar_t* buffer, int bufferSize);
