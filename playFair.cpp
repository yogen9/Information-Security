#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int key = 3;
    char mat[key][n];
    char decry[key][n];
    bool dir = true;

    for(int i=0;i<key;i++)
        for(int j=0;j<n;j++)
           decry[key][n]=mat[i][j]='\n';

    int i=0,j=0;
    for(int len=0;len<n;len++)
    {
            if(i==key-1 || i==0)
                dir = !dir;
            mat[i][j]=s[len];
            if(dir) i--;
            else i++;
            j++;
    }

    cout<<"Encryped : ";
    for(int i=0;i<key;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j]!='\n')
                cout<<mat[i][j]<<" ";

    cout<<"Decrypted : ";
    i=j=0;
    for(int len=0;len<n;len++)
    {
            if(i==key-1 || i==0)
                dir = !dir;
            mat[i][j]='*';
            if(dir) i--;
            else i++;
            j++;
    }
    for(int i=0;i<key;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j]='*')
                decry[][]=

}
