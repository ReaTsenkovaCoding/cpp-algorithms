/*
Tests for the Vector class: checks size and capacity after pushBack and popBack.
*/

#include <cassert>
#include <utility>
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

	Vector copy = v;
	copy.pushBack(99);
	assert(copy.getSize() == 3);
	assert(v.getSize() == 2);
	assert(copy.at(0) == v.at(0));

	Vector assigned;
	assigned.pushBack(7);
	assigned = v;
	assert(assigned.getSize() == 2);
	assert(assigned.at(1) == 20);

	assigned.pushBack(99);
	assert(v.getSize() == 2);

	assigned = assigned;
	assert(assigned.getSize() == 3);

	Vector source;
	source.pushBack(10);
	source.pushBack(20);

	Vector moved = std::move(source);
	assert(moved.getSize() == 2);
	assert(moved.at(1) == 20);
	assert(source.getSize() == 0);

	Vector target;
	target.pushBack(1);
	target = std::move(moved);
	assert(target.getSize() == 2);
	assert(target.at(0) == 10);
	assert(moved.getSize() == 0);

	cout << "All tests passed\n";
	return 0;
}