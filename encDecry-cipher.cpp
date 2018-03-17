#include<iostream>
#include<math.h>
using namespace std;

string enc(string input,int key){
    string result;
    for(int i=0;i<input.length();i++)
    {
        result+=(input[i]+key-97)%26+97;
    }
    return result;
}
string decry(string input,int key){
    string result;
    key%=26;
    for(int i=0;i<input.length();i++)
    {
        char out=input[i]-key-97;
        if(out<0){
            out=(26+out);
        }
        result+=(out)%26+97;
    }
    return result;
}
int main(){
    string test;
    int key=51;
    cin>>test;
    string encrypt = enc(test,key);
    cout<<"Encrypted :"<<encrypt;
    string dec = decry(encrypt,key);
    cout<<endl<<"Decrypted : "<<dec;
    return 0;
}


