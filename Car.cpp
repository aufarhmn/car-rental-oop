/**
 * Project Untitled
 */

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

/**
 * Car implementation
 */


void displayPengantar() {
    cout<<"==================="<<"\t\t ==========="<<"\t\t      ============"<<endl;
    cout<<"Daftar Mobil Rental"<<"\t\t Spesifikasi"<<"\t\t      Harga / Jam"<<endl;
    cout<<"==================="<<"\t\t ==========="<<"\t\t      ============"<<endl;
}

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

int carList(){
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
    return 0;
}


void Car::setCarNo(string carNo) {
    carNo = carNo;
}

string Car::getCarNo() {
    return carNo;
}

void Car::setCarName(string carName) {
    carName = carName;
}

string Car::getCarName() {
    return carName;
}

void Car::setCarYear(int carYear) {
    carYear = carYear;
}

int Car::getCarYear() {
    return carYear;
}

void Car::setCarSeat(int carSeat) {
    carSeat = carSeat;
}

int Car::getCarSeat() {
    return carSeat;
}

void Car::setCarTransmission(string carTransmission) {
    carTransmission = carTransmission;
}

string Car::getCarTransmission() {
    return carTransmission;
}

void Car::setCarCC(int carCC) {
    carCC = carCC;
}

int Car::getCarCC() {
    return carCC;
}

void Car::setCarPrice(int carPrice) {
    carPrice = carPrice;
}

int Car::getCarPrice() {
    return carPrice;
}

void Car::displayCarList() {
    cout << carNo << ". " << carName << " \t\t " << carYear << "  " << carSeat << " seats  " 
         << carTransmission<< "  " << carCC << " cc  " << "Rp " << carPrice << ",00" << endl;
}

Car::Car(string carNo, string carName, int carYear, int carSeat, string carTransmission, int carCC, int carPrice){
    Car::carNo = carNo;
    Car::carName = carName;
    Car::carYear = carYear;
    Car::carSeat = carSeat;
    Car::carTransmission = carTransmission;
    Car::carCC = carCC;
    Car::carPrice = carPrice;
}