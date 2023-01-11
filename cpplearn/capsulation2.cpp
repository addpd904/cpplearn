#include<iostream>
#include<string>
using namespace std;
class Person
{
	//a.structure function:no return value,classname()
	//1.classify:2 kinds:structure,clone 
public:
	Person()
	{
		cout<<"structrue func is called" << endl;
	}
	Person(int a)
	{
		cout << "structrue func is called" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "structrue func is called" << endl;
	}
	//b.destructor function:~classname();value :destroy object
	~Person()
	{
		cout << "destructor func is called" << endl;
	}
	int getage() {
		return age;
	}
private:
	int age;

};
void fuc1() {
	//c.call structrue function :3 ways
	// 1.bracket
	Person p1;
	Person p2(10);
	cout<<p2.getage()<<endl;
	Person p3(p1);
	//2.show
	Person p4=Person(10);
	Person p5=Person(p4);
	//3.implicit conversion
	//equivalent:Person p2 = Person(10);
	Person p6 = 10;

}
void func2(Person p) {

}
void func3() {
	Person p;
	//a.2.clone structrue function
	//the clone structrue function will be called
	func2(p);

}
Person func4() {
	Person p;
	//the clone structrue function will be called
	//return local object via value way
	return p;
}
int mainc2() {

	system("pause");
	return 0;
}