#include<string>
#include<iostream>
#include<time.h>
#include"Phone.h"
using namespace std;
PhoneCard::PhoneCard(long cn,int pw,double bl,long ctn):cardNumber(cn),password(pw),balance(bl),connectNumber(ctn){}
Card_201::Card_201(long cn,int pw,double bl,long ctn,double dtf,bool cd):PhoneCard(cn,pw,bl,ctn)
{
	additoryFee=dtf;
	connected=cd;
}
long PhoneCard:: getCardNum(){return cardNumber;}
int PhoneCard::getPassword(){return password;}
void Card_201::performConnect(long cn, int pw)
{
	if(cn!=getCardNum())
	{
		cout<<"���Ŵ���"<<endl;

	}
	
	else if(pw!=getPassword()){
			cout<<"�������"<<endl;
		}
	else
	{
		cout<<"���ӳɹ�!"<<endl;
		connected=true;
	}

}

double Card_201::getBalance()
{
	return balance;
}
void Card_201::performDial()
{
	if(connected)
	{
		balance=balance-0.3-additoryFee;
		while(balance<0)
			//cout<<"���㣡"<<endl;
		{connected=false;}
	}
	else
	{
		cout<<"δ����!"<<endl;
	}
}


