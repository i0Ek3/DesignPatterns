#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject() {


}

ConcreteSubject::~ConcreteSubject() {

}

int ConcreteSubject::getState() {
	return state;
}

void ConcreteSubject::setState(int i) {
	state = i;
}
