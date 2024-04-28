#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 3;
    int hasil;
    float hasil_float;

    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;
    hasil_float = 5.0 / 3.0;
    cout << a << " / " << b << " = " << hasil_float << endl;
    hasil = a % b; // sisa pembagian modulus 
    cout << a << " % " << b << " = " << hasil << endl;

    int c = 5;
    // mempersingkat c = c + 1 ;
    c++;
    cout << 5 << " + " << 1 << " = " << c << endl;

    // mempersingkat c = c - 1;
    c--;
    cout << 6 << " - " << 1 << " = " << c << endl;
    return 0;
}