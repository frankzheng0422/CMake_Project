#include <iostream>
#include "utils.h"
#include "version.h"

using namespace std;

int main() {
#ifdef MY_VARIABLE
    cout << "MY_VARIABLE is defined:" << MY_VARIABLE << endl;
#endif
    printHello();

    cout << "Version: " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_PATCH << endl;
    return 0;
}