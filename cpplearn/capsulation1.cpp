#include<iostream>
using namespace std;
#include<string>
/// <summary>
/// a.access permission 
///					Access in inner		access in subclass		access in outer		
/// public					y					y					y
/// protected				y					y					n
/// private					y					n					n
/// </summary>
class  Student
{
	//default:private
	int weight;
public:
	int id;
	void sing() {
		cout << "my age is"<<age <<", i am singing" << endl;
	}
	void setMoney(int money) {
		money = money;
	}
protected:
	int age=100;
//b.Privatization of member attributes
private:
	int money;
	int enscore;
};
//c.different in struct and class
struct stu {
	//default permissions:public
	int age;
};
int maincla() {
	Student stu1;
	stu1.id = 20;
	stu1.sing();
	stu1.setMoney(1000);
	system("pause");
	return 0;
}
