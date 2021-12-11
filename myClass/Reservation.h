#ifndef _RESERVATION_H
#define _RESERVATION_H

#include <iostream>
#include <string>

using namespace std;

class Reservation {
public: 

void addReservation();
    
void setResQuantity(int resQuantity);
    
int getResQuantity();
    
void setResDuration(int resDuration);

int getResDuration();

void showReservation();

Reservation(int resQuantity, int resDuration);

private: 
    int resQuantity;
    int resDuration;
};

#endif 