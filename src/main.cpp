#include <iostream>
#include <prerror.h>
#include "control.hpp"
#include "process.hpp"
#include "view.hpp"


int main(int argc, char** argv){
    
    View *view = View::get("text");

    Process proc(*view);

    Control control(proc);
    view->event_loop();


    delete(view);

    return 0;
}