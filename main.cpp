#include <stdio.h>
#include <iostream>
#include <memory>

using namespace std;

int main() {
    cout<< "Hello World!!" <<endl;

    unique_ptr<int> number1 = make_unique<int> (10);

    return 0;
}