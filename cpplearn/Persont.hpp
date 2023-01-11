#include<iostream>
#include<string>
using namespace std;
template <typename T1,typename T2>
class Personte22{
public:
	T1 m_age;
	T2 m_name;
	Personte22(T1 a,T2 n);
	void showInfo();
};
template <typename T1,typename T2>
Personte22<T1,T2>::Personte22(T1 a, T2 n) {
	this->m_age = a;
	this->m_name = n;
}
template <typename T1, typename T2>
void Personte22<T1, T2>::showInfo() {
	cout<<"name is "<<this->m_name << endl;
}