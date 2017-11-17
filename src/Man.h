/*
 * Man.h
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#ifndef MAN_H_
#define MAN_H_

#include "NonDecoredPerson.h"

class Man : public NonDecoredPerson{
public:
	Man();
	virtual ~Man();

	void talk();
};

#endif /* MAN_H_ */
