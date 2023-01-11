#include<iostream>
#include<string>
using namespace std;
//a.override =
class Person3 {
public:
	int * age;
	Person3(int a) {
		this->age = new int(a);
	}
	//override =
	Person3& operator=(Person3 & p){
		if (this->age != NULL) {
			//release the space
			delete this->age;
			this->age = NULL;
		}
		//deep copy
		this->age = new int(*p.age);
		//for chain programme ;just like p1=p2=p3
		return *this;
	}
	//b.override relational operator
	bool operator==(Person3& p) {
		if (*this->age == *p.age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}


};
void funcoo1() {
	Person3 p1(100);
	Person3 p2(200);
	Person3 p3(50);
	//equivalent p2.operator=(p1);return p2
	p3=p2 = p1;
	cout<<*p3.age<<endl;
}
void funcoo2() {
	Person3 p1(100);
	Person3 p2(100);
	if (p1 == p2) {
		cout<<"equal" << endl;
	}
}
//c.override ();pseudo-function
class Myadd {
public:
	int operator()(int a,int b){
		return a + b;
	}
};
void funcoo4() {
	Myadd ma;
	//pseudo-function:ma(4, 5)
	cout<<ma(4, 5)<<endl;
	cout << Myadd()(99, 100) << endl;
}
int main0p1() {
	funcoo1();
	funcoo2();
	funcoo4();
	system("pause");
	return 0;
}