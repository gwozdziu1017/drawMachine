/*
*	Klasa odpowiadajaca za przechowywanie itemow do wylosowania
*	DG 25.04.2019
*/

#pragma once

#include <vector>
#include <string>
#include <iostream>

using std::cin;

typedef std::vector<char*> VectorString;
typedef std::string string;

class DrawObjects {
public:
	DrawObjects();
	void InsertIntoContainer();
	void InsertItem(const char*);
	bool IsEscKey(const char*);
private:
	VectorString itemVec;
	char* item;
};