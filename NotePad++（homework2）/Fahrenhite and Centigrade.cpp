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
	while(true){
cout<<"�밴���"<<endl<<"1:���϶�ת���϶�"<<endl<<"2:���϶�ת���϶�"<<endl;
	cin>>t;
	
	if((t!=1)&&(t!=2)){
	cout<<"������1����2"<<endl;cin.clear();cin.sync();continue;
}

	
	else{
if(t==1){
	double c,f;
cout<<"���������϶�:"<<endl;
if(cin>>c==0){
	cout<<"����ȷ����"<<endl;cin.clear();cin.sync();continue;
}
else {
	cout<<"����Ӧ�Ļ��϶�Ϊ:"<<ctof(c)<<endl;}
cin.clear();cin.sync();
system("pause");
}

else if(t==2){
double c,f;
cout<<"�����뻪�϶�:"<<endl;
if(cin>>f==0){
	cout<<"����ȷ����"<<endl;cin.clear();cin.sync();continue;
}
else {
	cout<<"����Ӧ�����϶�Ϊ:"<<ftoc(f)<<endl;}
cin.clear();cin.sync();
system("pause");
}

	}
	}
return 0;
}