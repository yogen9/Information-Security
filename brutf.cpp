#include<iostream>
using namespace std;

class bfa{
    string encry_text;
public:
    bfa(){
        cout<<"Enter encrypted text :";
        cin>>encry_text;
        cout<<endl<<"KEY"<<'\t'<<"PLAIN TEXT"<<endl;
        for(int i=1;i<26;i++){
            cout<<i<<'\t'<<decryption(i,encry_text)<<endl;
        }
    }

    string decryption(int k,string str){
        string ans="";
        k=k%26;
        for(int i=0;i<str.length();i++){
            if(isupper(str[i]))
                if(str[i]-k-65 < 0)
                    ans += char(int(str[i]-k-65+26)%26 + 65);
                else
                    ans += char(int(str[i]-k-65)%26 + 65);
            else
                if(str[i]-k-97 < 0)
                    ans += char(int(str[i]-k-97+26)%26 + 97);
                else
                    ans += char(int(str[i]-k-97)%26 + 97);
        }
        return ans;
    }
};
int main(){
    bfa obj;
    return 0;
}
