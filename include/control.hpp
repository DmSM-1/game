#pragma once
#include <iostream>
#include "process.hpp"


class Control{
    private:
        Process proc;

    public:
        Control(const Process& new_proc): 
        proc(new_proc){}

        int start_conrol_loop();     


};