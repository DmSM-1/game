#include <iostream>
#include "view.hpp"
#include "gview.hpp"
#include "tview.hpp"


View* View::view = NULL;

View* View::get(
    const std::string mode
){

    if (view)
        return view;

    
    // if (mode == "graphic" || mode == "g"){
    //     view = new Gview;
    //     return view;
    // }

    if (mode == "text" || mode == "t"){
        view = new Tview;
        return view;
    }

    return NULL;
}

