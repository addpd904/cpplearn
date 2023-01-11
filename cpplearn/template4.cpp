#include<iostream>
#include<string>
using namespace std;
//ready for realizing the friend global function outside class
//if we realize the friend global function outside class,we need to let compiler konw in advance that global func.
//start
template <typename T>
class Persontempl2;
template <typename T>
void showAge2(Persontempl2<T> p) {
	cout << p.m_age << endl;
}
//end

//a.realize friend global function
//1.realize the friend global function in class
template <typename T>
class Persontempl {
public:
	//the func that is modified by friend is a global func.It isn't a member func.
	friend void showAge(Persontempl<T> p) {
		cout<<p.m_age<<endl;
	}
	Persontempl(T ag) {
		this->m_age = ag;
	}
private:
	int m_age;
};
void functemp11() {
	Persontempl<int> p(10);
	showAge(p);
}

//2.realize the friend global function outside class

template <typename T>
class Persontempl2 {
public:
	//the func that is modified by friend is a global func.It isn't a member func.
	friend void showAge2<>(Persontempl2<T> p);
	Persontempl2(T ag) {
		this->m_age = ag;
	}
private:
	int m_age;
};
void functemp12() {
	Persontempl2<int> p(10);
	showAge2(p);
}

int maintemm() {
	functemp11();
	functemp12();
	system("pause");
	return 0;
}