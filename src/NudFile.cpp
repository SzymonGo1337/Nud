#include "Nud.hpp"

namespace nud {
    nud::string load(nud::string filename) {
        nud::string data, line;
        std::ifstream file(filename.data);

        if(file.is_open()) {
            while(std::getline(file, line.data)) {
                line.push("\n");
                data.push(line.data);
            }
            file.close();
        }

        return data;
    }

    void save(nud::string filename, nud::string data) {
        std::ofstream file(filename.data);
        if(file.is_open()) {
            file << data.data;
            file.close();
        }
    }
};