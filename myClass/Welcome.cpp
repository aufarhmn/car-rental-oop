/*
    Detail fungsi pada Class Welcome
*/

#include <iostream>
#include <fstream>
#include <windows.h>
#include "Welcome.h"

using namespace std;

/**
 * Welcome implementation
 */

//Membuka file welcome.txt untuk ditampilkan dalam program
int Welcome::welcomeGreeting() {
    ifstream in("txt/welcome.txt"); 

        if(!in) {
        cout << "Cannot open input file.\n";
        }

        char str[1000];
        while(in) {
            in.getline(str, 1000);  
            if(in) cout << str << endl;
    }

    in.close();

    Sleep(1100); //Jeda sistem
    cout<<"=======================================";
    cout<<"\nStarting the program, please wait....."<<endl;  //Transisi untuk memulai program
    cout<<"======================================="<<endl;
    Sleep(1500); //Jeda sistem
    system("PAUSE"); //Pause sistem
    cout << endl;
    system("CLS"); //Membersihkan display
}