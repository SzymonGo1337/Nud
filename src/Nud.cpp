#include "Nud.hpp"

namespace nud {
    int init() {
        #ifdef _WIN32
            system("Setlocal");
        #endif

        return 1;
    }

    static int exec = init();

    int exit() {
        nud::print(nud::string(nud::color[0]));
        return 0;
    }
};