// I know theres a way to call a function if it exist and not call one if it doesn't exist but stack overflow's being a bitch and will
// block my account just because my question where hated by the stack overflow community.
// So I'm doing this.
// Fuck you stack overflow!
// cplusplus.com is better!
// hehe true

#include "QS-main.h"
#include <string.h>
void Q_MAIN();

int main(int* argc, char* argv[]) {
    if(argv[1] != NULL)
    {
    	if (argv[1] == "-Hello") {
        std::cout << "Hello World!";
        return 0;
    	}
    	else if (strcmp(argv[1], "-status") == 0) {
        std::cout << "Quark ver: 1.0.0et Linux Port : By 8BITDEV" << std::endl;
        return 0;
    	}
    }
    
    Q_MAIN();
    
    return 0;
}
