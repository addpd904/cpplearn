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

};
void funcoo1() {
	Person3 p1(100);
	Person3 p2(200);
	Person3 p3(50);
	//equivalent p2.operator=(p1);return p2
	p3=p2 = p1;
	cout<<*p3.age<<endl;
}
//b.override relational operator
int main() {
	funcoo1();
	system("pause");
	return 0;
}