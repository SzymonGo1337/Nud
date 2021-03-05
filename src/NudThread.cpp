#include "NudThread.hpp"

namespace nud {
    thread::thread(nudvoid func) {
        th = std::thread(func);
    }

    void thread::run() {
        th.join();
    }
};