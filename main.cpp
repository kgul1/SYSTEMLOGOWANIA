#include <iostream>
using namespace std;

int main() {
    int pin, proba = 0;


    while (pin != 2345 ,proba<3){
        cout<<"proba#"<<proba +1<<endl;

        cout << "podaj  pin: ";
        cin >> pin;
        if(pin!=2345)  cout << "\n nieprawidlowy pin" << endl;
        proba++;
        if((proba==3) && (pin!=2345)){
            cout<<"wykorzystales limit prob i nie odgadles hasla";
            return  0;
        }
        else if(pin==2345){
            cout<<"gratulacje wpisales prawidlowe haslo";
            return 0;
        }
    }

}
