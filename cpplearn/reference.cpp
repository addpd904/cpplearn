#include<iostream>
#include<string>
using namespace std;
void showValue(const int& val);
int& retRefer();
void myswap(int& a, int& b);
int main9() {
	int b = 100;
	//一.basic grammer
	//1.basic grammer
	//another name
	//reference can't change :a only refer to b,can't change
	//account to: int * const ref=&b;
	int& a = b;
	//2.pass reference
	int num1 = 100;
	int num2 = 200;
	myswap(num1, num2);
	//3.return a reference
	int& num3 = retRefer();
	//4.constant reference 
	//account to: const int * const num5=&temp;
	int temp = 10;
	const int& num5 = temp;
	int num6=100;
	showValue(num6);
	//app :advoid modifying
	
	//二.
	system("pause");
	return 0;
}
//2.pass reference
void myswap(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}
//3.return a reference
//don't return reference of local variable
int& retRefer() {
	static int a = 100;
	return a;
}
//4.constant reference; value:advoid modifying
void showValue(const int& val) {
	cout<<val<<endl;
}