#ifndef WIZARD_H_
#define WIZARD_H_

#include "Person.h"
#include "NonDecoredPerson.h"

class Wizard {
private:
	Wizard();
	NonDecoredPerson *person;
	static Wizard* instance;
public:
	virtual ~Wizard();

	Person* getPerson();
	Person* getPig();
	Person* getDonkey();

	static Wizard* getInstance();
};

#endif /* WIZARD_H_ */
