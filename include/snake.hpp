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
        Snake(View& new_view): view(new_view){}

        void init(const coor& head){
            len = 4;
            for(int i = 0; i < len; ++i)
                body.push_back(
                std::pair(head.first - i, head.first));
            dir = Right;
        }
};