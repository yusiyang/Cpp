﻿#include <iostream>
using namespace std;
double power(float x,int y){
	if((x==0)&&(y!=0)){
	return 0;
	}
	if((x!=0)&&(y==0)){
	return 1;
	}
	else{
return x*power(x,y-1);
	}
}
int main(){
	float x;
	int y;
	bool flag=true;
while(true){
	while(flag){
cout<<"������x��ֵ��"<<endl;
cin>>x;
cout<<"������y��ֵ��"<<endl;
cin>>y;
if(((x==0)&&(y==0))||(x<0)){
	cout<<"�������"<<endl;}
else
	flag=false;
}
cout<<"x��y����Ϊ��"<<power(x,y)<<endl;
flag=true;
system("pause");
}
}