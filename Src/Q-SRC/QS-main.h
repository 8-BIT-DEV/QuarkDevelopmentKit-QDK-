#ifndef QSMAIN_H
#define QSMAIN_H

#include <iostream>
#include <string>
#include <conio.h>
#include <chrono>
#include <thread>

using std::endl; // Because I hate typing std for endl

/* ##################### MISC ##################### */

// Single word no () statements
    #define new_line std::cout << endl

// Shit I dont know where to put it/label it
    #define define_var typedef

    typedef std::string string;
    typedef void Module;

    #define elif else if

    #define addnum(num1, num2, num3) num3 = num1 + num2
    #define subnum(num1, num2, num3) num3 = num1 - num2
    #define multnum(num1, num2, mum3) num3 = num1 * num2
    #define divnum(num1, num2, num3) num3 = num1 / num2
    #define remnum(num1, num2, num3) num3 = num1 % num2

    #define ACTOR class
    #define PUBLIC_ACTOR struct
    #define GLOBAL public
    #define REUSE_ :
    #define PRIVATE private
    #define SECRET protected

    #define find_type auto

    #define blueprint(blueprintName) template<typename blueprintName>
    #define blueprintType template
    
    class mega {
    public:
        int i;
        float f;
        double d;
        string s;

        void list(bool new_line_bool = true) {
            if (new_line_bool == true) {
                std::cout << i << endl << f << endl << d << endl << s;
            }
            else {
                std::cout << i << f << d << s;
            }
        }
    };

#endif