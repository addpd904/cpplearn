#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//a.write
void funcfi1() {
	fstream fil;
	//write
	fil.open("E:\\programme\\cpp\\practice\\test.txt",ios::out);
	fil << "zs" << endl;
	fil.close();
}
//b.read
//1.way1>>
void funcfi2() {
	fstream fil;
	//write
	fil.open("E:\\programme\\cpp\\practice\\test.txt", ios::in);
	//judge if file is opened
	if (fil.is_open()) {
		char buf[1024] = { 0 };
		while (fil>>buf)
		{
			cout<<buf<<endl;
		}
	}
	else
	{
		cout << "failed toopen " << endl;
		return;
	}
	fil.close();
}
//2.way2,geiline(),get()
void funcfi3() {
	fstream fil;
	//write
	fil.open("E:\\programme\\cpp\\practice\\test.txt", ios::in);
	//judge if file is opened
	if(!fil.is_open())
	{
		cout << "failed toopen " << endl;
		return;
	}
	//way1
	char buf[1024] = { 0 };
	while (fil.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}
	/*
	* way2
	string buf;
	while (getline(fil,buf))
	{
		cout << buf << endl;
	}
	*/

	/*
	* way3
	string c;
	while ((c=fil.get())!=EOF)
	{
		cout << c;
	}
	*/
	fil.close();
}
int mainfli1() {
	//funcfi1();
	funcfi2();
	funcfi3();
	system("pause");
	return 0;
}