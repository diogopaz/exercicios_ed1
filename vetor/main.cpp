#include <iostream>
#include <string>
#include "Vetor.h"

using namespace std;

int main() {

    Vetor* v1 = new Vetor();
    v1->push_back(1);
    v1->push_back(3);
    cout << v1->sizeOf() << endl;
    v1->print();

    return 0;
}