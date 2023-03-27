#ifndef CompBuild_h
#define CompBuild_h

#include "Parts.hpp"

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class CompBuild{
public:
    CompBuild();
    void Create(); //creates build
    void Show(); //shows build

    void setBudget();
    void setCPU();
    void setGPU();
    void setPSU();
    void setMB();
    void setRAM();
    void setTower();
    void setCooler();

    void getTotal();
    void getCPU();
    void getGPU();
    void getPSU();
    void getMB();
    void getRAM();
    void getTower();
    void getCooler();

private:
    double budget;
    double total;

    CPU cpu;
    GPU gpu;
    PSU psu;
    MB mb;
    RAM ram;
    Tower tower;
    Cooler cooler;
protected:

};

#endif

CompBuild::CompBuild(){
}

void CompBuild::Create(){
    setBudget();
    setCPU();
    setGPU();
    setPSU();
    setMB();
    setRAM();
    setTower();
    setCooler();
}

void CompBuild::Show(){
    cout << "Budget for build: $" << budget << endl;
    getTotal();//calculate total
    cout << "Total for current build: $" << total <<endl;
    cout << "CPU: " << endl;
    cpu.specs();
    cout << endl << endl;
    cout << "GPU: " << endl;
    gpu.specs();
    cout << endl << endl;
    cout << "PSU: " << endl;
    psu.specs();
    cout << endl << endl;
    cout << "MB: " << endl;
    mb.specs();
    cout << endl << endl;
    cout << "Cooler: " << endl;
    cooler.specs();
    cout << endl << endl;
    cout << "Tower: " << endl;
    tower.specs();
    cout << endl << endl;
    return;
}

void CompBuild::getTotal(){
    total += cpu.getprice();
    total += gpu.getprice();
    total += psu.getprice();
    total += mb.getprice();
    total += ram.getprice();
    total += cooler.getprice();
    total += tower.getprice();
}

void CompBuild::setBudget(){
    cout << "Set budget for new build : $";
    cin >> budget;
}

void CompBuild::setCPU(){
    cpu.setCPU();
}

void CompBuild::setGPU(){
    gpu.setGPU();
}

void CompBuild::setPSU(){
    psu.setPSU();
}

void CompBuild::setMB(){
    mb.setMB();
}

void CompBuild::setRAM(){
    ram.setRAM();
}

void CompBuild::setTower(){
    tower.setTower();
}

void CompBuild::setCooler(){
    cooler.setCooler();
}

void CompBuild::getCPU(){
    cpu.specs();
}

void CompBuild::getGPU(){
    gpu.specs();
}

void CompBuild::getPSU(){
    psu.specs();
}

void CompBuild::getMB(){
    mb.specs();
}

void CompBuild::getRAM(){
    ram.specs();
}

void CompBuild::getTower(){
    tower.specs();
}

void CompBuild::getCooler(){
    cooler.specs();
}