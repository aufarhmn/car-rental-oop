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
#include "User.h"
#include "Welcome.h"
#include "Reservation.h"
#include "Menu.cpp"

using namespace std;

int login();
void greeting();
void menu();

int main(){
    login();
    greeting();
    menu();
    return 0;
}

int login(){
    string pass ="";
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout<<"\t\t\t\t\t------------------------------";
    cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
    cout<<"\t\t\t\t\t------------------------------\n\n";	
    cout << "\t\t\t\t\tEnter Password: ";
    ch = _getch();
    while(ch != 13){
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(pass == "admin"){
        cout << "\n\n\t\t\t\t\t==============================";
        cout << "\n\t\t\t\t\t\tAccess Granted!";
        cout << "\n\t\t\t\t\t==============================" << endl;
        system("PAUSE");
        system ("CLS");
    }
    else{
        cout << "\n\n\t\t\t\t\t==============================";
        cout << "\n\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\tPlease Try Again";
        cout << "\n\t\t\t\t\t==============================" << endl;
        system("PAUSE");
        system("CLS");
        login();
    };
}

void greeting(){
    welcome view;
    view.welcomeGreeting();
}