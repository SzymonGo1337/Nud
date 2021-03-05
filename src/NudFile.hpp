#pragma once
#ifndef NUD_FILE_HEADER
#define NUD_FILE_HEADER

#include "Nud.hpp"

namespace nud {
    extern nud::string load(nud::string filename);
    extern void save(nud::string filename, nud::string data);
};

#endif