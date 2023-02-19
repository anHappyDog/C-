#include<iostream>

using namespace std;

#ifndef STRING_H
#define STRING_H

class String
{
public: 
	char* str;
	unsigned int len;
	static unsigned int strNums;
public:
	String();
	String(const char* strs);
	String(const String& strs);
	~String();
	int size();		//返回string的长度 
	char at(int n); //返回第n个元素 
	char front(); //返回第一个元素 
	char back(); // 返回最后的元素 
	bool empty();
	void clear();
	static unsigned int getStrNums();
	
	bool operator<(const String& str2) const;
	bool operator>(const String& str2) const;
	bool operator>=(const String& str2) const;
	bool operator<=(const String& str2) const;
	bool operator!=(const String& str2) const;
	bool operator==(const String& str2) const;
	
	
	String& operator= (const String& str2);
	String& operator= (const char* str2);
	
	 char& operator[](int i) const;
	
	
	friend istream& operator>>( istream& is, String& str);
	friend ostream& operator<<(ostream& os,const String&str);

};

#endif
