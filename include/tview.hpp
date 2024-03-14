#pragma once
#include "view.hpp"


class Tview: public View{
    private:

    public:
        Tview(){}

        ~Tview(){}

        void print_name(
            std::string name = "Default"
        ){
            std::cout << name;
        }
};