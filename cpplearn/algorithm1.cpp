#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
//a.for_each
void myPrintal1(int a) {
	cout << a << " ";
}
class myfunCl {
public:
	void operator()(int a) {
		cout << a << " ";
	}
};
void funcal1() {
	vector<int>v1;
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(44);
	//1.way1
	for_each(v1.begin(), v1.end(), myPrintal1);
	for_each(v1.begin(), v1.end(), myfunCl());
}
int main() {
	funcal1();
	system("pause");
	return 0;
}