#include <iostream>

int main(){

    std::cout << "Welcome to the Type Conversion Program!" << std::endl;
    std::cout << "---------------------------------------" << std::endl;

    /*
        type conversion = conversion a value of one data type to another
                            Implicit = automatic
                            Explicit = Precede value with new data type
    */

    // Value "3.14" implicitly converted to "int" data type.
    // Decimal part is truncated
    int x = 3.14;
    std::cout << "x = " << x << std::endl;

    double y = 4.83;
    std::cout << "y = " << y << std::endl;

    // Explicitly convert value "2.91" to "int" data type (z=2) and assign to "double" variable
    double z = (int) 2.91;
    std::cout << "z = " << z << std::endl;

    // Character with ASCII code = 100 (d)
    char c = 100;
    std::cout << "c = " << c << std::endl;

    // Explicitly cast value "100" to "char" data type (d=d) and assign to "char" variable
    char d = (char) 100;
    std::cout << "d = " << d << std::endl;

    std::cout << "---------------------------------------" << std::endl;

    int questions = 10;
    int correct = 8;
    // Score will be equal to 0 because "8/10 = 0". The decimal part is truncated 
    double score_1 = correct / questions * 100;

    // Explicitly cast questions to "double" data type. Thus, keeping the decimal part
    double score_2 = correct / (double)questions * 100;

    // Explicitly cast correct answers to "double" data type. Thus, keeping the decimal part
    double score_3 = (double)correct / questions * 100;

    std::cout << "Total questions in the exam = " << questions << std::endl;
    std::cout << "Correctly answered questions = " << correct << std::endl;
    std::cout << "[1] Student score = " << score_1 << "%" << std::endl;
    std::cout << "[2] Student score = " << score_2 << "%" << std::endl;
    std::cout << "[3] Student score = " << score_3 << "%" << std::endl;

    return 0;
}