#include <iostream>
#include<string>
using namespace std;
class Studenttem2 {
public:
	void sing() {
		cout<<"i am singing" << endl;
	}
};
//a.member func in template class is created after instantiating template class
template <typename T, typename t2 = int>
class TeacherTemp1{
public:
	T stu1;
	void fun() {
		stu1.sing();
	}
};

void functemp2() {
	TeacherTemp1<Studenttem2> tea1;
	tea1.fun();
}
//b.template class object as func parameter
//way1
void functem4(TeacherTemp1<Studenttem2> tea) {
	tea.fun();
}
//way2:template datatype parameter
template <typename T>
void functem5(TeacherTemp1<T> tea) {
	tea.fun();
}
//way3:template whole class
template <typename T>
void functem6(T tea) {
	tea.fun();
}
void functem7() {
	TeacherTemp1<Studenttem2> tea;
	functem4(tea);
	functem5(tea);
	functem6(tea);
}
//c.template class and extend
//1.pass type
template<typename T>
class Animaltem1 {
public:
	T m;
};
//pass type to super class
class Rabbittemp1 :public Animaltem1<string> {

};
template <typename T1,typename T2>
//pass type to super class
class Rabbittemp12 :public Animaltem1<T1> {

};

//d.realize the func ouside template class
template <typename T1,typename T2>
class Studenttt1 {
public:
	//structure func
	Studenttt1(T1 a);
	//member func
	void m_func();
};
//structure func
//must add template argument list
template <typename T1,typename T2>
Studenttt1<T1,T2>::Studenttt1(T1 a) {

}
//member func
//must add template argument list
template <typename T1,typename T2>
void Studenttt1<T1,T2>::m_func() {

}
int maintemp4() {
	functemp2();
	functem7();
	system("pause");
	return 0;
}