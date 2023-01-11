#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;
//一.deque
//a.define
//const:only read
void printDeque(const deque<int> & d) {
	//const_iterator :only read iterator
	for (deque<int>::const_iterator i = d.begin(); i < d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
void funcde() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int> d2(2, 99);
	deque<int> d3(d2);
	deque<int> d4(d1.begin(), d1.end());
	printDeque(d2);
}
//b.assign
void funcde1() {
	deque<int> d1(3, 55);
	deque<int> d2;
	d2 = d1;
	d2.assign(d1.begin(), d1.end());
	d2.assign(5, 55);
}
//c.size
void funcde2() {
	deque<int> d1(3, 87);
	//judge is the container is empty
	d1.empty();
	d1.size();
	//resize to 15,fill with 33
	d1.resize(15, 33);
}
//d.insert and delet
void funcdeq5() {
	deque<int> d1(3, 55);
	d1.push_back(10);
	d1.push_front(44);
	//delete
	d1.pop_back();
	d1.pop_front();
	d1.erase(d1.begin());
	d1.erase(d1.begin(), d1.end());
	d1.clear();
	//insert
	d1.insert(d1.begin(), 100);
	deque<int> d2(3, 1);
	d1.insert(d1.begin(), d2.begin(), d2.end());

}
//e.save and get element
void funcdeque1() {
	deque<int> d1(3, 33);
	d1.at(1);
	d1[1];
	d1.front();
	d1.back();
	d1.end();
}
//f.sort
void funcdeque2() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	//sort():container that support random access can use sort
	sort(d1.begin(), d1.end());
}
int maindequ() {
	funcde();
	system("pause");
	return 0;
}