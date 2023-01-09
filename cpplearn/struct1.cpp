#include<iostream>
#include<string>
#include"multifileProgramme.h"
using namespace std;
struct student
{
	int age=1;
	int weight = 100;
	char sex='m';
	string info = "like to basketball and rap and dance";
	//create a struct stu2
}stu2;
//struct nest
struct teacher
{
	int id;
	string name;
	student stu[2];
};
void modifystu(student* stu);
int main7() {
	//一.basic grammer
	struct student stu1 = {
		12,120,'m',"like to tabletennis"
	};
	//二.array and struct
	struct student stuarr1[2] = {
		{18,129,'m',"hello"},
		{14,120,'f',"hello"}
	};
	//三.pointer and struct
	student stu4 = { 18,129,'m',"hello" };
	student* p1 = &stu4;
	cout<<"age:" <<p1->age<< endl;
	//四.struct nest
	teacher tea1;
	tea1.id = 1;
	tea1.name = "zs";
	tea1.stu[0] = {14,120,'f',"hello"};
	tea1.stu[1] = { 17,110,'m',"rap and dance" };
	//五.struct and function
	student stu5 = { 14,1100,'f',"basketball" };
	modifystu(&stu5);
	//六.struct and const
	//七.bubble sort by age
	student stuarr2[3] = {
		{18,129,'m',"hello"},
		{14,120,'f',"hello"},
		{40,150,'f',"hello"}
	};
	for (int i = 0; i < 3-1; i++) {
		for (int j = 0; j < 3-i-1; j++)
		{
			if (stuarr2[i+1].age>stuarr2[i].age)
			{
				student temp = stuarr2[i];
				stuarr2[i] = stuarr2[i + 1];
				stuarr2[i + 1] = temp;
			}
		}
	}
	system("pause");
	return 0;
}

void modifystu(student *stu) {
	stu->age = 100;
	cout<<stu->age<<endl;
}