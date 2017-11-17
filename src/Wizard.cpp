/*
 * Wizard.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#include "Wizard.h"
#include "Man.h"
#include "Woman.h"
#include "NonDecoredPerson.h"
#include "PersonDonkeyDecorator.h"
#include "PersonPigDecorator.h"

Wizard* Wizard::instance = nullptr;

Wizard::Wizard() {
	this->person = new Man();
}

Wizard::~Wizard() {
}

Person* Wizard::getPerson() {
	return this->person;
}

Person* Wizard::getPig() {
	return new PersonPigDecorator(this->person);
}

Person* Wizard::getDonkey() {
	return new PersonDonkeyDecorator(this->person);
}

Wizard* Wizard::getInstance() {
	if (instance == nullptr) {
		instance = new Wizard();
	}
	return instance;
}
