#include "NudStream.hpp"

namespace nud {
    void print(nud::string message) {
        std::cout << message.data;
    }

    void endl() {
        std::cout << "\n";
    }
};