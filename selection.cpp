#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;

    // if case 
    if(a >= b){ 
        cout << "kondisi pertama terpenuhi" << endl;
    }

    // if else
    if(a >= b){ 
        cout << "kondisi pertama terpenuhi" << endl;
    }else{
        cout << "kondisi kedua terpenuhi" << endl;
    }

    // teneri 
    bool hasil = ( a < b) ?  true : false;
    cout << "Tarnary nilai "<< boolalpha << hasil << endl;
    char nilai = 'C';

    switch(nilai){
        case 'A' : 
            cout << "Case A" << endl;
        break;
        case 'B' : 
            cout << "Case B" << endl;
        break;
    }

    return 0;
}