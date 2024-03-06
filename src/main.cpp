#include <iostream>
#include "utils.h"

using namespace std;

int main() {
#ifdef MY_VARIABLE
    cout << "MY_VARIABLE is defined:" << MY_VARIABLE << endl;
#endif
    printHello();
    return 0;
}