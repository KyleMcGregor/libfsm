#include <iostream>
#include "../lib/event.hpp"


using str = std::string;

void copy_an_event_test(){ 
    Event ev (str("Start"), str("STRT"));
    Event ev2{ev};
    

}


int main(int argc, char **argv){ 
    Event ev (std::string("Hello"), std::string("World"));
    std::cout << ev.get_name() << std::endl;

    std::cout <<  ev.get_name() << std::endl;
    return 0; 
}

