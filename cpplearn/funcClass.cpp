#include<iostream>
#include<string>
using namespace std;
//function class
class Myadd
{
public:
	int operator()(int v1,int v2) {
		return v1 + v2;
	}
};
int mainfunc() {
	//function object
	Myadd mya;
	int a=mya(2,4);
	system("pause");
	return 0;
}