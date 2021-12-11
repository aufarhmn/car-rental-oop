/**
 * Detail Fungsi Class Car
 */

#include <iostream>
#include <string>
#include <vector>
#include "Car.h"

using namespace std;

/**
 * Car implementation
 */

//Setter Nomor Mobil
void Car::setCarNo(string carNo) {
    carNo = carNo;
}

//Getter Nomor Mobil
string Car::getCarNo() {
    return carNo;
}

//Setter Nama Mobil
void Car::setCarName(string carName) {
    carName = carName;
}

//Getter Nama Mobil
string Car::getCarName() {
    return carName;
}

//Setter Tahun Mobil
void Car::setCarYear(int carYear) {
    carYear = carYear;
}

//Getter Tahun Mobil
int Car::getCarYear() {
    return carYear;
}

//Setter Kapasitas Tempat Duduk Mobil
void Car::setCarSeat(int carSeat) {
    carSeat = carSeat;
}

//Getter Kapasitas Tempat Duduk Mobil
int Car::getCarSeat() {
    return carSeat;
}

//Setter Transmisi Mobil
void Car::setCarTransmission(string carTransmission) {
    carTransmission = carTransmission;
}

//Getter Transmisi Mobil
string Car::getCarTransmission() {
    return carTransmission;
}

//Setter CC Mobil
void Car::setCarCC(int carCC) {
    carCC = carCC;
}

//Getter CC Mobil
int Car::getCarCC() {
    return carCC;
}

//Setter Harga Mobil
void Car::setCarPrice(int carPrice) {
    carPrice = carPrice;
}

//Getter Harga Mobil
int Car::getCarPrice() {
    return carPrice;
}

//Fungsi untuk menampilkan list mobil
void Car::displayCarList() {
    cout << carNo << ". " << carName << " \t\t " << carYear << "  " << carSeat << " seats  " 
         << carTransmission<< "  " << carCC << " cc  " << "Rp " << carPrice << ",00" << endl;
}

//Constructor
Car::Car(string carNo, string carName, int carYear, int carSeat, string carTransmission, int carCC, int carPrice){
    Car::carNo = carNo;
    Car::carName = carName;
    Car::carYear = carYear;
    Car::carSeat = carSeat;
    Car::carTransmission = carTransmission;
    Car::carCC = carCC;
    Car::carPrice = carPrice;
}

//Constructor default untuk Class Car
Car::Car(){
    Car::carNo = "";
    Car::carName = "";
    Car::carYear = 0;
    Car::carSeat = 0;
    Car::carTransmission = "";
    Car::carCC = 0;
    Car::carPrice = 0;
}

//Mengisi object car
Car car1("01", "Toyota Avanza", 2018, 7, "M/T", 1300, 12500);
Car car2("02", "Toyota Innova", 2019, 7, "A/T", 2000, 30000);
Car car3("03", "Toyota Agya", 2021, 7, "M/T", 2400, 11500);
Car car4("04", "Toyota Calya", 2021, 7, "M/T", 1300, 12500);
Car car5("05", "Toyota Alphard", 2021, 7, "A/T", 2500, 150000);
Car car6("06", "Toyota Camry", 2021, 5, "A/T", 2500, 130000);
Car car7("07", "Toyota Fortuner", 2021, 7, "A/T", 2400, 80000);
Car car8("08", "Mitsubishi Xpander", 2019, 7, "A/T", 1500, 25000);
Car car9("09", "Mitsubishi Pajero", 2021, 7, "A/T", 2400, 80000);
Car car10("10", "Honda CRV Prestige", 2020, 7, "A/T", 1500, 80000);
Car car11("11", "Honda HRV Prestige", 2020, 5, "A/T", 1800, 27000);
Car car12("12", "Daihatsu Xenia", 2019, 7, "A/T", 1300, 15000);
Car car13("13", "Daihatsu Sigra", 2020, 7, "M/T", 1200, 12000);
Car car14("14", "Mercedes Benz E250", 2017, 5, "A/T", 2000, 160000);
Car car15("15", "Mercedes Benz E300", 2018, 5, "A/T", 2000, 180000);

//Fungsi untuk menampilkan pengantar list mobil
void displayPengantar() {
    cout<<"==================="<<"\t\t ==========="<<"\t\t      ============"<<endl;
    cout<<"Daftar Mobil Rental"<<"\t\t Spesifikasi"<<"\t\t      Harga / Jam"<<endl;
    cout<<"==================="<<"\t\t ==========="<<"\t\t      ============"<<endl;
}

//Menampilkan Kumpulan List Mobil
void carList(){
    displayPengantar();
    car1.displayCarList();
    car2.displayCarList();
    car3.displayCarList();
    car4.displayCarList();
    car5.displayCarList();
    car6.displayCarList();
    car7.displayCarList();
    car8.displayCarList();
    car9.displayCarList();
    car10.displayCarList();
    car11.displayCarList();
    car12.displayCarList();
    car13.displayCarList();
    car14.displayCarList();
    car15.displayCarList();
}

//Return CarName sesuai dengan indeks mobil yang dipanggil
string arrayCarName(int i){
    int b;
    b = i - 1;
    const int numCars = 15;
    Car cars[numCars];
    cars[0] = car1;
    cars[1] = car2;
    cars[2] = car3;
    cars[3] = car4;
    cars[4] = car5;
    cars[5] = car6;
    cars[6] = car7;
    cars[7] = car8;
    cars[8] = car9;
    cars[9] = car10;
    cars[10] = car11;
    cars[11] = car12;
    cars[12] = car13;
    cars[13] = car14;
    cars[14] = car15;

    return cars[b].getCarName();
}

//Return carPrice sesuai dengan indeks mobil yang dipanggil
int arrayCarPrice(int z){
    int a;
    a = z - 1;
    const int numCars = 15;
    Car cars[numCars];
    cars[0] = car1;
    cars[1] = car2;
    cars[2] = car3;
    cars[3] = car4;
    cars[4] = car5;
    cars[5] = car6;
    cars[6] = car7;
    cars[7] = car8;
    cars[8] = car9;
    cars[9] = car10;
    cars[10] = car11;
    cars[11] = car12;
    cars[12] = car13;
    cars[13] = car14;
    cars[14] = car15;

    return cars[a].getCarPrice();
}