#include<iostream>
#include<string>
#include"String.h"
using namespace std;

void test1(String& str1) {
	cout << String::getStrNums() << endl;
}
void test2(String str1) {
	cout << String::getStrNums() << endl;
}

int main() {
	String str1;
	String str2("123");
	String str3("1234");
	cout << (str2 == str3);
	/*
	cout << str1 << endl;
	cout << String::getStrNums() << endl;
	cout << str2 << endl;
	cout << String::getStrNums() << endl;
	cout << str3 << endl;
	cout << String::getStrNums() << endl;
	cin >> str3;
	cout << String::getStrNums() << endl;
	cout << str3 << endl;
	test1(str1);
	cout << "test1:"<<String::getStrNums() << endl;
	test2(str2);
	cout << "test2:"<<String::getStrNums() << endl;
	*/
//	String str4 = "sad";
//	cout << str4[1];
	return 0;
}


