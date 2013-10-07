#if !defined(SAMPLE_DLL_C_H)
#define SAMPLE_DLL_C_H

// This project created a DLL using C instead of C++.
// The output DLL keeps the function name identical as the source code unlike C++ generated DLL.

#if defined(SIMPLEDLLC_EXPORTS)
#define SIMPLE_DLL_API __declspec(dllexport)
#else
#define SIMPLE_DLL_API __declspec(dllimport)
#endif

SIMPLE_DLL_API int GlobalReturnZero(void);
SIMPLE_DLL_API void GlobalPrint(void);
SIMPLE_DLL_API double GlobalAdd(double a, double b);
SIMPLE_DLL_API double GlobalSubtract(double a, double b);
SIMPLE_DLL_API double GlobalMultiply(double a, double b);
SIMPLE_DLL_API double GlobalDivide(double a, double b);

#endif
