#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
        if ((a*x) % m == 1)
            return x;
}
int main()
{
    int p=7,q=13;
    unsigned long long int plain=10;
    int n=p*q;
    int fie = (p-1)*(q-1);
    int e;
    for(int i=2; i<fie/2; i++)
    {
        int gcd = __gcd(i,fie);
        if(gcd==1)
        {
            e=i;
            break;
        }
    }
    e=5;

    int d=modInverse(e, fie);
    unsigned long long int cipepher=(long)pow(plain,e) ;
    cipepher=cipepher%n;

    plain = pow(cipepher,d) ;
    plain = plain%n;
    cout<<"cipepher : "<<cipepher<<endl;
    cout<<"plain : "<<plain<<endl;
}
