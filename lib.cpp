bool controllo(char b) {
    if ((b >= 'a') and (b <= 'z')  or  ((b >= 'A') and (b <= 'Z'))) {
        return true;
    } else {
        return false;
    }
}
char conversione(char b){

    if ((b >= 'a') and (b <= 'z')){
        b-=32;
        return b;
    }else if ((b >= 'A') and (b <= 'Z')){
        b+=32;
        return b;
    }
