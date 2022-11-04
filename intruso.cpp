#include "intruso.hpp"

void set_senha_vazada(std::string vazou){

    std::string keys = "ABCDE";
    std::string intkeys = "1234567890";
    std::string numordem;
    charsenhachar;
    int coverter;

    //separando os números dos char da senha dada
    //parte dos numeros
    numordem = strpbrk(vazou, keys);
    while(numordem != NULL){
        _numeros += numordem;
        numordem = strpbrk(numordem+1, keys);
    }

    //assosiando os numeros dados a suas respectivas letras
    int k = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<2; j++){
            _combinacao[i][j] = std::stoi(_numeros[k]);
            k++;
        }
    }

    senhachar = strpbrk(vazou, keys);
    while(senhachar != NULL){

        converter =senhachar - 'A'
        for(int i = 0; i < 6; i++){

            _senha[i][0] = _combinacao[converter][0];
            _senha[i][1] = _combinacao[converter][1];
        }
        senhachar = strpbrk((senhachar+1), keys);
    }
}


std::string crack_senha(){


}