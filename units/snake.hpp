#pragma once
#include <list>
#include "view.hpp"
#include <iterator>


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
                std::pair(head.first - i, head.second));
            dir = Right;
        }

        void draw(){
            std::list<coor>::iterator it = body.begin();
            view.add(*it, head);
            it++;
            for(;it!=body.end(); it++)
                view.add(*it, snak);
        }

        // void step(){
        //     body.pop_back();
        //     // body.
        // }
};