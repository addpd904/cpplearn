#include<iostream>
#include<string>
using namespace std;
//template function,make datatype become a parameter
//a.basic grammer
template <typename ty>
void myswap(ty & a1,ty & b1) {
	ty temp = a1;
	a1 = b1;
	b1 = temp;
}
void funtem1() {
	int a = 1;
	int b = 2;
	//1.auto infer datatype
	myswap(a, b);
	cout << a << b << endl;
	float c = 10;
	float d = 20;
	//2.pass datatype
	myswap<float>(c, d);
}
//b.different in normal func and template func
//normal func:have Implicit type conversions
//template func. pass datatype:have Implicit type conversions;auto infer datatype:have not Implicit type conversions
int myadd(int a, int b) {
	return a + b;
}
template <typename T>
int myadd2(T a, T b) {
	return a + b;
}
void functem2() {
	int a = 10;
	char b = 'a';
	//will take place a Implicit type conversions
	myadd(a, b);
	//myswap3(a, b);mistake
	//will take place a Implicit type conversions
	myadd2<int>(a,b);
}
//c.rule about calling
//normal func firstly
//we can call template func via <>
int mysub(int a, int b) {
	return a - b;
}
template <typename T>
int mysub(T a, T b) {
	return a - b;
}
void funtemp4(){
	int a = 20;
	int b = 10;
	//call normal func
	mysub(a, b);
	//call template func
	mysub<>(a, b);
}
//d.specific template func for specific calling
class Student {
public:
	Student(int age) {
		this->m_age = age;
	}
	int m_age;
};
template <typename T>
bool mycompare(T& a, T& b) {
	if (a > b) {
		return true;
	}
	else
	{
		return false;
	}
}
//specific template func
template<>
bool mycompare(Student& stu1, Student& stu2) {
	if (stu1.m_age > stu2.m_age) {
		return true;
	}
	else
	{
		return false;
	}
}
void functemp3() {
	Student stu1(10);
	Student stu2(20);
	//call the specific template func
	bool res=mycompare(stu1, stu2);
	cout<<res<<endl;
}
int maintem2() {
	funtem1();
	functemp3();
	system("pause");
	return 0;
}