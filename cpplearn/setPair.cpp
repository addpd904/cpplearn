#include<iostream>
#include<string>
using namespace std;
#include<set>
void myPrintSet(const set<int>& se) {
	for (set<int>::const_iterator i = se.begin(); i !=se.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
//一、set;
//feature:not allow to repeat;auto sort
//a.define
void funset1() {
	set<int> se1;
	se1.insert(22);
	se1.insert(66);
	se1.insert(4);
	myPrintSet(se1);
}
//b.size and swap and empty
//not method resize()
void funset13() {
	set<int> se1;
	se1.insert(22);
	se1.insert(66);
	se1.insert(4);
	se1.size();
	se1.empty();
	//swap
	set<int> se2;
	se1.insert(92);
	se1.insert(7);
	se2.swap(se1);
}
//c. insert and delete
void funset2() {
	set<int> se1;
	se1.insert(88);
	se1.insert(1);
	se1.insert(4);
	//delete
	//delete specific element
	se1.erase(4);
	se1.erase(se1.begin());
	se1.erase(se1.begin(),se1.end());
	se1.clear();
}
//d.find and count
void funset3() {
	set<int> se1;
	se1.insert(1);
	se1.insert(55);
	//return a iterator .it will return a end iterator if it doesn't find the ele
	se1.find(1);
	//count
	se1.count(55);
}
//e.DIY sort,via functor
//1.for normal type
class Mycompareset1 {
public:
	//we need to add the const ,let the func become Constant function
	bool operator()(int v1,int v2) const{
		return v1 > v2;
	}
};
void funcset4() {
	// pass the type that include the operator()()
	set<int,Mycompareset1>se1;
	se1.insert(33);
	se1.insert(44);
	se1.insert(2);
	for (set<int, Mycompareset1>:: iterator i = se1.begin(); i != se1.end(); i++)
	{
		cout << *i<<" ";
	}
	cout << endl;
}
//2.for DIY type
class Studenset77 {
public:
	int age;
	Studenset77(int a) {
		this->age = a;
	}
};
class Mycompareset2 {
public:
	//we need to add the const ,let the func become Constant function
	bool operator()(const Studenset77& stu1, const Studenset77 stu2) const {
		return stu1.age > stu2.age;
	}
};
void funcset5() {
	// pass the type that include the operator()()
	set<Studenset77, Mycompareset2>se1;
	Studenset77 stu1(12);
	Studenset77 stu2(42);
	Studenset77 stu3(77);
	se1.insert(stu1);
	se1.insert(stu2);
	se1.insert(stu3);
	for (set<Studenset77, Mycompareset2>::iterator i = se1.begin(); i != se1.end(); i++)
	{
		cout << (*i).age << " ";
	}
	cout << endl;
}
//
//二、multiset
//feature:allow to insert the same element / ˈelɪmənt /
//三、pari
//a.define
void funcpari1() {
	//way1
	pair<string, int> p("zjl", 29);
	cout << p.first << endl;
	cout << p.second << endl;
	//way2
	pair<string, int>p2 = make_pair("jane", 44);
}

int mainset() {
	funset1();
	funcset4();
	funcset5();
	system("pause");
	return 0;
}