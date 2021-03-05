#pragma once
#ifndef NUD_HEADER
#define NUD_HEADER

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <thread>
#include <vector>

namespace nud {
    extern int init();
    extern int exit();
};

#include "NudTypes.hpp"
#include "NudStream.hpp"
#include "NudFile.hpp"
#include "NudColor.hpp"
#include "NudThread.hpp"

#endif