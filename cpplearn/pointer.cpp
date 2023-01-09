#include<iostream>
#include"multifileProgramme.h"
using namespace std;
int main6(){
	int a = 10;
	int* p = &a;
	//一.basic grammer
	//1.null pointer:0;0~255,System occupancy
	int* p1 = NULL;
	//2.wild pointer
	cout << sizeof(int*) << endl;
	//3.const pointer,value of num1 isn't able tomodify;
	int num1 = 100;
	const int* p2 = &num1;
	p2 = 0;
	//4.pointer const，value of p isn't able tomodify;
	int num2 = 100;
	int* const p3 = &num2;
	*p3 = 88;
	//二.array and pointer
	int arr1[] = { 1,2,3 };
	int* p4 = arr1;
	p4++;
	cout << *p4 << endl;
	//三.function and pointer
	int num3=3;
	int num4 = 4;
	swap(&num3, &num4);
	system("pause");
	return 0;
}