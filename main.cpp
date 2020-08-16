#include <stdio.h>
#include <iostream>
#include <memory>

using namespace std;

int main() {
    cout<< "Hello World!!" <<endl;

    unique_ptr<int> number1 = make_unique<int> (10);

    shared_ptr<int> number2 = make_shared<int> (20);

    return 0;
}