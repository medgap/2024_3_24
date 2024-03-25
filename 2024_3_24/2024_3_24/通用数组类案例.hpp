#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

template<class T>
class Array {
public:
	Array(int capacity) {
		this->capacity = capacity;
		this->sz = 0;
		this->parr = new T[this->capacity];
	}

	Array(const Array& p) {
		this->capacity = p.capacity;
		this->sz = p.sz;
		this->parr = new T[this->capacity];
		for (int i = 0; i < sz; i++) {
			this->parr[i] = p.parr[i];
		}
	}

	~Array() {
		if (this->parr != NULL) {
			delete[] this->parr;
			this->capacity = 0;
			this->sz = 0;
			this->parr = NULL;
		}
	}

	//жиди=
	Array& operator=(const Array& p) {
		if (this->parr != NULL) {
			delete[] this->parr;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->capacity = p.capacity;
		this->sz = p.sz;
		this->parr = new T[this->capacity];
		for (int i = 0; i < this->sz; i++) {
			this->parr[i] = p.parr[i];
		}
		return *this;
	}

	//tailorInsert
	void tailorInsert(const T& val) {
		if (this->capacity == this->sz)
			return;
		this->parr[this->sz] = val;
		this->sz++;
	}

	//tailorDelete
	void tailorDelete() {
		if (this->sz == 0)
			return;
		this->sz--;
	}

	T& operator[](int index) {
		return this->parr[index];
	}

	int getSize() {
		return this->sz;
	}

	int getCapacity() {
		return this->capacity;
	}

private:
	int sz;
	int capacity;
	T* parr;
};
