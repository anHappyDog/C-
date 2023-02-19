#include "String.h"
unsigned int String::strNums = 0;
String::String() {
	len = 0;
	str = new char[len + 1];
	str[0] = 0;
	++strNums;
}	
String::String(const char* strs) {
	for(len = 0;strs[len] != 0;++len);
	str = new char[len + 1];
	for(int i = 0; i != len;++i) {
		str[i] = strs[i];
	}
	str[len] = 0;
	++strNums;
}
String::String(const String& strs) {
	len = strs.len;
	str = new char[len + 1];
	for(int i = 0; i != len;++i) {
		str[i] = strs.str[i];
	}
	str[len] = 0;
	++strNums;
}
String::~String() {
	len = 0;
	delete[] str;
	--strNums;
}
ostream& operator<<(ostream& os,const String& Str) {
	os << Str.str;
}
istream& operator>>(istream& is,String& Str) {
	is >> Str.str;
}
int String::size() {
	return len;
}
char String::at(int n) {
	if(n >= len || n < 0) {
		return -1;
		//Òì³£ 
	}
	return str[n];
}
char String::front() {
	if(len == 0) {
		return -1;
	}
	return str[0];
}
char String::back() {
	if(len == 0) {
		return -1;
	}
	return str[len - 1];
}
bool String::empty() {
	return len == 0;
}
void String::clear() {
	for(int i = 0; i < len;++i) {
		str[i] = 0;
	}
	len = 0;
}
unsigned int String::getStrNums() {
	return strNums;
}
char& String::operator[](int i) const {
	if(i >= len) 
		return str[0];
	return str[i];
};
String& String::operator= (const String& str2){
	if(this == &str2) {
		return *this;
	}
	delete[] str;
	len  = str2.len;
	str = new char[len + 1];
	for(int i = 0; i != len;++i) {
		str[i] = str2.str[i];
	}
	str[len] = 0;
	return *this;
}
String& String::operator= (const char* str2){
	if(str == str2) {
		return *this;	
	}
	delete[] str;
	for(len = 0; str2[len] !=0;++len);
	str = new char[len + 1];
	for(int i = 0; i != len;++i) {
		str[i] = str2[i];
	}
	str[len] =0;
	return *this;
}
bool String::operator<(const String& str2) const{
	if(len != str2.len){
		return len < str2.len;
	}	
	for(int i = 0; i != len;++i) {
		if(str[i] < str2.str[i]){
			return true;
		}
		else if(str[i] > str2.str[i]){
			return false;
		}
	}
	return false;
}
bool String::operator>(const String& str2) const{
	if(len != str2.len){
		return len > str2.len;
	}	
	for(int i = 0; i != len;++i) {
		if(str[i] > str2.str[i]){
			return true;
		}
		else if(str[i] < str2.str[i]){
			return false;
		}
	}
	return false;
}
bool String::operator>=(const String& str2) const{
	if(len != str2.len){
		return len > str2.len;
	}	
	for(int i = 0; i != len;++i) {
		if(str[i] > str2.str[i]){
			return true;
		}
		else if(str[i] < str2.str[i]){
			return false;
		}
	}
	return true;
}
bool String::operator<=(const String& str2) const{
	if(len != str2.len){
		return len < str2.len;
	}	
	for(int i = 0; i != len;++i) {
		if(str[i] < str2.str[i]){
			return true;
		}
		else if(str[i] > str2.str[i]){
			return false;
		}
	}
	return true;
}
bool String::operator!=(const String& str2) const{
	if(len != str2.len){
		return true;
	}	
	for(int i = 0; i != len;++i) {
		if(str[i] != str2.str[i]) {
			return true;
		}
	}
	return false;
}
bool String::operator==(const String& str2) const{
		if(len != str2.len){
		return false;
	}	
	for(int i = 0; i != len;++i) {
		if(str[i] != str2.str[i]){
			return false;
		}
	}
	return true;
}
	
