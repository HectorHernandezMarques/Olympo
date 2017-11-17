/*
 * PersonPigDecorator.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#include "PersonPigDecorator.h"

PersonPigDecorator::PersonPigDecorator(NonDecoredPerson *nonDecoredPerson) : PersonDecorator(nonDecoredPerson) {
	// TODO Auto-generated constructor stub

}

PersonPigDecorator::~PersonPigDecorator() {
	// TODO Auto-generated destructor stub
}

void PersonPigDecorator::talk() {
	std::cout<<"OINK: ";
	this->nonDecoredPerson->talk();
}
