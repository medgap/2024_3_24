//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age) {
//		this->name = name;
//		this->age = age;
//	}
//	void showInfo() {
//		cout << this->name << endl;
//		cout << this->age << endl;
//	}
//	T1 name;
//	T2 age;
//};
////1.
//void printInfo(Person<string, int>& p) {
//	p.showInfo();
//}
//
////2.
//template<class T1,class T2>
//void printInfo2(Person<T1, T2>& p) {
//	p.showInfo();
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//}
//
////3.
//template<class T>
//void printInfo3(T& p) {
//	p.showInfo();
//	cout << typeid(T).name() << endl;
//}
//
//void test() {
//	Person<string, int> p("shy", 20);
//	printInfo(p);
//	printInfo2(p);
//	printInfo3(p);
//}
//
//int main() {
//	test();
//}