#include <string>
#include <iostream>
#include <stdio.h>
#include "market.hpp"

using namespace std;

#ifndef CPU_h
#define CPU_h

class CPU{
public:
    CPU();
    void setCPU();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;

};

CPU::CPU(){
    //empty
}

void CPU::setCPU(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.CPU(); //get cpu string

    //AMD_Ryzen-5-5600    
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);

    price = temp.CPUprice(name);
    return;
}

void CPU::specs(){
    cout << "Brand : " << brand << endl;
    cout << "CPU : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double CPU::getprice(){
    return price;
}

#endif

//GPU class
#ifndef GPU_h
#define GPU_h

class GPU{
public:
    GPU();
    void setGPU();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;
};


GPU::GPU(){
    //empty
}

void GPU::setGPU(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.GPU(); //get cpu string

    //Nividia_RTX-1080ti
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);
    price = temp.GPUprice(name);
    return;
}

void GPU::specs(){
    cout << "Brand : " << brand << endl;
    cout << "GPU : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double GPU::getprice(){
    return price;
}

#endif

//motherboard class
#ifndef MB_h
#define MB_h

class MB{
public:
    MB();
    void setMB();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;

};

MB::MB(){
    //empty
}

void MB::setMB(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.MB(); //get cpu string

    //ASUS_B55
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);
    price = temp.MBprice(name);
    return;
}

void MB::specs(){
    cout << "Brand : " << brand << endl;
    cout << "Motherboard : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double MB::getprice(){
    return price;
}

#endif

//power supply unit class
#ifndef PSU_h
#define PSU_h

class PSU{
public:
    PSU();
    void setPSU();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;

};

PSU::PSU(){
    //empty
}

void PSU::setPSU(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.PSU(); //get cpu string

    //GigaByte_1000W PSU
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);
    price = temp.PSUprice(name);
    return;
}

void PSU::specs(){
    cout << "Brand : " << brand << endl;
    cout << "PSU : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double PSU::getprice(){
    return price;
}

#endif

//RAM class
#ifndef RAM_h
#define RAM_h

class RAM{
public:
    RAM();
    void setRAM();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;

};

RAM::RAM(){
    //empty
}

void RAM::setRAM(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.RAM(); //get cpu string

    //Corsair_DDR4 64GB
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);
    price = temp.RAMprice(name);
    return;
}

void RAM::specs(){
    cout << "Brand : " << brand << endl;
    cout << "RAM : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double RAM::getprice(){
    return price;
}

#endif

//tower class
#ifndef Tower_h
#define Tower_h

class Tower{
public:
    Tower();
    void setTower();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;

};

Tower::Tower(){
    //empty
}

void Tower::setTower(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.Tower(); //get cpu string

    //NZXT_H10 Elite
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);
    price = temp.Towerprice(name);
    return;
}

void Tower::specs(){
    cout << "Brand : " << brand << endl;
    cout << "Tower : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double Tower::getprice(){
    return price;
}

#endif

//cooler class
#ifndef Cooler_h
#define Cooler_h

class Cooler{
public:
    Cooler();
    void setCooler();
    void specs();
    double getprice();
private:
    string brand;
    string name;
    double price;

};

Cooler::Cooler(){
    //empty
}

void Cooler::setCooler(){
    market temp; //temp market variable
    string str; //temp str variable
    str = temp.Cooler(); //get cpu string

    //NZXT_Kraken x61
    size_t found = str.find("_");
    name = str.substr(found+1);
    brand = str.substr(0, found);
    price = temp.Coolerprice(name);
    return;
}

void Cooler::specs(){
    cout << "Brand : " << brand << endl;
    cout << "Cooler : " << name << endl;
    cout << "Price : $" << price << endl;
    return;
}

double Cooler::getprice(){
    return price;
}

#endif