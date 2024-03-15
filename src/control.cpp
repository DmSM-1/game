#include <stdio.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#include "control.hpp"


const double control_time = 100.0;
char buffer[1] = {0};

int Control::start_conrol_loop(){

    const int flags = fcntl(0, F_GETFL, 0);
    fcntl(0, F_SETFL, flags | O_NONBLOCK);
    
    while (buffer[0] != 'q'){
        if (read(0, buffer, 1) < 0)
            usleep(control_time);
        else if (buffer[0] != '\n')
                printf("User print: {%c}\n", buffer[0]);
        
    }
    while (read(0, buffer, 1) >= 0);
    
    return 0;   
}