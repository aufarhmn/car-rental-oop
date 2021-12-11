#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <string>
#include <limits>
#include "Car.h"
#include "Car.cpp"
#include "User.h"
#include "User.cpp"
#include "Reservation.h"
#include "Reservation.cpp"

using namespace std;

//Prototype fungsi
int editReservation(); //Prototype fungsi untuk mengubah reservasi
int endReservation();  //Prototype fungsi untuk mengubah status reservasi menjadi "Reservasi Selesai"
int showInvoice(int s); //Prototype fungsi untuk menampilkan invoice

//Deklarasi variabel global dan pembuatan object dari Class
string nama1, noTelp1, alamat1;
string NIK1;
User dataUser;
Reservation res;
int resDuration1, resQuantity1, carSelect, totalPrice; //Deklarasi variabel lokal
Reservation dataReservasi; //Deklarasi variabel dataReservasi dalam Class Reservation

//Fungsi utama  dari program car rental
void menu(){
    ifstream in2("txt/menu.txt"); //Membuka menu.txt untuk menampilkan menu apa saja yang terdapat pada program ini

    if(!in2) {
    cout << "Cannot open input file.\n"; //Error handling jika file menu.txt tidak dapat dibuka
    }

    //Mengubah menu.txt dari txt menjadi string
    char str2[1000];
    while(in2) {
        in2.getline(str2, 1000); //Menampilkan menu yang sudah dalam bentuk string dalam display program  
        cout << endl;
        if(in2) cout << str2 << endl;
    }
    in2.close(); //Menutup file menu.txt

    //Deklarasi variabel untuk local variabel, Class Reservation, dan Class User
    int a;
    cout << endl << "Masukkan menu yang ingin Anda pilih: " << endl; //Input dari terinal terkait menu yang akan dipilih
    cin >> a;
    switch(a){
        case 1: {
        cout << "Anda Memilih Menu Car List" << endl;  //Menu pertama adalh menampilkan mobil yang dapat disewa
        cout << "Loading Car List..." << endl;
        Sleep(1000); //Jeda sistem
        system("cls"); //Menampilkan menu dalam display program
        carList(); //Memanggil fungsi carList() yang terdapat pada class car, fungsi ini menampilkan secara detail mobil dan spesifikasinya
        system("Pause"); //Jeda sistem
        system("cls"); ////Menampilkan menu dalam display program
        menu(); //Memanggil fungsi menu kembali
        break;
        }

        case 2: {
        cout << "============================"<<endl;
        cout << "Anda memilih Add Reservation" << endl; //Menu kedua adalah menu untuk menambahkan reservasi
        cout << "============================"<<endl;
        cout << "Silahkan input data User" << endl;
        cout << "Nama          :"; //Memasukkan nama user sebagai penyewa mobil
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Memerintahkan kepada program untuk tidak membatasi panjang string yang diinputkan
        getline(cin, nama1); //Menyimpan input nama ke variabel nama1
        dataUser.setName(nama1); //Menyimpan nama1 ke Class User
        cout << "Nomor Telepon :"; //Memasukkan nomor telepon peyewa mobil
        cin >> noTelp1; //Menyimpan input nomor telepon dari user ke variabel noTelp1
        dataUser.setNoTelp(noTelp1); //Menyimpan variabel noTelp1 ke Class User
        cout << "NIK           :"; //Memasukkan NIK penyewa mobil
        cin >> NIK1; //Menyimpan NIK ke variabel NIK1
        dataUser.setNik(NIK1); //Menyimpan NIK1 ke Class User 
        cout << "Alamat        :"; //Memasukkan alamat penyewa mobil
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Memerintahkan kepada program untuk tidak membatasi panjang string yang diinputkan
        getline(cin, alamat1); //Menyimpan input alamat ke variabel alamat1 
        dataUser.setAlamat(alamat1); //Menyimpan variabel alamat1 ke Class User
        cout << "============================"<<endl;
        cout << "Menyimpan data...." << endl;
        Sleep(1000); //Jeda sistem
        cout << "Data Anda berhasil disimpan!" << endl;
        cout << "============================"<<endl;
        Sleep(1000); //Jeda sistem
        system("cls"); //Membersihkan display
        cout << "Loading Car List...." << endl;
        Sleep(2000);//Jeda sistem
        carList(); //Memanggil fungs carList() untuk menampilkan daftar mobil yang dapat dipilih
        
        
        cout << endl << endl << endl;
        cout << "Silahkan pilih mobil yang Anda inginkan" << endl; //Memilih mobil yang akan disewa
        cout << "Input berdasarkan mobil yang ingin dirental : (Tanpa Angka 0, contoh: 1) "<<endl;
        cin >> carSelect; //Menyimpan pilihan mobil yang akan disewa
        cout << endl;
        cout << "------------------------------------------------------------------"<<endl;
        cout << "Berapa lama Anda ingin meminjam mobil ? (Input dalam jam) "<<endl; //Memasukkan durasi peminjaman mobil
        cin >> resDuration1; //Memasukkan durasi peminjaman mobil ke varibel resDuration1
        dataReservasi.setResDuration(resDuration1); //Menyimpan resDuration1 ke Class Reservation
        cout <<"Berapa mobil yang ingin Anda sewa ? "<<endl; //Memasukkan jumlah mobil yang akan disewa
        cin >> resQuantity1; //Menyimpan jumlah mobil yang akan disewa ke variabel resQuantity1
        dataReservasi.setResQuantity(resQuantity1); //Menyimpan resQuantity1 ke Class resQuantity1
        switch(carSelect){
            case 1: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(1); //Memanggil fungsi showInvoice dengan nilai 1
            menu();
            break;
            }

            case 2: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem 
            showInvoice(2); //Memanggil fungsi showInvoice dengan nilai 2
            menu();
            break;
            }

            case 3: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(3); ////Memanggil fungsi showInvoice dengan nilai 3
            menu();
            break;
            }

            case 4: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(4); ////Memanggil fungsi showInvoice dengan nilai 4
            menu();
            break;
            }

            case 5: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(5); ////Memanggil fungsi showInvoice dengan nilai 5
            menu();
            break;
            }

            case 6: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(6); ////Memanggil fungsi showInvoice dengan nilai 6
            menu();
            break;
            }

            case 7: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(7); ////Memanggil fungsi showInvoice dengan nilai 7
            menu();
            break;
            }

            case 8: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(8); ////Memanggil fungsi showInvoice dengan nilai 8
            menu();
            break;
            }

            case 9: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(9); ////Memanggil fungsi showInvoice dengan nilai 9
            menu();
            break;
            }

            case 10: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(10); ////Memanggil fungsi showInvoice dengan nilai 10
            menu();
            break;
            }

            case 11: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(11); ////Memanggil fungsi showInvoice dengan nilai 11
            menu();
            break;
            }

            case 12:{
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(12); ////Memanggil fungsi showInvoice dengan nilai 12
            menu();
            break;
            }

            case 13: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(13); ////Memanggil fungsi showInvoice dengan nilai 13
            menu();
            break;
            }

            case 14: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(14); ////Memanggil fungsi showInvoice dengan nilai 14
            menu();
            break;
            }

            case 15: {
            system("CLS"); //Membersihkan display program
            cout << "Loading Invoice";
            Sleep(2000); //Jeda sistem
            showInvoice(15); ////Memanggil fungsi showInvoice dengan nilai 15
            menu();
            break;
            }
        }
        break;
        }

        case 3: {
        system("cls"); //Membersihakan display program agar rapi
        cout << "==================================" << endl;
        cout << "Anda memilih Menu Reservation List" << endl; //Menu daftar reservasi
        cout << "==================================" << endl;
        res.showReservation(); //Memanggil fungsi showReservation() yang terdapat pada Class Reservation
        system("pause"); //Pause sistem
        system("cls"); //Membersihakan display program agar rapi
        menu(); //Memanggil fungsi menu()
        break;
        }

        case 4: {
        system("cls"); //Membersihkan display program agar rapi
        cout << "==================================" << endl;
        cout << "Anda memilih Menu Edit Reservation" << endl; //Menu edit reservasi
        cout << "==================================" << endl;
        cout << "Loading reservation list....." << endl;
        Sleep(1000); //Jeda sistem
        res.showReservation(); //Memanggil fungsi showReservation() yang terdapat pada Class Reservation
        editReservation(); //Memanggil fungsi edit reservation
        system("pause"); //Pause sistem
        Sleep(1000); //Jeda sistem
        system("cls"); //Membersihakan display program agar rapi
        menu(); //Memanggil fungsi menu()
        break;
        }

        case 5: {
        system("cls"); //Membersihakan display program agar rapi
        cout << "=================================" << endl;
        cout << "Anda memilih Menu End Reservation" << endl; //Menu end reservation
        cout << "=================================" << endl;
        cout << "Loading reservation list....." << endl;
        Sleep(1000); //Jeda sistem
        res.showReservation(); //Memanggil fungsi showReservation() yang terdapat pada Class Reservation
        endReservation(); //Memanggil fungsi endReservation()
        system("pause"); //Pause sistem
        system("cls"); //Membersihakan display program agar rapi
        menu(); //Memanggil fungsi menu()
        break;
        }

        case 6: {
        cout << "===================" << endl;
        cout << "Menutup Program...." << endl; //Menu exit program
        cout << "===================" << endl;
        Sleep(1000); //Jeda sistem
        system("cls"); //Membersihakan display program agar rapi
        system("exit"); //Memerintahkan program untuk menutup eksekusi program
        break;
        }
    }
}

int editReservation(){ //Fungsi editReservation
    ifstream read; //Deklarasi variabel file read
    ofstream write; //Deklarasi variabel file read

    string edit; //Deklarasi variabel string edit
    cout << "================================================="<<endl;
    cout << "Keyword untuk mengubah data reservasi: " << endl;
    cout << "'Nama' untuk mengubah nama user"<< endl;
    cout << "'Nomor Telepon' untuk mengubah nomor telepon user"<< endl;
    cout << "'NIK' untuk mengubah NIK user"<< endl;
    cout << "'Alamat' untuk mengubah alamat user"<< endl;
    cout << "================================================="<<endl;
    cout << "Input keyword data yang akan diedit: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Memerintahkan kepada program untuk tidak membatasi panjang string yang diinputkan
    getline(cin, edit); //Memasukkan keyword
    if (edit == "Nama"){ //Jika keyword yang diinputkan adalah 'Nama'
        read.open("txt/reservationdata.txt", ios::in); //Membuka file reservationdata.txt
        write.open("txt/temp.txt", ios::app); //Membuka file temp.txt
        string old, New, addName, a; //Deklarasi variabel
        cout << "Masukkan nama yang akan diubah: "; //Memasukkan nama yang ingin diubah
        getline(cin, old); //Memasukkan nama yang ingin diubah ke variabel old
        cout << "Masukkan nama baru: "; //Memasukkan nama baru
        getline(cin, New); //Memasukkan nama yang ingin diubah ke variabel new

        while (!read.eof()) { //Membaca file input read
            getline(read, a); //Mengubah file input read menjadi string a
            addName = "Nama              :" + old; //Deklarasi variabel addName + old
            if (a == addName) {  //Jika ditemukan nama yang lama, maka akan diubah menjadi nama yang baru
                write << "Nama              :" << New << endl;
                cout << "Nama berhasil diubah" << endl;
            }
            else { 
                write << a << endl; //String yang tidak sesuai dengan apa yang dicari tidak akan diubah
            }
        }
        read.close(); //Menutup file read
        write.close(); //Menutup file write

        remove("txt/reservationdata.txt"); //Menghapus file read reservationdata.txt
        rename("txt/temp.txt", "txt/reservationdata.txt"); //Mengubah nama file temp.txt menjadi reservationdata.txt
    }
    else if (edit == "Nomor Telepon"){ //Jika keyword yang diinputkan adalah 'Nomor Telepon'
        read.open("txt/reservationdata.txt", ios::in); //Membuka file reservationdata.txt
        write.open("txt/temp.txt", ios::app); //Membuka file temp.txt
        string old, New, addNoTelp, a; //Deklarasi variabel
        cout << "Masukkan nomor telepon yang akan diubah: ";
        getline(cin, old);
        cout << "Masukkan nomor telepon yang baru: ";
        getline(cin, New);

        while (!read.eof()) {
            getline(read, a);
            addNoTelp = "Nomor Telepon     :" + old;
            if (a == addNoTelp) { 
                write << "Nomor Telepon     :" << New << endl;
                cout << "Nomor Telepon berhasil diubah" << endl;
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
                cout << "NIK berhasil diubah" << endl;
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
                cout << "Alamat berhasil diubah" << endl;
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

int endReservation(){ //Fungsi endReservation()
    ifstream read; //Deklarasi file read
    ofstream write; //Deklarasi file write
    string oldName, New, a, addName; //Deklarasi variabel

    read.open("txt/reservationdata.txt", ios::in); //Membuka file reservationdata.txt
    write.open("txt/temp.txt", ios::app); //Membuka file temp.txt
    cout << "Input nama dari data Reservasi yang telah selesai: "; //Menginputkan nama yang ingin diubah statusnya menjadi selesai
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Memerintahkan kepada program untuk tidak membatasi panjang string yang diinputkan
    getline(cin, oldName); //Memasukkan input nama dalam variabel oldName
    while (!read.eof()) { //Membaca file input read
        getline(read, a); //Mengubah file input read menjadi string a
        addName = "Nama              :" + oldName; //Deklarasi variabel addName + oldName
        if (a == addName) { //Jika ditemuakan string yang sesuai
            write << "Nama              :" << oldName << "  -----| RESERVASI SELESAI |-----" << endl; //Ditambahkan RESERVASI SELESAI
        }
        else {  
            write << a << endl; //String lain yang tidak sesuai tidak akan diubah
        }
    }
    read.close();//Menutup file read
    write.close(); //Menutup file write
    remove("txt/reservationdata.txt"); //Menghapus file reservationdata.txt
    rename("txt/temp.txt", "txt/reservationdata.txt");  //Mengubah nama file temp.txt menjadi reservationdata.txt
    return 0;
}

int showInvoice(int s){
    srand( time(NULL) ); int number = rand() % 10000; //Deklarasi untuk menghasilkan angka yang random untuk dimasukkan dalam Invoice
    totalPrice = dataReservasi.getResDuration() * dataReservasi.getResQuantity() * arrayCarPrice(s); //Formulasi untuk menghitung totalPrice
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10) << number <<" |"<<endl; //Memunculkan nomor acak
    cout << "\t\t	| Nama pengguna:"<<"-----------------|"<<setw(10) << dataUser.getName() <<" |"<<endl; //Memunculkan nama user sebagai penyewa
    cout << "\t\t	| Nama Mobil :"<<"-------------------|"<<setw(10) << arrayCarName(s) << " |"<<endl; //Memunculkan nama mobil
    cout << "\t\t	| Jumlah Mobil :"<<"-----------------|"<<setw(10) << dataReservasi.getResQuantity() <<" |"<<endl;
    cout << "\t\t	| Lama peminjaman :"<<"--------------|"<<setw(10) << dataReservasi.getResDuration() <<" |"<<endl;
    cout << "\t\t	| Harga peminjaman mobil :"<<"-------|"<<setw(10) << arrayCarPrice(s) <<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\n";
    cout << "\t\t	| Total harga peminjaman mobil :"<<"-|"<<setw(10)<< totalPrice <<" |"<<endl; 
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	   Terima kasih sudah menggunakan jasa rental mobil kami"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	                     By ABC Rental Car"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    system("PAUSE");
    system ("CLS");
    ofstream file2;
    file2.open("txt/reservationdata.txt", ios::app);
    file2 << "Nama              :" << dataUser.getName() << endl;
    file2 << "Nomor Telepon     :" << dataUser.getNoTelp() <<endl; 
    file2 << "NIK               :" << dataUser.getNik() << endl; 
    file2 << "Alamat            :" << dataUser.getAlamat() << endl;
    file2 << "Jenis Mobil       :" << arrayCarName(s) << endl;
    file2 << "Jumlah Mobil      :" << dataReservasi.getResQuantity() << endl;
    file2 << "Lama Peminjaman   :" << dataReservasi.getResDuration() << endl;
    file2 << "Total Biaya       :" << totalPrice << endl << endl;
    file2.close(); 
}