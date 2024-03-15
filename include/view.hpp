#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <list>
#include <sys/ioctl.h>


using coor = std::pair<int, int>;


enum Dir{
    Right,
    Left,
    Up,
    Down
};


class Snake{
    public:
        int len;
        Dir dir;      
        std::list<coor> body;    
};


class Rabbit{
    public:
        coor pos;
        Rabbit(coor new_pos):pos(new_pos){}
};


class View{
    private:
        struct winsize size;
    public:
        static View* view;
        static View* get(std::string mode = "text");

        virtual ~View();

        virtual void print_name(std::string name = "Default") = 0;
};