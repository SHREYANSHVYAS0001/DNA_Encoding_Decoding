#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include "mydnaheader.h"
using namespace std;

string decode(string s){
        int n=s.size();
        string ans;
        for(int i=0;i<n;i+=5){
            string temp;
            for(int j=i;j<i+5;j++){
                if(s[j]== 'A' ){
                    temp.push_back('0');
                    temp.push_back('0');
                }
                else if(s[j]== 'T' ){
                    temp.push_back('0');
                    temp.push_back('1');
                }
                else if(s[j]== 'C' ){
                    temp.push_back('1');
                    temp.push_back('0');
                }
                else if(s[j]== 'G' ){
                    temp.push_back('1');
                    temp.push_back('1');
                }
                                
            }
            
            int x=stoi(temp, 0, 2);
            char shrey=x;
            ans.push_back(shrey);
        }
        return ans;

    }