#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	int age;
	//a.override +;
	//1.way1:override member function
	Student operator+(Student& s) {
		Student temp;
		temp.age =this->age+ s.age;
		return temp;
	}
	Student operator+(int a) {
		Student temp;
		temp.age = this->age + a;
		return temp;
	}

};
//2.override +,way2:override global function
/*
	Student operator+(Student& s1,Student &s2) {
		Student temp;
		temp.age =s1.age+ s2.age;
		return temp;
	}
*/
//b.override <<;
ostream& operator<<(ostream& out, Student& stu) {
	out << "age: " << stu.age;
	//chain programme
	return out;
}
void funco1() {
	Student s1;
	s1.age = 10;
	Student s2;
	s2.age = 20;
	//equivalent s3=s1.operator+(s2)
	Student s3 = s1 + s2;
	cout<<s3.age<<endl;
	Student s4 = s1 +100;
	cout << s4.age << endl;
}
void funco2() {
	Student s1;
	s1.age = 10;
	cout<<s1<<endl;
}
//c.override ++

class Myint {
public:
	//1.Prefix increment
	Myint& operator++() {
		++(this->num);
		return *this;
	}
	//postfix increment
	//int:Placeholder parameters for separating from prefix increment
	Myint operator++(int) {
		Myint temp = *this;
		this->num++;
		return temp;
	}
	int num=0;
};
ostream& operator<<(ostream& out,Myint& myin) {
	out << myin.num;
	return out;
}
void funco3() {
	Myint num;
	//equivalent num.operator++()
	++(++num);
	cout << num<<endl;
	num++;
	cout << num << endl;

}
int maino1() {
	funco1();
	funco2();
	funco3();
	system("pause");
	return 0;
}