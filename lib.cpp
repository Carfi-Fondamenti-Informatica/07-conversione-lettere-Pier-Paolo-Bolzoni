#include "lib.h"

bool controllo(char a){
    return ((a >= 'A' && a <= 'Z')  ||  (a >= 'a' && a <= 'z' ));
}
char conversione(char b) {
    if (b >= 'a' && b <= 'z') {
        return b - 32;
    } else if (b >= 'A' && b <= 'Z') {
        return b + 32;
    }
}
