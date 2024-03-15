#pragma once
#include <string>
#include <list>
#include <vector>
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdlib.h>
#include <iterator>
#include "view.hpp"
#include "snake.hpp"
#include "rabbit.hpp"
#include "mytypes.hpp"
#include <array>


class Process{

    private:
        View& view;
        struct winsize size;
        Snake& snake;
        int rabbits_count = 10;
        std::vector<Rabbit*> rabbits;
        
    public:
        Process(View& new_view):
        view(new_view),
        snake(*(new Snake(new_view))){
            ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
            size.ws_row -= 2;
            view.set(size);

            snake.init(std::pair(size.ws_col/2, size.ws_row/2));
        }

        void step(Dir d){
            snake.draw();
            view.show();
        }

            // // init snake
            // snake.len = 4;
            // for(int i = 0; i < snake.len; ++i)
            //     snake.body.push_back(
            //     std::pair(size.ws_col/2 - i, size.ws_row/2));

            // // init rabbits
            // for(int i = 0; i < rabbits_count; ++i){
            //     rabbits.push_back(new Rabbit(
            //     std::pair(1+rand()%(size.ws_col-2),
            //     1+rand()%(size.ws_row-2))));
            // }
            
        
        // view.set(size);
        // view.show();

        ~Process(){}

        
};