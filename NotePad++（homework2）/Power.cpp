#include <iostream>
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
cout<<"请输入x的值："<<endl;
cin>>x;
cout<<"请输入y的值："<<endl;
cin>>y;
if(((x==0)&&(y==0))||(x<0)){
	cout<<"输入错误"<<endl;}
else
	flag=false;
}
cout<<"x的y次幂为："<<power(x,y)<<endl;
flag=true;
system("pause");
}
}