/**
 Detail Fungsi User
 */


#include "User.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Implementasi setter dan getter pada class User untuk memudahkan mengambil dan mengatur member class

void User::setName(string name) {
    User::name = name;
}

string User::getName() {
    return User::name;
}

void User::setNoTelp(string noTelp) {
    User::noTelp = noTelp;
}

string User::getNoTelp() {
    return User::noTelp;
}

void User::setNik(string nik) {
    User::nik = nik;
}

string User::getNik() {
    return User::nik;
}

void User::setAlamat(string alamat) {
    User::alamat = alamat;
}

string User::getAlamat() {
    return User::alamat;
}

//construktor user untuk menginput nilai dari variabel pada user

User::User(string name = "no name", string noTelp = "0", string nik = "0", string alamat = "Invalid"){
    User::name = name;
    User::noTelp = noTelp;
    User::nik = nik;
    User::alamat = alamat;
}
