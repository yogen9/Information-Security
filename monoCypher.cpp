#include<iostream>
using namespace std;
char plain[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char cypher[]= {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a',
                'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
string encry(string input){
    string output;
    for(int j=0;j<input.size();j++){
        int i=0;
        while(plain[i]!=input[j])
            i++;
        output+=cypher[i];
    }
    return output;
}
string decry(string encoded){
    string output;
    for(int j=0;j<encoded.size();j++){
        int i=0;
        while(cypher[i]!=encoded[j])
            i++;
        output+=plain[i];
    }
    return output;
}
int main(){
    string input;
    cin>>input;
    string encoded=encry(input);
    cout<<"Encoded : "<<encoded<<endl;
    string decoded=decry(encoded);
    cout<<"Decoded : "<<decoded;
}

