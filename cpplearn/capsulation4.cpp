#include<iostream>
#include<string>
using namespace std;
//a.
// 1.memory allocate 
//just the not static member variable is belong to instance.
//the member function isn't belong to instance
//2.this pointer
//value:we can us it directly;return the object via returning *this

class Car {
public:
	int weight;
	Car(int a) {
		weight = a;
	}
	//app:Chain programme;must return a reference Car&(represent of himself)
	Car& addWeight(Car& c) {
		this->weight += c.weight;

		return *this;
	}
	void PrintWeight() {
		cout<<"printing" << endl;
		if (this == NULL) {
			cout << "you use a NULL pointer to call the function" << endl;
			return ;
		}
		cout<<this->weight<<endl;
	}
};
void func1() {
	//3.NULL pointer call member function
	Car* c1 = NULL;
	c1->PrintWeight();
}
//b.const function:can't able to modify member variable but to mutable variable
//const instace:can't able to call normal function,just can call const function,his member var isn't modified .
class House {
public:
	int area;
	mutable int height;
	//1.const function
	void func1(int a)const {
		//error demo:this->area = a;
		//const func equivalent:const House * const this;so the member can't able to modify
		this->height = a;
	}
	void func2() {
		cout<<"thhis a normal function" << endl;
	}
};
void funch3() {
	//2.const instance
	const House h1;
	//mistake:h1.func2(),can't able to call normal function
}
int mainc4() {
	Car c1(10);
	Car c2(20);
	c2.addWeight(c1).addWeight(c1).addWeight(c1);
	cout<<c2.weight<<endl;
	func1();
	system("pause");
	return 0;
}