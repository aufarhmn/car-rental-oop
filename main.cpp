#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <windows.h>
#include <string>
#include <limits>
#include "myClass/Car.h"
#include "myClass/User.h"
#include "myClass/Welcome.h"
#include "myClass/Welcome.cpp"
#include "myClass/Reservation.h"
#include "myClass/Menu.cpp"

using namespace std;

//Prototype
int login(); //Menu Login dengan password, yaitu "admin"
void greeting(); //Menampilkan judul program dan nama anggota kelompok
void menu(); //Berisi pilihan menu dan fitur yang dimiliki program ini yang diambil dari file Menu.cpp

//Fungsi Utama dari Program
int main(){   
    login(); //Memulai menu login
    greeting(); //Pembuka dari program
    menu(); //Menampilkan menu program
    return 0;
}

//Detail Fungsi Login
int login(){
    string pass ="";
    char ch;
    cout<<"\n\n\n\t\t\t\t        WELCOME TO ABC CAR RENTAL SYSTEM \n";   //Nama Program
    cout<<"\n\t\t\t\t\t================================";
    cout<<"\n\t\t\t\t\t\t     LOGIN \n";	//Mulai proses login
    cout<<"\t\t\t\t\t================================\n\n";	
    cout << "\t\t\t\t\tEnter Password: ";  //Memasukkan password
    ch = _getch();
    while(ch != 13){
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(pass == "admin"){   //Password: admin
        cout << "\n\n\t\t\t\t\t==============================";
        cout << "\n\t\t\t\t\t\tAccess Granted!";   //Jika password benar, maka akses diijinkan
        cout << "\n\t\t\t\t\t==============================" << endl;
        system("PAUSE");
        system ("CLS");
    }
    else{
        cout << "\n\n\t\t\t\t\t==============================";
        cout << "\n\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\tPlease Try Again";  //Jika akses salah, maka akses ditolak
        cout << "\n\t\t\t\t\t==============================" << endl;
        system("PAUSE");
        system("CLS");
        login(); //Kembali ke menu login
    };
}

//Menampilkan judul dan nama anggota pembuat program
void greeting(){
    Welcome view; //Memanggil class Welcome
    view.welcomeGreeting(); //Memanggil fungsi welcomeGreeting dari class Welcome
}