#include<iostream>
using namespace std;

int main(){
    int total = 0;
    int i;

    cout << "Deret Ganjil : ";

    for (i =1; i <= 19; i+= 2){
        cout << i;
        total = total + i;

        if (i < 19){
            cout << "+";
        }
    }
    cout << "=" << total << endl;
    return 0;
}