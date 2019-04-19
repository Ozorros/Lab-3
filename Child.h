#pragma once
#include <string>
#include <iostream>
#ifndef CHILD_H
#define CHILD_H
using namespace std;


class child

{

private:

	string name;

	string surname;

	int age;

public:

	void enterChild()

	{

		cout << "VVedite ima: ";

		cin >> name;

		cout << endl;

		cout << "VVedite familiy: ";

		cin >> surname;

		cout << endl;

		cout << "VVedite vozrast: ";

		cin >> age;

		cout << endl;

	}

	void printChild()

	{

		cout << name << " " << surname << " is " << age << " years old";

	}
};

void num1();
#endif