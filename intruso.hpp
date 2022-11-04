#include <string>
#include <vector>

class Intruso{

    private:

        std::string _numeros;
        int _combinacao[5][2];
        int _senha[6][2];

    public:

        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};