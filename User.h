#ifndef _USER_H
#define _USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
public:
    
void setName(string name);
    
string getName();
    
void setNoTelp(string noTelp);
    
string getNoTelp();
    
void setNik(string nik);
    
string getNik();
    
void setAlamat(string alamat);
    
string getAlamat();

User(string name, string noTelp, string nik, string alamat);

private: 
    string name;
    string noTelp;
    string nik;
    string alamat;
};

#endif 