#pragma once
#include <list>
#include "view.hpp"


class Rabbit{
    private:
        View& view;
        coor& pos;
    public:
        Rabbit(View& new_view, coor& new_pos): 
        view(new_view),
        pos(new_pos){}

        
};