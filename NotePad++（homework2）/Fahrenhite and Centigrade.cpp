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
cout<<"请按序号"<<endl<<"1:摄氏度转华氏度"<<endl<<"2:华氏度转摄氏度"<<endl;
	cin>>t;
	
	if((t!=1)&&(t!=2)){
	cout<<"请输入1或者2"<<endl;cin.clear();cin.sync();continue;
}

	
	else{
if(t==1){
	double c,f;
cout<<"请输入摄氏度:"<<endl;
if(cin>>c==0){
	cout<<"请正确输入"<<endl;cin.clear();cin.sync();continue;
}
else {
	cout<<"所对应的华氏度为:"<<ctof(c)<<endl;}
cin.clear();cin.sync();
system("pause");
}

else if(t==2){
double c,f;
cout<<"请输入华氏度:"<<endl;
if(cin>>f==0){
	cout<<"请正确输入"<<endl;cin.clear();cin.sync();continue;
}
else {
	cout<<"所对应的摄氏度为:"<<ftoc(f)<<endl;}
cin.clear();cin.sync();
system("pause");
}

	}
	}
return 0;
}