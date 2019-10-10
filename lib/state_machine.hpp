#include "../lib/state.hpp"
#include "../lib/transition.hpp"
#include "../lib/event.hpp"

class StateMachine {
    private: 
    State start_state_, current_state_;

    public: 
    
    void handle(Event event); 

};