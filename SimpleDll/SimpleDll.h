#if !defined(SAMPLEDLL_H)
#define SAMPLEDLL_H

#if defined(SIMPLEDLL_EXPORTS)
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

namespace NameSpaceA
{
	SIMPLE_DLL_API int NonMemberReturnZero(void);
	SIMPLE_DLL_API void NonMemberPrint(void);
	SIMPLE_DLL_API double NonMemberAdd(double a, double b);
	SIMPLE_DLL_API double NonMemberSubtract(double a, double b);
	SIMPLE_DLL_API double NonMemberMultiply(double a, double b);
	SIMPLE_DLL_API double NonMemberDivide(double a, double b);

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
