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
cout<<"����������m��ֵ��"<<endl;
cin>>m;
cout<<"����������n��ֵ��"<<endl;
cin>>n;
if((m<n)||(m<=0)||(n<0))
  cout<<"����ȷ����"<<endl;
if(m>30)
  cout<<"�е��Ŷ�ף�����С��������԰ɣ�"<<endl;
else flag=false;
}
cout<<"���ֵΪ��"<<combination(m,n)<<endl;
system("pause");
main();
}