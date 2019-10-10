#include <string>
#include <iostream> 
#include <map> 

class AbstractEvent { 
    private: 
    std::string name_, code_; 

    public: 
    AbstractEvent(std::string name, std::string code);
    ~AbstractEvent(); 
    std::string get_name();
};

class Event : public AbstractEvent { 
    public:
    Event(std::string name, std::string code);
};

class Command { 

};

class Transition {
    private:
    std::string name_; 
    State source_, target_; 
    Event trigger_; 


    public:
    Transition(State source, State target, Event trigger);
};

class State { 
    private: 
    std::string name_; 
    std::map<std::string, Transition> transitions;
};

class StateMachine {

};
