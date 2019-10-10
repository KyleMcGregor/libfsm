#include <string> 
#include <map> 
#include "../lib/transition.hpp"
#include "../lib/event.hpp"

class State { 
    private: 
    std::string name_; 
    std::map<std::string, Transition> transitions;
    public: 
    bool responds_to(std::string code); 
    bool responds_to(Event event);
    void add_transition(Transition transition);
    bool operator==(std::string oth); 

};