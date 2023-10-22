#include <bits/stdc++.h>
using namespace std;

class DNA{
    public:
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
    string decode(string s){
        int n=s.size();
        string ans;

        // for(int i=0;i<n;i++){

        // }
        cout<<s<<endl;
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
            cout<<temp<<endl;
            // int y=
            int x=stoi(temp, 0, 2);
            char shrey=x;
            ans.push_back(shrey);
        }
        return ans;

    }
};


int main(){

    DNA dna;
    

    string s;
    cout<<"enter the string you want to encode"<<endl;
    cin>>s;
    string encoded = dna.encode(s);
    cout<<"the encoded string is ";
    cout<<encoded<<endl;
    string decoded = dna.decode(encoded);
    cout<<"the decoded string is ";
    cout<<decoded<<endl;


  return 0;  
}
