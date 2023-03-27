#include <iostream>
#include "CompBuild.hpp"
#include "Parts.hpp"

using namespace std;

int main(){
    CompBuild test;

    cout << "Would you like to build a PC?" << endl << "Yes : 1" << endl << "No : 2" << endl;
    int opt;
    cin >> opt;
    if(opt == 1){
        test.Create();
        test.Show();
    }
    else
        return 1;
}