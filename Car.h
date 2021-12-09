#ifndef _CAR_H
#define _CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public: 
    
void setCarNo(string carNo);

string getCarNo();
    
void setCarName(string carName);
    
string getCarName();
    
void setCarYear(int carYear);
    
int getCarYear();
    
void setCarSeat(int carSeat);
    
int getCarSeat();

void setCarTransmission(string carTransmission);

string getCarTransmission();
    
void setCarCC(int carCC);
    
int getCarCC();
    
void setCarPrice(int carPrice);
    
int getCarPrice();

void displayPengantar();

void displayCarList();

Car(string carNo, string carName, int carYear, int carSeat, string carTransmission, int carCC, int carPrice);

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