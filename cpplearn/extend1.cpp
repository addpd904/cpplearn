#include<iostream>
#include<string>
using namespace std;
//一、permission and extend
class Building {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//a.public
class Housee1:public Building {
public:
	void func() {
		m_a = 1;//publice
		m_b = 2;//protected
		//m_c = 3;	mistake:this is a private variable of superclass
	}
};
void funce1() {
	Housee1 h1;
	h1.m_a=1;
	//h1.m_b = 2;	mistake:this is a protected variable of instance
}
//b.protected
class Housee2 :protected Building {
public:
	void func() {
		m_a = 1;//protected
		m_b = 2;//protected
		//m_c = 3;	mistake:this is a private variable of superclass
	}
};
//c.private
class Housee3 :private Building {
public:
	void func() {
		m_a = 1;//private
		m_b = 2;//private
		//m_c = 3;	mistake:this is a private variable of superclass
	}
};
//二、object model
//check object model;developer cmd:
//cl /d1 reportSingleClassLayoutClassName "fileName"
class Animal1 {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class Dog :public Animal1 {
public:
	int m_A;
	//size of the class:16; the class will extend the not static member variable of superclass
};
//二、the member name of subclass is same with superclass
class Animale2 {
public:
	int age = 100;
	void eat() {
		cout<<"animal is eating" << endl;
	}
	//static
	static int height;
	static void say() {
		cout << "animal is saying" << endl;
	}
};

int Animale2::height = 14;

class Rabbite1 :public Animale2 {
public:
	int age =44;
	void eat() {
		cout<<"rabbit is eating" << endl;
	}
	//static
	static int height;
	static void say() {
		cout << "rabbit is saying" << endl;
	}
};
int Rabbite1::height = 22;
void funcee4() {
	Rabbite1 ra1;
	cout<<ra1.age<<endl;
	cout << ra1.Animale2::age << endl;
	ra1.eat();
	ra1.Animale2::eat();
	//static
	//access static member via instance
	ra1.height;
	ra1.Animale2::height;
	ra1.say();
	ra1.Animale2::say();
	//access static member via class
	Rabbite1::height;
	Rabbite1::say();
	Animale2::height;
	Animale2::say();
	Rabbite1::Animale2::height;
}
int mainex1() {
	funcee4();
	system("pause");
	return 0;
}