class Transition {
    private:
    std::string name_; 
    State source_, target_; 
    Event trigger_; 

    public:
    Transition(State source, State target, Event trigger);
    State get_target(); 
    Event get_trigger();
    
};