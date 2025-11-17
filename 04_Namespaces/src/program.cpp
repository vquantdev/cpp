#include <iostream>

namespace namespaceOne {
    int x = 1;
}

namespace namespaceTwo {
    int x = 2;
}

int main() {

    using std::cout;
    using std::endl;
    using namespace namespaceOne;
    
    // This will generate an error when accessing "x" without specifying the namespace 
    // because "x" is defined in both "namespaceOne", "namespaceTwo"
    // Error: reference to 'x' is ambiguous
    // using namespace namespaceTwo;

    cout << "Welcome to the Namespaces program" << endl;
    cout << "---------------------------------" << endl;

    /*
        Namespace = provides a solution for preventing name conflicts
                    in large projects. Each entity needs a unique name.
                    A namespace allows to identically named entities 
                    as long as the namespaces are different.
    */

    // Overrides x (x=0) when using "using namespace namespaceOne;"
    // int x = 0;
    
    // We cannot create the second variable "x" and give it another value "1"
    // It will generate error:
    // Error: Redefinition of 'x'
    // int x = 1;

    cout << "x in main = " << x << endl;
    cout << "x in namespaceOne = " << namespaceOne::x << endl;
    cout << "x in namespaceTwo = " << namespaceTwo::x << endl;

    return 0;
}