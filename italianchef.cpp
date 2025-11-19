#include "ItalianChef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(const string &n) : Chef(n) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() const {
    return name;
}
