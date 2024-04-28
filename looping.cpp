#include <iostream>
using namespace std;

int main(){
    // looping while
    // pengecekan di awal 
    int i = 10;
    while(i < 10){ // check 
        // ekseskus
        cout << i << endl;
        i++;
    }
    // looping do while
    // pengecekana di akhir
    int j = 5;
    do{
        // ekseskusi 
        j = j + 1;
        cout << j << endl;
    }while(j < 5); // check 

    // for 
    // untuk nilai yang sudah di ketahui ketetapannya;
    for(int k = 0 ; k < 5 ; k++){
         cout << k << endl;
    }
    cout << endl;
    int arr[] = {1,2,3,4,5};

    for(int elm : arr){
        cout << elm << endl;
    }
    


    return 0;
}