/*
 * PersonPigDecorator.h
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#ifndef PERSONPIGDECORATOR_H_
#define PERSONPIGDECORATOR_H_

#include "PersonDecorator.h"

class PersonPigDecorator: public PersonDecorator {
public:
	PersonPigDecorator(NonDecoredPerson *nonDecoredPerson);
	virtual ~PersonPigDecorator();

	void talk();
};

#endif /* PERSONPIGDECORATOR_H_ */
