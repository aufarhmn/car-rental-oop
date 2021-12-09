#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <windows.h>
#include <string>
#include <limits>
#include "Car.h"
#include "Car.cpp"
#include "User.h"
#include "User.cpp"
#include "Reservation.h"
#include "Reservation.cpp"

using namespace std;

int editReservation();

void menu(){
    ifstream in2("txt/menu.txt"); 

    if(!in2) {
    cout << "Cannot open input file.\n";
    }

    char str2[1000];
    while(in2) {
        in2.getline(str2, 1000);  
        cout << endl;
        if(in2) cout << str2 << endl;
    }
    in2.close();

    Reservation res;
    int a;
    string nama1, noTelp1, alamat1;
    string NIK1;
    User dataUser;
    cout << endl << "Masukkan menu yang ingin Anda pilih: " << endl;
    cin >> a;
    switch(a){
        case 1: {
        cout << "Anda Memilih Menu Car List" << endl;
        cout << "Loading Car List..." << endl;
        Sleep(1000);
        system("cls");
        carList();
        system("Pause");
        system("cls");
        menu();
        break;
        }

        case 2: {
        cout << "Anda memilih Add User" << endl;
        cout << "Silahkan input data User" << endl;
        cout << "Nama          :";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, nama1);
        dataUser.setName(nama1);
        cout << "Nomor Telepon :";
        cin >> noTelp1;
        dataUser.setNoTelp(noTelp1);
        cout << "NIK           :";
        cin >> NIK1;
        dataUser.setNik(NIK1);
        cout << "Alamat        :";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        getline(cin, alamat1);
        dataUser.setAlamat(alamat1);
        cout << endl << "Menyimpan data...." << endl;
        Sleep(1000);
        cout << "Data Anda berhasil disimpan!" << endl;
        Sleep(1000);
        system("cls");
        cout << "Loading Car List...." << endl;
        Sleep(2000);
        carList();
        
        int resDuration1, resQuantity1, carSelect, z = 1, totalPrice;
        Reservation dataReservasi[100];
        cout << endl << endl << endl;
        cout << "Silahkan pilih mobil yang Anda inginkan" << endl;
        cout << "Input berdasarkan mobil yang ingin dirental : (Tanpa Angka 0, contoh: 1) "<<endl;
        cin >> carSelect;
        cout << endl;
        cout << "------------------------------------------------------------------"<<endl;
        cout << "Berapa lama Anda ingin meminjam mobil ? (Input dalam jam) "<<endl;
        cin >> resDuration1;
        dataReservasi[z].setResDuration(resDuration1);
        cout <<"Berapa mobil yang ingin Anda sewa ? "<<endl;
        cin >> resQuantity1;
        dataReservasi[z].setResQuantity(resQuantity1);
        z++;

        switch(carSelect){
            case 1: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car1.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<<" |"<<endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<" |"<<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car1.getCarName() << " |"<<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 <<" |"<<endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 <<" |"<<endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car1.getCarPrice() <<" |"<<endl;
            cout << "\t\t	 ________________________________________________________"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice <<" |"<<endl; 
            cout << "\t\t	 ________________________________________________________"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car1.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 2: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car2.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car2.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car2.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car2.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 3: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car3.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car3.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car3.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car3.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 4: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car4.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car4.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car4.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car4.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 5: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car5.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car5.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car5.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car5.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 6: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car6.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car6.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car6.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car6.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 7: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car7.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car7.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car7.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car7.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 8: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car8.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car8.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car8.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car8.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 9: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car9.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car9.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car9.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car9.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 10: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car10.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car10.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car10.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car10.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 11: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car11.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car11.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car11.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car11.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 12: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car12.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car12.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car12.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car12.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 13: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car13.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car13.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car13.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car13.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 14: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car14.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car14.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car14.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car14.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }

            case 15: {
            system("CLS");
            cout << "Loading Invoice";
            Sleep(2000);
            totalPrice = resDuration1 * resQuantity1 * car15.getCarPrice();
            cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) <<"#PROGRAM KEREN"<< endl;
            cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<endl;
            cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << car15.getCarName() <<endl;
            cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << resQuantity1 << endl;
            cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << resDuration1 << endl;
            cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << car15.getCarPrice() <<endl;
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\n";
            cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice << endl; 
            cout << "\t\t	 ========================================================"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
            system ("CLS");
            ofstream file2;
            file2.open("txt/reservationdata.txt", ios::app);
            file2 << "Nama              :" << dataUser.getName() << endl;
            file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
            file2 << "NIK               :" << dataUser.getNik() << endl; 
            file2 << "Alamat            :" << dataUser.getAlamat() << endl;
            file2 << "Jenis Mobil       :" << car15.getCarName() << endl;
            file2 << "Jumlah Mobil      :" << resQuantity1 << endl;
            file2 << "Lama Peminjaman   :" << resDuration1 << endl;
            file2 << "Total Biaya       :" << totalPrice << endl << endl;
            file2.close(); 
            menu();
            break;
            }
        }}
        break;

        case 3: {
        system("cls");
        cout << "Anda memilih Menu Reservation List" << endl;
        res.showReservation();
        system("pause");
        system("cls");
        menu();
        break;
        }

        case 4: {
        system("cls");
        cout << "Anda memilih Menu Edit Reservation" << endl;
        cout << "Loading reservation list....." << endl;
        Sleep(1000);
        res.showReservation();
        editReservation();
        system("pause");
        system("cls");
        menu();
        break;
        }

        case 5: {
        cout << "Menutup Program...." << endl;
        Sleep(1000);
        system("cls");
        system("exit");
        break;
        }
    }
}

int editReservation(){
    ifstream read; 
    ofstream write;

    string edit;
    cout << "================================================="<<endl;
    cout << "Keyword untuk mengubah data reservasi: " << endl;
    cout << "'Nama' untuk mengubah nama user"<< endl;
    cout << "'Nomor Telepon' untuk mengubah nomor telepon user"<< endl;
    cout << "'NIK' untuk mengubah NIK user"<< endl;
    cout << "'Alamat' untuk mengubah alamat user"<< endl;
    cout << "================================================="<<endl;
    cout << "Input keyword data yang akan diedit: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, edit);
    if (edit == "Nama"){
        read.open("txt/reservationdata.txt", ios::in);
        write.open("txt/temp.txt", ios::app);
        string old, New, addName, a;
        cout << "Masukkan nama yang akan diubah: ";
        getline(cin, old);
        cout << "Masukkan nama baru: ";
        getline(cin, New);

        while (!read.eof()) {
            getline(read, a);
            addName = "Nama              :" + old;
            if (a == addName) { 
                write << "Nama              :" << New << endl; 
            }
            else { 
                write << a << endl; 
            }
        }
        read.close();
        write.close();

        remove("txt/reservationdata.txt");
        rename("txt/temp.txt", "txt/reservationdata.txt");
    }
    else if (edit == "Nomor Telepon"){
        read.open("txt/reservationdata.txt", ios::in);
        write.open("txt/temp.txt", ios::app);
        string old, New, addNoTelp, a;
        cout << "Masukkan nomor telepon yang akan diubah: ";
        getline(cin, old);
        cout << "Masukkan nomor telepon yang baru: ";
        getline(cin, New);

        while (!read.eof()) {
            getline(read, a);
            addNoTelp = "Nomor Telepon     :" + old;
            if (a == addNoTelp) { 
                write << "Nomor Telepon     :" << New << endl; 
            }
            else { 
                write << a << endl; 
            }
        }
        read.close();
        write.close();

        remove("txt/reservationdata.txt");
        rename("txt/temp.txt", "txt/reservationdata.txt");
    }
    else if (edit == "NIK"){
        read.open("txt/reservationdata.txt", ios::in);
        write.open("txt/temp.txt", ios::app);
        string old, New, addNIK, a;
        cout << "Masukkan NIK yang akan diubah: ";
        getline(cin, old);
        cout << "Masukkan NIK yang baru: ";
        getline(cin, New);

        while (!read.eof()) {
            getline(read, a);
            addNIK = "NIK               :" + old;
            if (a == addNIK) { 
                write << "NIK               :" << New << endl; 
            }
            else { 
                write << a << endl; 
            }
        }
        read.close();
        write.close();

        remove("txt/reservationdata.txt");
        rename("txt/temp.txt", "txt/reservationdata.txt");
    }
    else if (edit == "Alamat"){
        read.open("txt/reservationdata.txt", ios::in);
        write.open("txt/temp.txt", ios::app);
        string old, New, addAlamat, a;
        cout << "Masukkan alamat yang akan diubah: ";
        getline(cin, old);
        cout << "Masukkan alamat yang baru: ";
        getline(cin, New);

        while (!read.eof()) {
            getline(read, a);
            addAlamat = "Alamat            :" + old;
            if (a == addAlamat) { 
                write << "Alamat            :" << New << endl; 
            }
            else { 
                write << a << endl; 
            }
        }
        read.close();
        write.close();

        remove("txt/reservationdata.txt");
        rename("txt/temp.txt", "txt/reservationdata.txt");
    }
    else{
        cout << "\nMohon input sesuai dengan kategori yang ada\n" << endl;
    }
    
    return 0;
}