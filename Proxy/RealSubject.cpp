#include "RealSubject.h"
#include <iostream>

RealSubject::RealSubject() {

}


RealSubject::~RealSubject() {

}

void RealSubject::request() {
    std::cout << "RealSubject::request" << std::endl;
}
