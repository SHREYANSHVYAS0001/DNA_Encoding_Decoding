#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include "mydnaheader.h"
using namespace std;

string encode(string s){
int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            int x = s[i];
            string temp = bitset<10>(x).to_string();
            for(int j=0;j<10;j+=2){
                if(temp[j]=='0'){
                    if(temp[j+1]=='0'){
                        ans.push_back('A');
                    }
                    else{
                        ans.push_back('T');
                    }
                }
                else{
                    if(temp[j+1]=='0'){
                        ans.push_back('C');
                    }
                    else{
                        ans.push_back('G');                        
                    }
                }
            }
        }
        return ans;
    }