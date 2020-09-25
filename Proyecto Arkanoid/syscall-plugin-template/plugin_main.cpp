#include <iostream>
#include <stdio.h>
#include "easm.h"
#include "rlutil.h"


extern "C" ErrorCode handleSyscall(uint32_t *regs, void *mem, MemoryMap *mem_map)
{
    unsigned v0 = regs[Register::v0];

    switch (v0)
    {
        case 20: //print char a2 in position (a0,a1)
        {
            char character = regs[Register::v1];
            rlutil::locate(regs[Register::a0],regs[Register::a1]);
            std::cout << character;
            return ErrorCode::Ok;
        }
        case 21: //clear screen
        {
            rlutil::cls();
            return ErrorCode::Ok;
        }
        case 22: //set Background color
        {
            rlutil::setBackgroundColor(regs[Register::a0]);
            return ErrorCode::Ok;
        }
        case 23: //set color
        {
            rlutil::setColor(regs[Register::a0]);
            return ErrorCode::Ok;
        }
        case 24: //reset color
        {
            rlutil::resetColor();
            return ErrorCode::Ok;
        }
        case 25:
        {
            rlutil::msleep(55);
            return ErrorCode::Ok;
        }
        case 26: //print ball
        {
            char character = regs[Register::v1];
            rlutil::locate(regs[Register::a2],regs[Register::a3]);
            std::cout << character;
            return ErrorCode::Ok;
        }
        case 27: //hide cursor
        {
            rlutil::hidecursor();
            return ErrorCode::Ok;
        }
        case 28: //getch key
        {
            if(kbhit()){
                char k = getch();
                if(k == 'a' && regs[Register::t0] != regs[Register::s0]){
                    regs[Register::s0] -=1;
                }
                if(k == 'd'&& regs[Register::t1] != regs[Register::s0]+9){
                    regs[Register::s0] += 1;  
                }
            }
            return ErrorCode::Ok;
        }
        case 29: //locate
        {
            rlutil::locate(regs[Register::a0],regs[Register::a1]);
            return ErrorCode::Ok;
        }
        case 30: //draw paddle
        {
            char c = regs[Register::s3];
            rlutil::locate(regs[Register::s0],regs[Register::s1]);
            std::cout<< c << c << c << c << c << c << c << c << c << c;
            return ErrorCode::Ok;
        }
        case 31: //rand
        {
            regs[Register::a2] = 7 + (rand()% 41);
            return ErrorCode::Ok;
        }
        case 32: //blocks
        {
            rlutil::setColor(regs[Register::s5]);
            rlutil::setBackgroundColor(regs[Register::s5]);
            rlutil::locate(regs[Register::s6],regs[Register::s7]);
            std::cout<< "####";
            return ErrorCode::Ok;
        }
        case 33://erase block
        {
            rlutil::locate(regs[Register::s6],regs[Register::s7]);
            std::cout<< "    ";
            return ErrorCode::Ok;
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
