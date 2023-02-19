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
	int size();		//����string�ĳ��� 
	char at(int n); //���ص�n��Ԫ�� 
	char front(); //���ص�һ��Ԫ�� 
	char back(); // ��������Ԫ�� 
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
