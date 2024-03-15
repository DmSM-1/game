#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <list>
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdlib.h>
#include <vector>
#include <functional>
#include "mytypes.hpp"




class View{
    private:

    // protected:
        // std::list<std::function> func;
        
    public:
        static View* view;
        static View* get(std::string mode = "text");

        virtual ~View();

        virtual void print_name(std::string name = "Default") = 0;

        virtual void set(const winsize& ws) = 0;

        virtual int add(const coor& coord, const Stat& stat) = 0;

        virtual void show() = 0;

        virtual void event_loop() = 0;
};