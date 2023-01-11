//polymorphism /ˌpɒlɪˈmɔːfɪz(ə)m/
#include<iostream>
#include<string>
using namespace std;
//a.normal virtual function
//1.virtual function
class Animalpo1 {
public:
	virtual void eat(){
	}
};
class Rabbitpo1:public Animalpo1
{
public:
	void eat();
};
void Rabbitpo1::eat() {
	cout<<"rabbit is eating" << endl;
}
void funcpo1() {
	Rabbitpo1 ra;
	ra.eat();
}
//2.abstract class and Pure virtual function
// abstract class is a class that include Pure virtual function
// abstract class feature:can't be instantiate
class Animalpo2 {
public:
	//pure virtual function
	virtual void eat() = 0;
};
class Rabbitpo2 :public Animalpo1
{
public:
	void eat();
};
void Rabbitpo2::eat() {
	cout << "pure virtual function;rabbit is eating" << endl;
}
void funcpo2() {
	Rabbitpo2 ra;
	ra.eat();
}
//b.virtual destructor  function
//value:releasing the heap area that is created by subclass
//feature:for virtual destructor  function,we must realize it (include pure virtual destructor function)
class Animalpo3 {
public:
	//pure virtual function
	virtual void eat() = 0;
	//1.virtual destructor function
	/*virtual ~Animalpo3()
	{
		cout <<"call the superclass's destructor function " << endl;
	}*/

	//2.pure virtual destructor function
	virtual ~Animalpo3() = 0;
};

Animalpo3::~Animalpo3() {
	cout << "pure virtual;call the superclass's destructor function " << endl;
}
class Rabbitpo3 :public Animalpo1
{
public:
	void eat();
	Rabbitpo3(int a) {
		age = new int(a);
	}
	int* age;
	~Rabbitpo3() {
		cout<<"call the Rabbbit destructor fun" << endl;
		//release the heap area
		delete age;
	}
};
void Rabbitpo3::eat() {
	cout << "pure virtual function;rabbit is eating" << endl;
}
void funcpo3() {
	Rabbitpo3 ra(10);
	ra.eat();
}
int mainpol1() {
	funcpo1();
	funcpo2();
	funcpo3();
	system("pause");
	return 0;
}
