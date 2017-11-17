#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

class Person {
public:
	Person();
	virtual ~Person();

	virtual void talk() = 0;
};

#endif /* PERSON_H_ */
