#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <windows.h>

using namespace std;

class welcome {
	public:
	int welcomeGreeting(){
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
    Sleep(1000);
    cout<<"\nStarting the program, please wait....."<<endl;
    Sleep(2000);
    system("PAUSE");
    cout << endl;
    system("CLS");
    }
};