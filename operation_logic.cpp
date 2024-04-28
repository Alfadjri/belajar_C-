#include<iostream>
using namespace std;

int main(){
    bool a = true;
    bool b = false;
    bool hasil = a && b; // end hasilnya harus salah satunya gak boleh false
    cout << "Hasil true ketemu false dengan simbol and (&&) adalah " << boolalpha << hasil << endl;
    hasil = (a || b);
    cout << "Hasil true ketemu false dengan simbol or (||) adalah " << boolalpha << hasil << endl;
    hasil = !a;
    cout << "Hasil true ketemu dengan simbol ! adalah " << boolalpha << hasil << endl;

    int c = 2;
    int d = 2;

    hasil = (c < d);
    cout << "Apakah C lebih kecil dari D ? " << boolalpha << hasil << endl;
    hasil = (c > d);
    cout << "Apakah C lebih besar dari D ? " << boolalpha << hasil << endl;
    hasil = (c >= d);
    cout << "Apakah C besar sama dengan dari D ? " << boolalpha << hasil << endl;
    hasil = (c <= d);
    cout << "Apakah C kecil sama dengan dari D ? " << boolalpha << hasil << endl;
    hasil = (c == d);
    cout << "Apakah C kecil sama dengan dari D ? " << boolalpha << hasil << endl;

    char A = 'A';
    char B = 'a';

    hasil = (A >= B);
    cout << "Apakah A kecil sama dengan dari B ? " << boolalpha << hasil << endl;
    return 0;
}