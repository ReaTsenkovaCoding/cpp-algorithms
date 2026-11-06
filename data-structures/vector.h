/*
Vector: a dynamic array of any type.
Doubles its capacity when full and copies the elements to the new memory.
pushBack: O(1) amortized
popBack, at: O(1)
*/

#pragma once
#include <stdexcept>

template <typename T>
class Vector {
private:
	T* data = nullptr;
	int size = 0;
	int capacity = 0;

public:
	Vector() {

	}

	Vector(const Vector& other) {
		size = other.size;
		capacity = other.capacity;
		data = new T[capacity];
		for (int i = 0; i < size; i++) {
			data[i] = other.data[i];
		}
	}

	Vector& operator=(const Vector& other) {

		if (this == &other) {
			return *this;
		}

		delete[] data;

		size = other.size;
		capacity = other.capacity;
		data = new T[capacity];
		for (int i = 0; i < size; i++) {
			data[i] = other.data[i];
		}

		return *this;
	}

	Vector(Vector&& other) {
		data = other.data;
		size = other.size;
		capacity = other.capacity;
		other.data = nullptr;
		other.size = 0;
		other.capacity = 0;
	}

	Vector& operator = (Vector&& other) {
		if (this == &other) {
			return *this;
		}
		delete[] data;
		data = other.data;
		size = other.size;
		capacity = other.capacity;
		other.data = nullptr;
		other.size = 0;
		other.capacity = 0;
		return *this;
	}

	~Vector() {
		delete[] data;
	}

	void pushBack(T value) {
		if (size == capacity) {
			if (capacity == 0) capacity = 1;
			else capacity *= 2;
			T* newData = new T[capacity];

			for (int i = 0; i < size; i++) {
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;

		}
		data[size] = value;
		size += 1;
	}

	void popBack() {
		if (size == 0) {
			throw std::out_of_range("Vector is empty");
		}
		size -= 1;
	}

	T at(int index) {
		if (index < 0 || index >= size) {
			throw std::out_of_range("Index out of range");
		}
		return data[index];
	}

	int getSize() {
		return size;
	}

	int getCapacity() {
		return capacity;
	}

};