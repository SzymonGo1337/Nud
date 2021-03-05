#pragma once
#ifndef NUD_THREAD_HEADER
#define NUD_THREAD_HEADER

#include "Nud.hpp"

namespace nud {
    class thread {
    public:
        thread(nudvoid func);

        void run();

    private:
        std::thread th;
    };
};

#endif