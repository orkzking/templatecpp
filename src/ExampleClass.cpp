#include "ExampleClass.h"
#include <iostream>

using namespace std;

ExampleClass::ExampleClass() {
    // TODO: implement stuff
    fnumberA = 42;
    fnumberB = 13.37;
}

ExampleClass::~ExampleClass() {
    // TODO: implement stuff
}

ExampleClass::ExampleClass(int a, float b) {
    // TODO: implement stuff
    fnumberA = a;
    fnumberB = b;
}

void ExampleClass::DoSomething() {
    // TODO: implement stuff
    cout << "A is " << fnumberA << " and B is " << fnumberB;
}

void ExampleClass::DoNothing() {
    // TODO: implement stuff
}

#ifndef WIN32
void* ExampleClass::VeryUsefulMethod(bool level) {
    // TODO: implement stuff
}
#endif
