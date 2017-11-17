/*
 * PersonDonkeyDecorator.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#include "PersonDonkeyDecorator.h"

PersonDonkeyDecorator::PersonDonkeyDecorator(NonDecoredPerson *nonDecoredPerson) : PersonDecorator(nonDecoredPerson) {
	// TODO Auto-generated constructor stub

}

PersonDonkeyDecorator::~PersonDonkeyDecorator() {
	// TODO Auto-generated destructor stub
}

void PersonDonkeyDecorator::talk() {
	std::cout<<"IHAIHA: ";
	this->nonDecoredPerson->talk();

}
