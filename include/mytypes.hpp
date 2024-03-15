#pragma once
#include <utility>


using coor = std::pair<int, int>;


enum Dir{
    Right,
    Left,
    Up,
    Down,
    None,
};


enum Stat{
    bord,
    rabb,
    snak,
    head,
    empt,
};