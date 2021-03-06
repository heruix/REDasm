#include "unittest.h"
#include "disassemblertest.h"
#include <redasm/redasm_runtime.h>

int UnitTest::run()
{
    REDasm::Runtime::syncMode(true);
    DisassemblerTest disasmtest;
    disasmtest.runTests();
    return 0;
}
