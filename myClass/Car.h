//Daftar Fungsi pada Class Car

#ifndef _CAR_H
#define _CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public: 
    
void setCarNo(string carNo); //Set kode nomor mobil

string getCarNo(); //Return nomor mobil
    
void setCarName(string carName); //Set nama mobil
    
string getCarName(); //Return nama mobil
    
void setCarYear(int carYear); //Set tahun produksi mobil
    
int getCarYear(); //Return tahun produksi mobil
    
void setCarSeat(int carSeat); //Set kapasitas tempat duduk mobil
    
int getCarSeat(); //Return kapasitas tempat duduk mobil

void setCarTransmission(string carTransmission); //Set jenis transmisi mobil

string getCarTransmission(); //Return jenis transmisi mobil
    
void setCarCC(int carCC); //Set besar CC mobil
    
int getCarCC(); //Return besar CC mobil
    
void setCarPrice(int carPrice); //Set Harga sewa mobil per jam
    
int getCarPrice(); //Return harga sewa mobil per jam

void displayCarList(); //Template untuk menampilkan list mobil yang dapat disewa

void displayPengantar(); //Menampilkan pengantar list mobil

void carList(); //Menampilkan seluruh list mobil yang dapat disewa

string arrayCarName(int i); //Return CarName sesuai dengan indeks mobil yang dipanggil

int arrayCarPrice(int z); //Return carPrice sesuai dengan indeks mobil yang dipanggil

Car(string carNo, string carName, int carYear, int carSeat, string carTransmission, int carCC, int carPrice); //Constructor
Car();

//Daftar variabel dalam class Car
private: 
    string carNo;
    string carName;
    int carYear;
    int carSeat;
    string carTransmission;
    int carCC;
    int carPrice;
};

#endif 