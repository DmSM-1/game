#pragma once
#include <list>
#include "view.hpp"


class Snake{
    private:
        View& view;
        int len;
        Dir dir;      
        std::list<coor> body;  
    public:
        // Snake(coor head){

        // }
};