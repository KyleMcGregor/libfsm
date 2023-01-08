#include "../lib/abstract_event.hpp"

AbstractEvent::AbstractEvent(std::string name, std::string code) : name_{name}, code_{code}{
    #ifdef DEBUG
    std::cout << name_ << " was constructed" << std::endl;
    #endif // DEBUG
}
AbstractEvent::~AbstractEvent(){
    #ifdef DEBUG
    std::cout << name_ << " was destroyed" << std::endl; 
    #endif // DEBUG
}

std::string AbstractEvent::get_name() {
    return name_;
}

const std::string& AbstractEvent::get_name(){
    return _name;
}

