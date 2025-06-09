#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    
    // membuat obyek output file stream dalam mode menulis
    ofstream outfile;
    // membuka file 
    outfile.open("contoh file.txt");

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;
}