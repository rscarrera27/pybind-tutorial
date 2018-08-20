// Pybind-Tutorial.cpp : 응용 프로그램의 진입점을 정의합니다.
//

#include "Pybind-Tutorial.h"

string PLANE = "Tomcat";

int add(int a, int b)
{
	return a + b; 
}

Pet::Pet(const string &name_) : name(name_) {}
void Pet::setName(const string &name_) { name=name_; }
const string &Pet::getName() const { return name; }

int Util::multi(int a, int b) {
	return a * b;
}

string Util::hello(string a) {
	return "Hello World, " + a;
}

string Util::family(string a, string b) {
	return a + " is " + b + " 's husband";
}

float divide(float a = 6, float b = 3) {
	return a / b;
}