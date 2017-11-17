/*
 * PersonDonkeyDecorator.h
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#ifndef PERSONDONKEYDECORATOR_H_
#define PERSONDONKEYDECORATOR_H_

#include "PersonDecorator.h"

class PersonDonkeyDecorator: public PersonDecorator {
public:
	PersonDonkeyDecorator(NonDecoredPerson *nonDecoredPerson);
	virtual ~PersonDonkeyDecorator();

	void talk();
};

#endif /* PERSONDONKEYDECORATOR_H_ */
