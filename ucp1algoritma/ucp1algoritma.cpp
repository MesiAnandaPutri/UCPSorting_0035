// ucp1algoritma.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 1. Algoritma yang bekerja dengan cara membandingkan elemen
//  yang bersebelahan secara berulang kali
// 2. membagi data menjadi beberapa increament lalu mengurutkannya,
//  ulang hingga increament 1
// 3. dengan cara menukar dan mencari elemen terkecil/terbesar
// 4. 

#include <iostream>
using namespace std;

int mesi[35];
int n;

void input() {       // procedur untuk input
    while (true) {
        cout << "Menampilkan Jumlah Data : ";// Output ke layar
        cin >> mesi[35];  // Input dari pengguna
        if (n <= 35) // Jika n kurang dari atau sama dengan 35
            break; // keluar dari loop

        else { // Jika n lebih dari 35
            cout << "\nArray hanya dapat menampung 35 elemen\n"; //output ke layar
        }
    }
    cout << endl; //output baris kosong
    cout << "=================\n"; //output ke layar
    cout << "Masukkan Elemen Array\n"; //output ke layar
    cout << "================\n"; //output ke layar

    for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //output ke layar
        cin >> mesi[i]; //input dari pengguna
    }

}

void selection() {

    for(int j=0;j<=n-2;j++){ // step 
        int min=j; // step 2(a)
        for (int i=j+1;i<=n-1;i++){ // step 2 (b)
            if (mesi[i] < mesi[min]) { // step 2 (c)
                min = i; // step i

            }
        }
        if (min!=j){
            int temp = mesi[j];
            mesi[j] = mesi[min];
            mesi[min] = temp; // step 3
        }
        
    }
}

void display() {
    cout << endl;
    cout << "=====" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=====" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << mesi[j];
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}

int main()
{
    input();
    selection();
    display();
    system("pause");
    return 0;
}