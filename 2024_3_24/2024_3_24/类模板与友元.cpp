//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void showInfo2(Person<T1, T2>& p) {
//	cout << "类外实现" << endl;
//	cout << p.name << endl;
//	cout << p.age << endl;
//}
//
//template<class T1,class T2>
//class Person {
//	friend void showInfo(Person<T1, T2>& p) {
//		cout << "类内实现" << endl;
//		cout << p.name << endl;
//		cout << p.age << endl;
//	}
//	friend void showInfo2<>(Person<T1, T2>& p);
//public:
//	Person(T1 name,T2 age);
//private:
//	T1 name;
//	T2 age;
//};
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->name = name;
//	this->age = age;
//}
//
//
//
//
//void test() {
//	Person<string, int> p("Shy", 20);
//	showInfo(p);
//	showInfo2(p);
//}
//
//int main() {
//	test();
//}