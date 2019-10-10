#include "../lib/abstract_event.hpp"

class Command : public AbstractEvent{ 
    public: 
    Command(std::string name, std::string code);
};
