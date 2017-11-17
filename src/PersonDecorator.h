/*
 * PersonDecorator.h
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#ifndef PERSONDECORATOR_H_
#define PERSONDECORATOR_H_

#include "Person.h"
#include "NonDecoredPerson.h"

class PersonDecorator: public Person {
protected:
	NonDecoredPerson *nonDecoredPerson;
public:
	PersonDecorator(NonDecoredPerson *nonDecoredPerson) : nonDecoredPerson(nonDecoredPerson){

	}
	virtual ~PersonDecorator();

	virtual void talk() = 0;
};

#endif /* PERSONDECORATOR_H_ */
