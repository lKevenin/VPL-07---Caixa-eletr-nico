#include <string>
#include <vector>

class Intruso{
    
    private:
        std::string _senha;
        std::vector<std::string> _combinacao1;
        std::vector<std::string> _combinacao2;
        
    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};