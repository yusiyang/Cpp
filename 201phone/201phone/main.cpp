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
	cout<<"�����뿨�ź����룬�ÿո������"<<endl;
	cin>>cn;
	cin>>pw;
	card.performConnect(cn,pw);
	cout<<"�������Ϊ��";
	cout<<card.getBalance()<<endl;
	
	cout<<"��绰�С���"<<endl;
	card.performDial();
	cout<<"�������Ϊ��";
	cout<<card.getBalance()<<endl;
	bool flag=true;
	while(flag){
	cout<<"������"<<endl;
	cout<<"1.��  2.������"<<endl;
	cin>>choose;
	switch(choose){
	case 1:
		cout<<"��绰�С���"<<endl;
	card.performDial();
	cout<<"�������Ϊ��";
	cout<<card.getBalance()<<endl;
	break;
	case 2:
		flag=false;
		break;
	default:
		cout<<"�������"<<endl;
		break;
	}
	}
	system("pause");
	return 0;
}