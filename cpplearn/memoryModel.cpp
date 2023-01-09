#include <iostream>
using namespace std;
int* creaSpace();
int main8() {
	
	//1.code area,deposit computer instruction;before executing programme
	// share,only read
	//2.global area,deposit global variable and static variable and other variable(const global variable)
	//managed by system
	//feature:address 
	int num1 = 100;
	//static varialble
	static int num2 = 99;
	//constant:str constant,const global constant(don't include consat local constant),
	// global constant
	//the address of s1 is different from s2
	string s1="hello";
	string s2 = "hello";

	const int num3 = 77;
	//the address of "hello" is same
	cout << &"hello" << endl;
	cout<<&"hello" <<endl;
	//3.stack area
	// don't return the address of local variable that is deposited in stack area
	//4.heap area
	//we can get the address of local variable that is deposited in heap area
	int* p4 = creaSpace();
	//release the space
	delete p4;
	//create a array area
	int* p5 = new int[3];

	system("pause");
	return 0;
}
int* creaSpace() {
	int* p3 = new int(10);
	//return the address of local variable that is deposited in heap area
	return p3;
}
