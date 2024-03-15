#pragma once
#include <string>
#include <random>
#include <list>
#include "view.hpp"


class Process{

    private:
        View& view;
        int size_X = NAN;
        int size_Y = NAN;
        

        

    public:
        Process(View& new_view):
        view(new_view){}

        ~Process(){}

        
};