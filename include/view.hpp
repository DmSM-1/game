#pragma once
#include <iostream>
#include <string>
#include <utility>
#include <list>


using coor = std::pair<int, int>;


class Snake{
    public:
        int len;
        std::list<coor> body;    
};


class Rabbit{
    public:
        coor pos;
};


class View{
    private:

    public:
        static View* view;
        static View* get(std::string mode = "text");

        virtual ~View();

        virtual void print_name(std::string name = "Default") = 0;
};