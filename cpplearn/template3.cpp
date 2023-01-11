#include<iostream>
#include<string>
#include"Persont.hpp"
using namespace std;
//a.template class and Multi-file authoring
//question :the compiler isn't able to link the template class's member func
//solve:let the declaration and realization in a same hpp file, include the hpp file directly
void funttt1() {
	Personte22<int, string> p1(100, "zjl");
	p1.showInfo();
}
int maintem22() {
	funttt1();
	system("pause");
	return 0;
}