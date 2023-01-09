#include<iostream>
using namespace std;
#include<string>
int main3() {
	//a.select structure
	//1.basic grammer
	int score = 0;
	//cin >> score;
	if (score>680)
	{
		cout<<"you are accepted by pk university" << endl;
	}
	else if (score>500)
	{
		cout << "you are accepted by guangxi university" << endl;

	}
	else
	{
		cout<<"none university" << endl;
	}
	//2.ternary operator
	int num1 = 10;
	int num2 = 20;
	int c = (num1 > num2 ? num1 : num2);
	//(num1 > num2 ? num1 : num2) = 100;
	//3.switch:must be int or enum
	char comm = 'm';
	switch (comm)
	{
	case 'm':
		break;
	case 'a':
		break;
	default:
		break;
	}
	//b.loop structure
	//1.while
	int num3=0;
	while (num3<10) {
		num3++;
		cout<<num3<<endl;
	}
	//2.do while
	int num4 = 0;
	do {
		num4++;
		cout<<num4<<endl;
	} while (num4<10);
	//3.for
	for (int i = 0; i < 10; i++) {
		cout<<i<<endl;
		if (i == 3) {
			continue;
		}
		if (i == 9) {
			break;
		}
	}
	//c.goto
	int num5 = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 10) {
			goto MYF;
		}
	}
	MYF:
	cout<<"goto here" << endl;
	system("pause");
	return 0;
}
