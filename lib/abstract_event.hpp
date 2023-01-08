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
    const std::string& get_name();
};
