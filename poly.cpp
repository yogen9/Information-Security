#include<iostream>
#include<string>
using namespace std;
string enc(string a,string k)
{
	int l=k.length();
	int c;
	string s;
	for(int i=0;i<a.length();i++)
	{
		if(k[i%l]>64 && k[i%l]<91)
			c=k[i%l]-65;
		if(k[i%l]>96 && k[i%l]<123)
			c=k[i%l]-97;
		if(a[i]>64 && a[i]<91)
		{
			s+=((a[i]+c-65)%26)+65;
		}
		if(a[i]>96 && a[i]<123)
		{
			s+=((a[i]+c-97)%26)+97;
		}		
			
	}
	return s;	
}
string dec(string a,string k)
{
	int l=k.length();
	int c,m;
	string s;
	for(int i=0;i<a.length();i++)
	{
		if(k[i%l]>64 && k[i%l]<91)
			c=k[i%l]-65;
		if(k[i%l]>96 && k[i%l]<123)
			c=k[i%l]-97;
		if(a[i]>64 && a[i]<91)
		{
			m=(a[i]-c-65);
			if(m<0)
			m+=26;
			s+=(m%26)+65;
		}
		if(a[i]>96 && a[i]<123)
		{
			m=(a[i]-c-97);
			if(m<0)
			m+=26;
			s+=(m%26)+97;
		}			
	}
	return s;	
}
int main()
{
	string key,original,encrypted,decrypted;
	cout<<"enter the string"<<endl;
	cin>>original;
	cout<<"enter the key"<<endl;
	cin>>key;
	encrypted=enc(original,key);
	decrypted=dec(encrypted,key);
	cout<<"encrypted text"<<endl;
	cout<<encrypted<<endl;
	cout<<"decrypted text"<<endl;
	cout<<decrypted<<endl;
	return 0;
}
