#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
//一.predicates is a function object that return bool 
//function object is function class's instantiation
//a.unary predicates is predicates that have one parameter
class myPre {
public:
	//just have one parameter
	bool operator()(int a) {
		return a > 5;
	}
};
void funcpre1() {
	vector<int> v1;
	v1.push_back(2);
	v1.push_back(8);
	//judge if there is a number that is larger 5
	//return a iterator
	vector<int>::iterator res = find_if(v1.begin(), v1.end(),myPre());
	cout << *res << endl;
}
//b.binary predicates is predicates that have two parameter
class myPre2 {
public:
	//just have one parameter
	bool operator()(int a,int b) {
		return a > b;
	}
};
void funcpre2() {
	vector<int> v1;
	v1.push_back(2);
	v1.push_back(8);
	//DIY sort with binary predicates
	sort(v1.begin(), v1.end(), myPre2());
}
void myPringVetor(const vector<int>& v) {
	for (vector<int>::const_iterator i = v.begin(); i !=v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
//二、functor bulit in c++
void functor2() {
	//1.plus
	plus<int> p;
	cout << p(2, 3) << endl;
	//relational functor
	vector<int> v1;
	v1.push_back(5);
	v1.push_back(3);
	v1.push_back(32);
	myPringVetor(v1);
	//2.greater
	//sort
	//greater<int>() is a binary predicates;of course it also is functor
	sort(v1.begin(), v1.end(), greater<int>());
}
//3.logic functor
void functor3() {
	vector<bool>v1(3,true);
	v1.push_back(false);
	vector<bool>v2;
	v2.resize(10);
	transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>());
}
int mainpred() {
	funcpre1();
	funcpre2();
	functor2();
	system("pause");
	return 0;
}