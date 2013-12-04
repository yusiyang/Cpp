#include "stdafx.h"
#include<string>
#include<iostream>
#include<time.h>
#include"Phone.h"
using namespace std;
PhoneCard::PhoneCard(long cn,int pw,double bl,long ctn):cardnum(cn),password(pw),balance(bl),connectnum(ctn){}
Card_201::Card_201(long cn,int pw,double bl,long ctn,double dtf,bool cd):PhoneCard(cn,pw,bl,ctn)
{
	additoryFee=dtf;
	connected=cd;
}
long PhoneCard:: getCardNum(){return cardnum;}
int PhoneCard::getPassword(){return password;}
void Card_201::performConnect(long cn, int pw)
{
	if(cn!=getCardNum())
	{
		cout<<"Wrong CardNumber!"<<endl;
	}
	else if(pw!=getPassword())
		cout<<"Wrong Passwoed!"<<endl;
	else
	{
		cout<<"Link Succeed!"<<endl;
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
		connected=false;
	}
	else
	{
		cout<<"Have not Connected!"<<endl;
	}
}



