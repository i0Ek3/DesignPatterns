#include "Subject.h"
#include <vector>

Subject::Subject() {

}

Subject::~Subject() {

}

void Subject::attach(Observer * pObserver) {
	m_vtObj.push_back(pObserver);
}

void Subject::detach(Observer * pObserver) {
	for (std::vector<Observer*>::iterator itr = m_vtObj.begin(); itr != m_vtObj.end(); itr++) {
		if (*itr == pObserver) {
			m_vtObj.erase(itr);
			return;
		}	
	}
}

void Subject::notify() {
	for (std::vector<Observer*>::iterator itr = m_vtObj.begin(); itr != m_vtObj.end(); itr++) {
		(*itr)->update(this);
	}

}
