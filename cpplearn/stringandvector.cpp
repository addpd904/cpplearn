#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
//standard template library
//container algorithm iterator
using namespace std;
//一、vector:dynamic propagation
// a.define,4 way
void funcstl8() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	vector<int> v2(v1.begin(), v1.end());
	vector<int> v3(10, 33);
	vector<int> v4(v3);
}
//b.assign
void funcstl9() {
	vector<int> v1;
	v1.push_back(1);
	vector<int> v2;
	v2 = v1;
	v2.assign(v1.begin(), v1.end());
	v2.assign(10, 44);

}
//c.size and capacity
void funcst10() {
	vector<int> v1(3,4);
	//judge if the container is empty
	v1.empty();
	v1.capacity();
	v1.size();
	//0:default padding value
	v1.resize(15,0);
}
//d.insert and delete
void funcst11() {
	vector<int> v1(3, 4);
	//need to pass the iterator,3:element numbers
	v1.insert(v1.begin(), 3,99);
	v1.erase(v1.begin());
	v1.erase(v1.begin(), v1.end());
	v1.clear();
}
//e.save and get
void funcstl11() {
	vector<int> v1(2, 4);
	v1[0]=1;
	v1.at(1) = 10;
	//get first element
	v1.front();
	//get the end element
	v1.back();
}
//f.interchange
//value :reduce memory
void funcstl12() {
	vector<int> v1(3, 4);
	//5 elements
	vector<int> v2(5, 6);
	v1.swap(v2);
	//reduce capacity
	for(int i=0;i<1000 ; i++)
	{
		v1.at(i) = i;
	}
	cout<<v1.capacity()<<endl;
	vector<int> (v1).swap(v1);
	cout << v1.capacity() << endl;

}
//g.reserve space(appoint capacity)
void funcst13() {
	vector<int> v1;
	v1.reserve(10000);
}
//h.Iterate the container
void myprint(int a) {
	cout<<a<<endl;
}
void funcst1() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	//1.way1,while
	//begin just like a pointer
	vector<int> ::iterator begin = v1.begin();
	vector<int> ::iterator end = v1.end();
	while (begin!=end)
	{
		cout<<*begin<<endl;
		begin++;
	}
	//2.way2 for_each
	vector<int> ::iterator begin2 = v1.begin();
	vector<int> ::iterator end2 = v1.end();
	for_each(begin2, end2, myprint);
}

//二、string
//a.define
void funcstl3() {
	string s1;
	char str[] = { "hello" };
	string s2(str);
	string s3(s2);
	string s4(10, 'h');
	cout << s4 << endl;
}
//b.assignment
void funcstl41() {
	string s1;
	char str[] = { "hello world" };
	s1 = str;
	string s2;
	s2 = s1;
	s2 = 's';
	s2.assign("hello");
	s2.assign(str, 5);
	s2.assign(10, 'h');
}
//c.Splice(merge)
void funcstl42() {
	string s1="hello";
	s1 += "world";
	s1.append("how ");
	s1.append("are you",4);
	s1.append("are you", 0,4);
}
//d.method
void funcstl4() {
	//1.find,replace
	string s1 = "hello world";
	s1.find("he");
	//frome right to left
	s1.rfind("he");
	s1.replace(1, 3, "how are you");
	//2.compare
	string s2("rap");
	s2.compare(s1);
	//3.save and access
	string s3("rap");
	s3.size();
	s3[0]='b';
	s3.at(0)='a';
	//4.insert and delete
	string s4("rap basket");
	s4.insert(0, "ball");
	s4.erase(0, 4);
	//substring
	string s5("sing dance");
	s5.substr(1, 3);
}
class Studentstl1 {
public:
	Studentstl1(string n,int a) {
		this->m_age = a;
		this->m_name = n;
	}
	string m_name;
	int m_age;
};
int mainstl1() {
	funcst1();
	funcstl3();
	system("pause");
	return 0;
}