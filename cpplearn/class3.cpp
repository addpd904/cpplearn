#include<iostream>
#include<string>
using namespace std;
class Student1
{
public:
	int age;
	int enscore;
	int* weight;
	//a.Initializing(/ɪˈnɪʃəlaɪz/) the list
	Student1(int a,int b,int c) :age(a), enscore(b) {

	}
	Student1(int w,int a) {
		age = a;
		weight = new int(w);

	}
	Student1(Student1 & stu1) {
		age = stu1.age;
		//b.deep copy; default :shallow copy
		weight = new int(*(stu1.weight));
	}
	~Student1() {
		if (weight != NULL) {
			delete(weight);
		}
	}
	int getWeight() {
		return *weight;
	}

};

//c. class object as a member
//before create class object ,structrue member object firstly
class Teacher {
public:
	Teacher(int a, int b, int c) : age(a), stu1(b, c) {

	}
	int age;
	//create member object stu1 firstly
	Student1 stu1;
};
//d. static member
// 1.static member variable
//feature:store in global area;declare in class ,initialize outside the class
//feature:share
//access:Phone.id;ph1.id
class Phone {
public:
	static int id;
//2.static member function
// just can access static member variable
	static void func() {
		cout<<"static member function " << id << endl;
	}
};
//initialize outside the class
int Phone::id = 100;
int mainc3() {
	Student1 stu1(120, 20);
	Student1 stu2(stu1);
	cout << stu2.age << endl;
	Student1 stu3(1, 2, 3);
	//access static member function
	Phone::func();
	return 0;
}