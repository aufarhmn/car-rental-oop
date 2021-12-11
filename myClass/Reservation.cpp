#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <windows.h>
#include <string>
#include <limits>
#include "Reservation.h"

using namespace std;

void Reservation::setResQuantity(int resQuantity) {
    Reservation::resQuantity = resQuantity;
}

int Reservation::getResQuantity() {
    return Reservation::resQuantity;
}

void Reservation::setResDuration(int resDuration) {
    Reservation::resDuration = resDuration;
}

int Reservation::getResDuration() {
    return Reservation::resDuration;
}

void Reservation::showReservation() {
    string line;
    ifstream file3;
    file3.open("txt/reservationdata.txt");
    while(!file3.eof()){
        getline(file3, line);
        cout << line << endl;
        }
    file3.close(); 
 }

Reservation::Reservation(int resQuantity = 0, int resDuration = 0){
    Reservation::resQuantity = resQuantity;
    Reservation::resDuration = resDuration;
};