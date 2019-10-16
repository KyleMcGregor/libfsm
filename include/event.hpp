#include "../lib/abstract_event.hpp"

class Event : public AbstractEvent { 
    public:
    Event(std::string name, std::string code);
};
