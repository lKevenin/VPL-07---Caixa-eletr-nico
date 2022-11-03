#include "intruso.hpp"

void set_senha_vazada(std::string vazou){

    std::string keys = "ABCDE"
    std::string intkeys = "1234567890"
    std::string *numordem
    std::string *senhachar;

    //separando os números dos char da senha dada
    //parte dos char
    senhachar = strpbrk(vazou, keys);
    while(senhachar != NULL){
        _senha += *senhachar;
        senhachar = strpbrk(senhachar+1, keys);
    }

    //parte dos numeros
    numordem = strpbrk(vazou, keys);
    while(numordem != NULL){
        _numeros += *numordem;
        numordem = strpbrk(numordem+1, keys);
    }

    //assosiando os numeros dados a suas respectivas letras

}


std::string crack_senha(){


}