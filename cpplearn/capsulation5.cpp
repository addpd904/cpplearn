#include<iostream>
#include<string>
using namespace std;
//forward declaration,just a incompete type so that there something that is  unusual.
//for instance:friend void GoodFriend2::visit();
class GoodFriend2;
//a.friend element:can access  private member varibale in class
class House {
	//1.global functionn as friend
	//declare the friend function
	friend void frindfunc(House& ho);
	//declare the friend class
	friend class GoodFriend;
	//delare the class member as a friend
	//friend void GoodFriend2::visit();
public:
	House(string br){
		this->bedroom = br;
	}
	House() {
		this->bedroom = "myRoom";
	}
private:
	string bedroom ;
};
//global functionn as friend
void frindfunc(House& ho) {
	cout<<"your friend is accessing your room:" << ho.bedroom << endl;
}
void funcc1() {
	House h1("myBedRoom");
	frindfunc(h1);
}

//2.class as friend
class GoodFriend {
public:
	void visit(){
		cout<<" good friend is visiting your room:" <<(h2.bedroom)<< endl;
	}
private:
	House h2;
};

//3.class member as friend
class GoodFriend2 {
public:
	//class member as friend
	void visit() {
		cout << "v2 good friend is visiting your room:"  << endl;
	}
private:
	House h2;
};

int mainc5() {
	funcc1();
	GoodFriend gf;
	gf.visit();
	system("pause");
	return 0;
}
