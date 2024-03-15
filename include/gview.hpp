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

        void set(
            const winsize& ws
        ){
            
        }

        int add(
            const int& len,
            const std::list<coor, Stat>& coors
        ){
            return 0;
        }

        void show(

        ){
            
        }
};