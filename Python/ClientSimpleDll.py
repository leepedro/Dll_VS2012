import ctypes

if __name__ == '__main__':
    # Load a DLL file.
    lib1 = ctypes.WinDLL('SimpleDll.dll')
    
    # Functions without input/output arguments.
    func_print_noarg_1 = getattr(lib1, "?GlobalPrint@@YAXXZ")
    func_print_noarg_2 = getattr(lib1, "?NonMemberPrint@NameSpaceA@@YAXXZ")
    func_print_noarg_3 = getattr(lib1, "?MemberPrint@ClassA@NameSpaceA@@SAXXZ")
    func_print_noarg_1()
    func_print_noarg_2()
    func_print_noarg_3()
    
    # Functions without input arguments and with integer output arguments.
    func_print_default_out_1 = getattr(lib1, "?GlobalReturnZero@@YAHXZ")
    func_print_default_out_2 = getattr(lib1, "?NonMemberReturnZero@NameSpaceA@@YAHXZ")
    func_print_default_out_3 = getattr(lib1, "?MemberReturnZero@ClassA@NameSpaceA@@SAHXZ")
    out_default_1 = func_print_default_out_1()
    print(out_default_1)
    out_default_2 = func_print_default_out_2()
    print(out_default_2)
    out_default_3 = func_print_default_out_3()
    print(out_default_3)
    
    # Functions with input/out arguments.
    func_print_custom_1 = getattr(lib1, "?GlobalAdd@@YANNN@Z")
    func_print_custom_2 = getattr(lib1, "?NonMemberAdd@NameSpaceA@@YANNN@Z")
    func_print_custom_3 = getattr(lib1, "?MemberAdd@ClassA@NameSpaceA@@SANNN@Z")
    func_print_custom_1.argtypes = [ctypes.c_double, ctypes.c_double]
    func_print_custom_1.restype = ctypes.c_double
    out_custom_1 = func_print_custom_1(1.0, 2.0)
    print(out_custom_1)
    func_print_custom_2.argtypes = [ctypes.c_double, ctypes.c_double]
    func_print_custom_2.restype = ctypes.c_double
    out_custom_2 = func_print_custom_2(1.0, 2.0)
    print(out_custom_2)
    func_print_custom_3.argtypes = [ctypes.c_double, ctypes.c_double]
    func_print_custom_3.restype = ctypes.c_double
    out_custom_3 = func_print_custom_3(1.0, 2.0)
    print(out_custom_3)
    
    print("Completed.")