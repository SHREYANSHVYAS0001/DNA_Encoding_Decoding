#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include "mydnaheader.h"
using namespace std;   


int main(){
     ifstream file("photo.jpeg");
     ofstream file1("out.txt");
    
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
        string encoded_str = encode(line);
        file1<<encoded_str;
    }
    file.close();   
    
    file1.close();


  return 0;  
}

// To run file using header file use following command
// g++ file_to_dna.cpp encode.cpp -o myprogram1


