#include<iostream>
using namespace std;

string key="information";

string encry(string input){
    string output;
    for(int i=0;i<input.size();i++)
    {
        output+=(input[i]+key[i%key.size()]-97)%26+97;
    }

    return output;
}
string decry(string encoded){
    string output;
    for(int i=0;i<encoded.size();i++)
    {
        //output+=(encoded[i]-key[i%key.size()]-97)%26+97;
        char out=encoded[i]-key[i%key.size()]-97;
        if(out<0){
            out=(26+out);
        }
        output+=(out)%26+97;
    }
    return output;
}
int main()
{
    string input;
    getline(cin,input);
    cout<<input;
    string encoded=encry(input);
    cout<<"Encoded : "<<encoded<<endl;
    string decoded=decry(encoded);
    cout<<"Decoded : "<<decoded;
}
