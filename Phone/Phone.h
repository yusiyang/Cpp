#include "stdafx.h"
#include<string>
class PhoneCard
{
private:
	long cardnum;
	int password;
protected:
	long connectnum;
	double balance;
public:
	PhoneCard(long cn,int pw,double bl,long ctn);
	virtual void performDial(){};
	long getCardNum();
	int getPassword();
};

class Card_201:public PhoneCard
{
private:
	double additoryFee;
	bool connected;
public:
	Card_201(long cn,int pw,double bl,long ctn=201,double dtf=0.03,bool cd=false);
	void performConnect(long cn, int pw);
	double getBalance();
	void performDial();
};