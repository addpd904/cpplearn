#include<iostream>
using namespace std;
int main4() {
	//一、basic grammer
	// a.linear array
	//1.define
	//array save in Contiguous memory space
	char str[] = { 'a','b','c' };
	//for int array,default:0
	int arr1[10] = { 2,1 };
	for (int i = 0; i < 3; i++) {
		cout << str[i] << endl;
	}
	//2.get the length of the array
	int arr2[] = { 1,2 };
	int len = sizeof(arr2) / sizeof(arr2[0]);
	//3.get the address of first element
	cout << arr2 << endl;
	cout << &arr2[0] << endl;
	//b.two-dimensional array
	//1.define
	int arr7[2][2] = { 
		{1,2},
		{5,6} };
	int arr6[][2] = { 1,2,3,4 };
	//2.address
	cout <<"two dimensional array name address:" << &arr6 << endl;
	//二、algorithm
	//1.inversion
	int temp=0;
	int arr3[] = {1, 2, 3, 4, 5};
	int len1 = sizeof(arr3) / sizeof(arr3[0]);
	int endInd = len1 - 1;
	int startInd = 0;
	for (int i = 0; i < len1; i++)
	{
		temp = arr3[startInd];
		arr3[startInd] = arr3[endInd];
		arr3[endInd] = temp;
	}
	//2.bubble sort
	int arr4[] = { 2,4,7 };
	len = sizeof(arr4) / sizeof(arr4[0]);
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len-i-1; j++)
		{
			if (arr4[j + 1] > arr4[j]) {
				int temp = arr4[j];
				arr4[j] = arr4[j + 1];
				arr4[j + 1] = temp;			
			}
		}
	}
	system("pause");
	return 0;
}