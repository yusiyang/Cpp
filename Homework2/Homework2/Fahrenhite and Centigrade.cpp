#include <iostream>
using namespace std;
double ftoc(double f){
	double c;
c=(f-32)*5/9;
return c;
}
double ctof(double c){
double f;
f=32+9*c/5;
return f;
}
int main(){
	int t;
cout<<"�밴���"<<endl<<"1:���϶�ת���϶�"<<endl<<"2:���϶�ת���϶�"<<endl;
	cin>>t;
if(t==1){
	double c,f;
cout<<"���������϶�:"<<endl;
	cin>>c;
cout<<"����Ӧ�Ļ��϶�Ϊ:"<<ctof(c)<<endl;
system("pause");
main();
}
if(t==2){
double c,f;
cout<<"�����뻪�϶�:"<<endl;
cin>>f;
cout<<"����Ӧ�����϶�Ϊ:"<<ftoc(f)<<endl;
system("pause");
main();
}
}