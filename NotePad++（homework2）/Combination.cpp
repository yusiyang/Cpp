﻿#include<iostream>
using namespace std;
double factorial(double f){
if(f==0||f==1){
return 1;
}
if(f>1){
return f*factorial(f-1);
}
}
int combination(int m,int n){
return factorial(m)/(factorial(n)*factorial(m-n));
 }

int main(){
int m,n;
bool flag=true;
while (flag){
cout<<"***************************"<<endl;
cout<<"����������m��ֵ��"<<endl;
if (cin>>m==0  ||(m<=0) )
  {cout<<"����ȷ����"<<endl;cin.clear();cin.sync();continue;}

if(m>30)
  {cout<<"�е��Ŷ�ף�����С��������԰ɣ�"<<endl;cin.clear();cin.sync();continue;}

cout<<"����������n��ֵ��"<<endl;
if (cin>>n==0 || (m<n)||(n<0))
  {cout<<"����ȷ����"<<endl;cin.clear();cin.sync();continue;}
else flag=false;
}
cout<<"���ֵΪ��"<<combination(m,n)<<endl;
system("pause");
return 0;
}