#include <iostream>
using namespace std;

int main(){

    char lettera;

    cin >> lettera;

    if(controllo(lettera)){
        cout << true << endl;
        cout << conversione(lettera) << endl;
    }else
        cout << false << endl;

    return 0;
}
