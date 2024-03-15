#pragma once
#include "view.hpp"
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdlib.h>

class Tview: public View{
    private:
        struct winsize size;
    public:
        Tview(){
            ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
        }

        ~Tview(){}

        void print_name(
            std::string name = "Default"
        ){
            std::cout << name;
        }

        void set(
            winsize ws
        ){
            
        }

        // int add(
        //     std::list<coor> coors
        // ){
        //     return 0;
        // }

        // void show(

        // ){
            
        // }
};