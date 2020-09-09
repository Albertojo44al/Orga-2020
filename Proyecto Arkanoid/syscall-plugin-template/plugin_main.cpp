#include <iostream>
#include "easm.h"
#include "rlutil.h"

extern "C" ErrorCode handleSyscall(uint32_t *regs, void *mem, MemoryMap *mem_map)
{
    unsigned v0 = regs[Register::v0];

    switch (v0)
    {
        case 20: //print char a2 in position (a0,a1)
        {
            int x = regs[Register::a0];
            int y = regs[Register::a1];
            char character = regs[Register::a2];
            rlutil::locate(x,y);
            std::cout << character;

            return ErrorCode::Ok;
            break;
        }
        case 21: //clear screen
        {
            rlutil::cls();
            return ErrorCode::Ok;
            break;
        }
        case 22: //set Background color
        {
            rlutil::setBackgroundColor(regs[Register::a0]);
            return ErrorCode::Ok;
            break;
        }
        case 23: //set color
        {
            rlutil::setColor(regs[Register::a0]);
            return ErrorCode::Ok;
            break;
        }
        case 24: //reset color
        {
            rlutil::resetColor();
            return ErrorCode::Ok;
            break;
        }
        default:
            if (v0 > 20 && v0 <= 50)
            {
                std::cout << "Syscall: " << v0 << '\n' << std::flush;
                return ErrorCode::Ok;
            }
            else
            {
                return ErrorCode::SyscallsNotSupported;
            }
    }
}
