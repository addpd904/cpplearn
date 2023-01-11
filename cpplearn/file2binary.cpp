#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Personfil {
public:
	Personfil(int a, string n) {
		this->m_age = a;
		this->m_name = n;
	}
	Personfil() {
	}
	int m_age;
	string m_name;
};
//a.write a object to file via binary way
void funcfilb1() {
	Personfil p1(22, "zs");
	fstream fil;
	fil.open("E:\\programme\\cpp\\practice\\binarytest.txt", ios::out | ios::binary);
	fil.write((const char*)&p1, sizeof(Personfil));
	fil.close();
}
//b.read a binary file
void funcgilb2() {
	fstream fil;
	fil.open("E:\\programme\\cpp\\practice\\binarytest.txt", ios::in | ios::binary);
	//judge if file is opened
	if (!fil.is_open())
	{
		cout << "failed toopen " << endl;
		return;
	}
	Personfil p;
	fil.read((char*)&p, sizeof(Personfil));
	cout<<p.m_name<<endl;
	fil.close();
}
int mainfile3() {
	funcfilb1();
	funcgilb2();
	system("pause");
	return 0;
}