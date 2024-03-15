#include <iostream>
#include <prerror.h>
#include "control.hpp"
#include "process.hpp"
#include "view.hpp"


int main(int argc, char** argv){
    
    View *view = View::get("text");

    Process proc(*view);

    Control control(proc);
    // control.start_conrol_loop();
    view->event_loop();

    return 0;
}