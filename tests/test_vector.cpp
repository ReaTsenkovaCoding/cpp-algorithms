/*
Tests for the Vector class: checks size and capacity after pushBack and popBack.
*/

#include <cassert>
#include <iostream>
#include "../data-structures/vector.h"
using namespace std;

int main() {
	Vector v;
	assert(v.getSize() == 0);
	assert(v.getCapacity() == 0);

	// tests
	v.pushBack(10);
	assert(v.getSize() == 1);
	assert(v.getCapacity() == 1);

	v.pushBack(20);
	assert(v.getSize() == 2);
	assert(v.getCapacity() == 2);

	v.pushBack(30);
	assert(v.getSize() == 3);
	assert(v.getCapacity() == 4);

	v.popBack();
	assert(v.getSize() == 2);
	assert(v.getCapacity() == 4);

	cout << "All tests passed\n";
	return 0;
}