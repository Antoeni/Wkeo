#ifndef market_hpp
#define market_hpp

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class market{
public:
    market();
    string CPU();
    double CPUprice(string name);
    
    string GPU();
    double GPUprice(string name);

    string MB();
    double MBprice(string name);
    
    string PSU();
    double PSUprice(string name);

    string RAM();
    double RAMprice(string name);

    string Tower();
    double Towerprice(string name);

    string Cooler();
    double Coolerprice(string name);
};

market::market(){
    //empty
}

string market::CPU(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("CPUlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("CPUlist.txt");
    cout << "Displaying List of CPU'S" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

string market::GPU(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("GPUlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("GPUlist.txt");
    cout << "Displaying List of GPU'S" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

string market::PSU(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("PSUlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("PSUlist.txt");
    cout << "Displaying List of PSU'S" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

string market::MB(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("MBlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("MBlist.txt");
    cout << "Displaying List of Motherboards" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

string market::RAM(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("RAMlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("RAMlist.txt");
    cout << "Displaying List of RAM'S" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

string market::Tower(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("Towerlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("Towerlist.txt");
    cout << "Displaying List of Cases" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

string market::Cooler(){
    ifstream in;//file input
    int lines = 0;
    int opt;

    in.open("Coolerlist.txt");

    if(in.fail()){
        cout << "filed to connect to database" << endl;
        exit(0);
    }
    string text;
    //display list of options
    while(getline(in, text)){
        lines++;
        cout << lines << ") " << text << endl;
    }

    //choose an option to return
    //reset file read
    in.close();
    in.open("Coolerlist.txt");
    cout << "Displaying List of CPU Coolers" << endl;
    cout << "Enter the option you want" << endl;
    cin >> opt;

    //search for the choosen line
    int i = 0;
    while(getline(in,text)){
        ++i;
        if(i == opt){
            cout << "Choosen : " << text << endl;
            return text;
        }
    }
}

double market::CPUprice(string name){
    string text;
    ifstream in;
    in.open("CPUprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }

    //find cpu
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(name.length()); //get the price in char form
            cout << price << endl;
            double num = stod(price);
            in.close();//close file
            return num;//return double

        }
    }
}

double market::GPUprice(string name){
    string text;
    ifstream in;
    in.open("GPUprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }

    //find cpu
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(found + name.length()); //get the price in char form
            double num = stod(price);
            in.close();//close file
            return num;//return double

        }
    }
}

double market::PSUprice(string name){
    string text;
    ifstream in;
    in.open("PSUprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }

    //find PSU
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(found + name.length()); //get the price in char form
            double num = stod(price);
            in.close();//close file
            return num;//return double
        }
    }
}

double market::MBprice(string name){
    string text;
    ifstream in;
    in.open("MBprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }

    //find cpu
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(found + name.length()); //get the price in char form
            double num = stod(price);
            in.close();//close file
            return num;//return double

        }
    }
}

double market::RAMprice(string name){
    string text;
    ifstream in;
    in.open("RAMprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }

    //find cpu
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(found + name.length()); //get the price in char form
            double num = stod(price);
            in.close();//close file
            return num;//return double

        }
    }
}

double market::Towerprice(string name){
    string text;
    ifstream in;
    in.open("Towerprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }

    //find cpu
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(found + name.length()); //get the price in char form
            double num = stod(price);
            in.close();//close file
            return num;//return double

        }
    }
}

double market::Coolerprice(string name){
    string text;
    ifstream in;
    in.open("Coolerprice.txt");

    if(in.fail()){
        cout << "Failed to connect to database" << endl;
        exit(0);
    }
    int temp = name.length();
    //find cpu
    while(getline(in, text)){
        size_t found = text.find(name);
        if(found != string::npos){
            string price = text.substr(temp); //get the price in char form
            double num = stod(price);
            in.close();//close file
            return num;//return double

        }
    }
}

#endif