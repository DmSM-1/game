#pragma once
#include <iostream>
#include <string>


class View{
    private:

    public:
        static View* view;
        static View* get(std::string mode = "text");

        virtual ~View();

        virtual void print_name(std::string name = "Default") = 0;
};