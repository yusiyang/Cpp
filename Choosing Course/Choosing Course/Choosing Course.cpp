#include <iostream>
using namespace std;
struct Student{
	char name[20];
	int number;
	int score;
}students[100];
int Count = 0;//������
void input(struct Student &student){
	bool flag=true;
	while(flag){
cout<<"������";
if(cin>>student.name==0){
cout<<"����ȷ���룡"<<endl;cin.clear();cin.sync();continue;
}
cout<<"ѧ�ţ�";
if(cin>>student.number==0){
cout<<"����ȷ���룡"<<endl;cin.clear();cin.sync();continue;
}
else{flag=false;}
	}
}
int findname(char*name){
	int i;
	for(i=0;i<Count;i++){
		if(strcmp(students[i].name,name) == 0)//�����ַ��ȽϺ����������Ƿ��������
		{
			break;
		}
	}
	return i;
}//�������ң��ȶԣ���������
void list(){
cout<<"����\t"<<"ѧ��\t"<<"�ɼ�"<<endl;
for(int i=0;i<Count;i++){
cout<<students[i].name<<"\t";
cout<<students[i].number<<"\t";
cout<<students[i].score<<endl;
}
cout<<"**********************"<<endl;
}
void addstudent(){
struct Student student;

input(student);
int i=findname(student.name);
if(i==Count){
strcpy(students[i].name,student.name);
students[i].number=student.number;
Count++;
cout<<"ѡ�γɹ���"<<endl;
}
else{cout<<"�ǲ��Ǹ���ˣ�"<<endl;}
while(Count>100){
cout<<"������������";Count-=Count;
}
}

void deletestudent(){
	struct Student student;
	input(student);
	int j,k=0,i = findname(student.name);
	if(i ==Count){
		cout<<"�������"<<endl;
	}else{
		for(int j=i;j<Count-1;j++)
		{
			//while((students[j].name[k++]=students[j+1].name[k++])!='\0')//������name�ɺ���ǰ���룬����������'\0'һ������ǰ����{
			students[j].number=students[j+1].number;
			strcpy(students[j].name,students[j+1].name);
			students[j].score=students[j+1].score;}
		}
		Count--;
   

	}

void addscore(){
	struct Student student;
	cout<<"������ѧ��������"<<endl;
	cin>>student.name;
	cout<<"������ѧ��ѧ�ţ�"<<endl;
	cin>>student.number;
	int i = findname(student.name);
	if(i==Count){
		cout<<"δ���ҵ���ѧ����"<<endl;
	}else{
		cout<<"�ɼ���";

		cin>>student.score;
		students[i].score = student.score;
	}

}

int main(){
int action;
bool flag=true;

while(flag){
cout<<"��������ѡ��Ŀ����"<<endl;
cout<<"(1)������"<<endl;
cout<<"(2)ѡ��"<<endl;
cout<<"(3)��ѡ"<<endl;
cout<<"(4)¼��ɼ�"<<endl;
cout<<"(5)�˳�����"<<endl;
if(cin>>action==0){
	cout<<"�������"<<endl;cin.clear();cin.sync();continue;}

switch(action){
case 1:
	list();
	break;
case 2:
	addstudent();
	break;
case 3:
	deletestudent();
	break;
case 4:
	addscore();
	break;
case 5:
	return 0;
default:
	cout<<"�������!"<<endl;
	break;
}
}
}
