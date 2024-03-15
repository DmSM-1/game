#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#include "control.hpp"


const double control_time = 100000.0;
char buffer[1] = {0};

int Control::start_conrol_loop(){

    // const int flags = fcntl(0, F_GETFL, 0);
    // fcntl(0, F_SETFL, flags | O_NONBLOCK);
    
    // while (buffer[0] != 'q'){
    //     if (read(0, buffer, 1) < 0)
    //         usleep(control_time);
        
    //     switch (buffer[0]){
    //         case 'w':
    //             proc.step(Up);
    //             break;
    //         case 'd':
    //             proc.step(Right);
    //             break;
    //         case 's':
    //             proc.step(Down);
    //             break;
    //         case 'a':
    //             proc.step(Left);
    //             break;
    //         default:
    //             proc.step(None);
    //             break;
    //     }

    // }
    // while (read(0, buffer, 1) >= 0);
    
    return 0;   
}