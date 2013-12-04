#include<string>
#include<iostream>
#include<time.h>
#include"Phone.h"
using namespace std;
int main()
{
	long cn;
	int pw;
	int choose;
	
	Card_201 card(123,456,3.0);
	cout<<"请输入卡号和密码，用空格隔开："<<endl;
	cin>>cn;
	cin>>pw;
	card.performConnect(cn,pw);
	cout<<"卡中余额为：";
	cout<<card.getBalance()<<endl;
	
	cout<<"打电话中……"<<endl;
	card.performDial();
	cout<<"卡中余额为：";
	cout<<card.getBalance()<<endl;
	bool flag=true;
	while(flag){
	cout<<"还打吗？"<<endl;
	cout<<"1.打  2.不打了"<<endl;
	cin>>choose;
	switch(choose){
	case 1:
		cout<<"打电话中……"<<endl;
	card.performDial();
	cout<<"卡中余额为：";
	cout<<card.getBalance()<<endl;
	break;
	case 2:
		flag=false;
		break;
	default:
		cout<<"输入错误！"<<endl;
		break;
	}
	}
	system("pause");
	return 0;
}