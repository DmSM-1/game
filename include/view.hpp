#pragma once
#include <iostream>
#include <string>


class View{
    private:

    public:
        static View* view;
        static View* get(std::string mode = "text");

        virtual ~View();
};