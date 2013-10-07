#if !defined(SAMPLEDLL_H)
#define SAMPLEDLL_H

// This project created a DLL using C++ instead of C.
// The function name of output DLL is reformated, probably to conform all the namespaces and classes.
// Therefore, the function name is NOT identical as the source code.
// If you want to keep the function name intact, use C instead C++ to create a DLL.

#if defined(SIMPLEDLL_EXPORTS)
#define SIMPLE_DLL_API __declspec(dllexport)
#else
#define SIMPLE_DLL_API __declspec(dllimport)
#endif

// extern "C" will remove name decoration of C++ in the output DLL module.
extern "C" SIMPLE_DLL_API int GlobalReturnZero(void);
extern "C" SIMPLE_DLL_API void GlobalPrint(void);
extern "C" SIMPLE_DLL_API double GlobalAdd(double a, double b);
extern "C" SIMPLE_DLL_API double GlobalSubtract(double a, double b);
extern "C" SIMPLE_DLL_API double GlobalMultiply(double a, double b);
extern "C" SIMPLE_DLL_API double GlobalDivide(double a, double b);

namespace NameSpaceA
{
	// extern "C" will remove name decoration of C++ in the output DLL module.
	// You must make sure that there is no conflict on function names among global functions and stand-alone functions inside of namespaces.
	extern "C" SIMPLE_DLL_API int NonMemberReturnZero(void);
	extern "C" SIMPLE_DLL_API void NonMemberPrint(void);
	extern "C" SIMPLE_DLL_API double NonMemberAdd(double a, double b);
	extern "C" SIMPLE_DLL_API double NonMemberSubtract(double a, double b);
	extern "C" SIMPLE_DLL_API double NonMemberMultiply(double a, double b);
	extern "C" SIMPLE_DLL_API double NonMemberDivide(double a, double b);

	// We can NOT use extern "C" for classes, so member functions of a class will have name decoration.
	class ClassA
	{
	public:
		static SIMPLE_DLL_API int MemberReturnZero(void);
		static SIMPLE_DLL_API void MemberPrint(void);
		static SIMPLE_DLL_API double MemberAdd(double a, double b);
		static SIMPLE_DLL_API double MemberSubtract(double a, double b);
		static SIMPLE_DLL_API double MemberMultiply(double a, double b);
		static SIMPLE_DLL_API double MemberDivide(double a, double b);
	};
}

#endif
