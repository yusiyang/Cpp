#include "stdafx.h"
#include<string>
#include<iostream>
#include<time.h>
#include"Phone.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	long cn;
	int pw;
	Card_201 c(123,456,3.0);

	cout<<c.getBalance()<<endl;
	cin>>cn;
	cin>>pw;
	c.performConnect(cn,pw);
	c.performDial();
	//cout.setf(ios::fixed);
	cout<<c.getBalance()<<endl;

	return 0;
}