// I know theres a way to call a function if it exist and not call one if it doesn't exist but stack overflow's being a bitch and will
// block my account just because my question where hated by the stack overflow community.
// So I'm doing this.
// Fuck you stack overflow!
// cplusplus.com is better!

#include "QS-main.h"
void Q_MAIN();

int main(int argc, char* argv[]) {
    if (argv[1] == "-Hello") {
        std::cout << "Hello World!";
    }
    else if (argv[1] == "-status") {
        std::cout << "Quark ver: 1.0.0et";
    }
    
    Q_MAIN();
}