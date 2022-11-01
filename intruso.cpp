#include "intruso.hpp"

void set_senha_vazada(std::string vazou){

    std::string keys = "ABCDE"
    std::string intkeys = "1234567890"
    std::string *pch;

    pch = strpbrk(vazou, keys);
    while(pch != NULL){
        _senha += *pch;
        pch = strpbrk(pch+1, keys);
    }
}


std::string crack_senha(){


}