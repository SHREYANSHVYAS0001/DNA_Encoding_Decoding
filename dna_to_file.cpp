#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include "mydnaheader.h"
using namespace std;   


int main(){
    //  ifstream file("input_dna.txt");
     ifstream file("out.bin");
     ofstream file1("output_dna.jpeg");
    
    if (!file.is_open()) {
        cout << "Failed to open the input file." << endl;
        return 1;
    }

    if (!file1.is_open()) {
        cout << "Failed to open the output file1." << endl;
        return 1;
    }
    
    string line;
    while (getline(file, line)) {
        string encoded_str = decode(line);
        file1<<encoded_str;
    }
    file.close();   
    
    file1.close();


  return 0;  
}

// To run file using header file use following command
// g++ dna_to_file.cpp decode.cpp -o myprogram2


