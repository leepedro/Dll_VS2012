// DllWithExport.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "DllWithExport.h"


// This is an example of an exported variable
DLLWITHEXPORT_API int nDllWithExport=0;

// This is an example of an exported function.
DLLWITHEXPORT_API int fnDllWithExport(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see DllWithExport.h for the class definition
CDllWithExport::CDllWithExport()
{
	return;
}
