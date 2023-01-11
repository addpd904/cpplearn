#include<iostream>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<algorithm>
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
//b.save and get and delete and size
void funcqueue2() {
	queue<int> q1;
	//save
	q1.push(1);
	q1.push(2);
	//get
	q1.front();
	q1.back();
	//delete
	q1.pop();
	//size
	q1.empty();
	q1.size();
}
//三、list
//speed of iterate is lower than array,but the speed of inserting is more faster
//a.define
void myPrintList(const list<int> & li) {
	for (list<int>::const_iterator i = li.begin(); i != li.end(); i++)
	{
		cout << *i<<" ";
	}
	cout << endl;
}
void funclist1() {
	list<int> li1;
	li1.push_back(1);
	li1.push_back(2);
	li1.push_back(3);
	list<int> li2(li1.begin(),li1.end());
	myPrintList(li2);
	list<int> li3(li1);
	list<int> li4(4, 88);

}
//b.assign and exchange
void funclist2() {
	list<int> li1(5, 87);
	list<int> li2;
	//assign
	li2 = li1;
	li2.push_back(1);
	li2.push_back(2);
	li2.assign(li1.begin(), li1.end());
	li2.assign(10, 300);
	myPrintList(li2);
	//swap
	li1.swap(li2);
	myPrintList(li2);
}
//c.size
void funclist4() {
	list<int> li1(3, 45);
	list<int> li2;
	li2.push_back(22);
	li2.push_back(33);
	li1.empty();
	li1.size();
	//15 elements,fill with 99
	li1.resize(15, 99);
}
//d.insert and delete
void funclist5() {
	list<int> li1(3, 45);
	li1.push_back(2);
	//insert element in front
	li1.push_front(1);
	myPrintList(li1);

	li1.insert(li1.begin(), 38);
	//delete
	li1.pop_back();
	li1.pop_front();
	//pass a iterator
	li1.erase(li1.begin());
	//remove specific element
	li1.remove(38);
}
//e.store and get
void funclist66() {
	list<int> li1(5,88);
	//get the first element
	li1.front();
	li1.back();
}
//f.reverse and sort
bool mycompare(int a, int b) {
	return a > b;
}
void funclist7() {
	list<int> li1(3, 88);
	li1.push_back(2);
	li1.push_front(33);
	myPrintList(li1);
	//1.reverse
	li1.reverse();
	myPrintList(li1);
	//2.sort
	//list don't support the random access,so we can't use the global func sort().
	//we need to use the member method sort()
	li1.sort();
	myPrintList(li1);
	//descending order
	li1.sort(mycompare);
	myPrintList(li1);
}
//3.DIY sort for DIY type
class StudentLis {
public:
	int m_age;
	int m_weight;
	StudentLis(int a,int weight){
		this->m_age = a;
		this->m_age = weight;
	}
};
bool compareStu(StudentLis & stu1,StudentLis& stu2) {
	//if the age is same ,we will sort by weight
	if (stu1.m_age==stu2.m_age)
	{
		return stu1.m_weight > stu2.m_weight;
	}
	else
	{
		return stu1.m_age > stu2.m_age;
	}
}
void funclist9() {
	StudentLis stu1(39, 100);
	StudentLis stu2(13, 150);
	StudentLis stu3(13, 170);
	StudentLis stu4(19, 180);
	list<StudentLis> lis;
	lis.push_back(stu1);
	lis.push_back(stu2);
	lis.push_back(stu3);
	lis.push_back(stu4);
	lis.sort(compareStu);
}

int mainsqlis() {
	funclist1();
	funclist2();
	funclist7();
	funclist9();
	system("pause");
	return 0;
}