#include<iostream>
#include<string>
using namespace std;
int main10() {

	system("pause");
	return 0;
}
//a.
//1.default argument
int func2(int a = 100, int b = 22);
int func1(int a, int b = 100) {
	return a+b;
}
int func2(int a, int b) {
	return a + b;
}
//2.Placeholder parameters
void func3(int a,double) {

}
//3.function overload
//condition: same scope;function name is same;argument is different(number ,sequence,datatype)
void func4(int a) {
}

void func4(float a) {
}

void func4(float a,int b) {
}

void func4(int a, float b) {
}

void func4() {
}
//b.function overload caution
//1.condition when you pass reference
/*
int a=10;
func5(a);	call the  func5(int &a)
func5(10);	call the func5(const int &a) ;account to :int temp =10;const int &a=temp;
*/
void func5(int &a) {
}
void func5(const int &a) {
}
//2.default function:error
void func6(int a, int b = 10) {

}
void func6(int a) {

}
//this is a mistake(ambiguity):func6(10)