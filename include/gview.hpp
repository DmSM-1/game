#pragma once
#include "view.hpp"


class Gview: public View{
    private:

    public:
        Gview(){}

        ~Gview(){}
    
        void print_name(
            std::string name = "Default"
        ){
            std::cout << name;
        }
};