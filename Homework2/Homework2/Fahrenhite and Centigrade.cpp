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
cout<<"请按序号"<<endl<<"1:摄氏度转华氏度"<<endl<<"2:华氏度转摄氏度"<<endl;
	cin>>t;
if(t==1){
	double c,f;
cout<<"请输入摄氏度:"<<endl;
	cin>>c;
cout<<"所对应的华氏度为:"<<ctof(c)<<endl;
system("pause");
main();
}
if(t==2){
double c,f;
cout<<"请输入华氏度:"<<endl;
cin>>f;
cout<<"所对应的摄氏度为:"<<ftoc(f)<<endl;
system("pause");
main();
}
}