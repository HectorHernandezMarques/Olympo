//============================================================================
// Name        : Olympo.cpp
// Author      : AntonioMontana
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include "Wizard.h"
using namespace std;

int main() {
	cout << "!!!Hello Olympo!!!" << endl;

	Wizard* wizard = Wizard::getInstance();

	wizard->getPerson()->talk();
	wizard->getDonkey()->talk();
	wizard->getPig()->talk();

//	Person *mypersona = Person::getInstance();
//
//	PersonDonkeyDecorator myDonkey((NonDecoredPerson*)mypersona);
//	PersonPigDecorator myPig((NonDecoredPerson*)mypersona);
//
//	myDonkey.talk();
//	myPig.talk();
	return 0;
}
