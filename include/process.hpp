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


class Process{

    private:
        View& view;
        struct winsize size;
        Snake snake;
        int rabbits_count = 10;
        std::vector<Rabbit*> rabbits;

    public:
        Process(View& new_view):
        view(new_view){
            ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);

            snake.len = 4;
            for(int i = 0; i < snake.len; ++i)
                snake.body.push_back(
                std::pair(size.ws_col/2 - i, size.ws_row/2));

            for(int i = 0; i < rabbits_count; ++i){
                rabbits.push_back(new Rabbit(
                std::pair(1+rand()%(size.ws_col-2),
                1+rand()%(size.ws_row-2))));
            }
            
        }

        ~Process(){}

        
};