#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;
//一、stack 
//feature :have not iterator
//deposit
void funcstack1() {
	//a.define
	stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	stack<int> s2(s1);
	//b.get and save
	s1.push(1);
	s1.pop();
	s1.top();
	//c.size
	s1.empty();
	s1.size();
}
//二、queue
//feature :have not iterator
//a.define
void funcqueue1() {
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	queue<int> q2;
	q2 = q1;
}
//save and get
void funcqueue2() {
	queue<int> q1;
	queue<int> q1;
	q1.push(1);
	q1.push(2);

}
int main() {
	system("pause");
	return 0;
}