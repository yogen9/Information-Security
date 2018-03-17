#include<iostream>
#include<math.h>
using namespace std;

float KeyMatrix[2][2]={
                        {4,7},
                        {2,6}
                    };
float DecryMatrix[2][2]={
                        {6,-7},
                        {-2,4}
                    };

string encryAndDecry(string input,float matrix[][2])
{
    string output;
    for(int i=0;i<input.length();i+=2)
    {
        int temp[]={input[i]-97,input[i+1]-97};
        cout<<"t0 : "<<temp[0]<<" t1 : "<<temp[1]<<endl;
        int sum;
        for(int j=0;j<2;j++)
        {
            sum=0;
            for(int k=0;k<2;k++)
            {
                sum += matrix[j][k]*temp[k];
            }
            cout<<"sum : "<<sum<<endl;

            output+=(fmod(sum,26)+97);
            cout<<output<<endl;
        }
    }
    return output;
}

int main()
{
    string input;
    cin>>input;

    if((input.length()%2) != 0)
        input+="x";

    string Encrypted = encryAndDecry(input,KeyMatrix);
    cout<<"Encrypted : "<<Encrypted<<endl;

    string Decryped = encryAndDecry(Encrypted,DecryMatrix);
    cout<<"Decryped : "<<Decryped<<endl;
}
