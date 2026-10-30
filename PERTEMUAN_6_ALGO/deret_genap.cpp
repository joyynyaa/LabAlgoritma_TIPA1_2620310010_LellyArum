#include<iostream>
using namespace std;

int main(){
    int total = 0;
    int i;

    cout << "Deret Genap :";

    for (i = 2; i <= 20; i +=2){
    cout << i;
    total = total + i;

    if (i < 20){
    cout << "+ ";}
}
    cout << " = " << total << endl;
    return 0;   
}