//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//
//	string name;
//	int age;
//};
//
//template<typename T>
//void test(T& a, T& b) {
//	if (a == b)
//		cout << "==" << endl;
//	else
//		cout << "!=" << endl;
//}
//
//template<> void test(Person& a, Person& b) {
//	if (a.age == b.age && a.name == b.name)
//		cout << "==" << endl;
//	else
//		cout << "!=" << endl;
//}
//
//int main() {
//	Person p1("abc", 12);
//	Person p2("abc", 12);
//	test(p1, p2);
//}