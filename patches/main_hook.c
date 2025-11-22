#include "ui_funcs.h"
#include "patches.h"
#include <PR/ultratypes.h>

extern void func_80000C54(u32* arg0);
extern void func_80001E20();

RECOMP_PATCH void func_8000256C(u32 *arg0) {
    recomp_run_ui_callbacks();
    arg0[2] = 1;
    func_80000C54(arg0);
    func_80001E20();
}