#include<iostream>
#include<string>
using namespace std;
//一、Multiple inheritance/ɪnˈherɪtəns/
//a.Diamond inheritance
class Animalm1 {
public:
	int m_age;
};

class Rabbitmi1 :public Animalm1 {
};
class Rabbitmi2 :public Animalm1 {
};
class Rabbitmi3 :public Rabbitmi1, public Rabbitmi2 {

};
void funmi1() {
	Rabbitmi3 ra1;
	ra1.Rabbitmi1::m_age = 30;
	ra1.Rabbitmi2::m_age = 99;
	cout<< ra1.Rabbitmi1::m_age <<endl;
	cout << ra1.Rabbitmi2::m_age << endl;
}
//a.question from Diamond inheritance:two property m_age,waste memory
//solve:use virtual base class
class Animalm2 {
public:
	int m_age;
};
//use virtual base class,the m_age just have one
class Rabbitmi4 :virtual public Animalm2 {
};
class Rabbitmi5 :virtual public Animalm2 {
};
class Rabbitmi6 :public Rabbitmi4, public Rabbitmi5 {

};
void funmi2() {
	Rabbitmi6 ra1;
	//the m_age just have one
	ra1.m_age = 30;
	ra1.Rabbitmi5::m_age = 30;
	cout << "virtual base class solve " << ra1.Rabbitmi4::m_age << endl;
}

int mainect1() {
	funmi1();
	funmi2();
	system("pause");
	return 0;
}