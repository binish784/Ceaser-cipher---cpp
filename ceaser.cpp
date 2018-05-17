#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char plain[50];
	int num[50];
	int en[50];
	int i=0;
	int count=0;
	int k=5;
	cout<<"Enter String:\t";
	cin>>plain;
	cout<<"Encryption:\t";
	for(i=0;i<strlen(plain);i++){
		num[i]=int(plain[i])%97;
		en[i]=((num[i]+k)%26)+97;
		cout<<char(en[i]);
		}
	cout<<"\nDecryption:\t";
	for(i=0;i<strlen(plain);i++){
		en[i]=en[i]%97;
		num[i]=((en[i]-k)%26)+97;
		cout<<char(num[i]);
		}

	
}
