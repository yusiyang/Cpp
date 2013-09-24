#include<iostream>
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
cout<<"请输入整数m的值："<<endl;
if (cin>>m==0  ||(m<=0) )
  {cout<<"请正确输入"<<endl;cin.clear();cin.sync();continue;}

if(m>30)
  {cout<<"有点大哦亲，换个小点的数试试吧！"<<endl;cin.clear();cin.sync();continue;}

cout<<"请输入整数n的值："<<endl;
if (cin>>n==0 || (m<n)||(n<0))
  {cout<<"请正确输入"<<endl;cin.clear();cin.sync();continue;}
else flag=false;
}
cout<<"组合值为："<<combination(m,n)<<endl;
system("pause");
return 0;
}