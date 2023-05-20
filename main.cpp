#include <iostream>
using namespace std;

int main(){

    char lettera;

    cin >> lettera;

    if(controllo(lettera)){
        cout << conversione(lettera) << endl;
    }else{
        cout << "errore" << endl;
    }

    return 0;
}
