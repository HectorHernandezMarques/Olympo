/*
 * Woman.h
 *
 *  Created on: Nov 17, 2017
 *      Author: eherhes
 */

#ifndef WOMAN_H_
#define WOMAN_H_

#include "NonDecoredPerson.h"

class Woman: public NonDecoredPerson {
public:
	Woman();
	virtual ~Woman();

	void talk();
};

#endif /* WOMAN_H_ */
