#include<iostream>
#include<string>
#include<map>
using namespace std;
void myPrintMap(const map<string,int>&m) {
	for (map<string,int>::const_iterator i = m.begin(); i !=m.end() ; i++)
	{
		cout << (*i).first << " ";
		cout << (*i).second << " ";
	}
	cout << endl;
}
//一.map
//feature:auto sort by key
//a.define
void funcmap1() {
	//way1
	map<string, int>m1;
	m1.insert(pair<string, int>("zjl", 18));
	m1.insert(pair<string, int>("zs", 48));
	m1.insert(pair<string, int>("dzq", 28));
	myPrintMap(m1);
	//way2
	map<string, int>m2(m1);
}
//b.assign and swap
void funcmap2() {
	map<string, int> m1;
	m1.insert(pair<string, int>("dzq", 28));
	map<string, int> m2;
	m2 = m1;
	m2.insert(pair<string, int>("cyx", 32));
	m2.swap(m1);
}
//c.size 
void funcmap3() {
	map<string, int>m1;
	m1.insert(pair<string, int>("basketball", 55));
	m1.insert(pair<string, int>("tabletennis", 25));
	m1.empty();
	m1.size();

}
//d.insert and delete
void funcmap4() {
	map<string, int> m1;
	//1.insert 4ways
	m1.insert(pair<string, int>("ls", 43));
	m1.insert(make_pair("zjl",88));
	m1.insert(map<string, int>::value_type("ww", 55));
	m1["ydas"] = 99;
	//2.delete
	m1.erase(m1.begin());
	//delete by key
	m1.erase("ls");
	m1.erase(m1.begin(), m1.end());
	m1.clear();
}
//e.find and static
void funcmap43() {
	map<string, int>m1;
	m1.insert(make_pair<string, int>("zs", 28));
	//return a iterator.it will return end iterator if if doesn't find it.
	m1.find("zs");
	//return int
	m1.count("zs");
}
//f.DIY sort
class Mycomparemap22 {
public:
	bool operator()(string s1,string s2)const{
		return s1 > s2;
	}
};
void funcmap5() {
	map<string, int,Mycomparemap22> m1;
	m1.insert(make_pair("zjl", 28));
	m1.insert(make_pair("zs", 18));
}
int mainmap4() {
	funcmap1();
	funcmap5();
	system("pause");
	return 0;
}
