#include "Nud.hpp"

nud::string data(R"(Szymon to ziomal
Szymon to nadzieja)");

nudvoid demo() {
    nud::save(nud::string("test.txt"), data);
    nud::print(nud::load(nud::string("test.txt")));
    nud::endl();

    nud::string test(nud::color[1]);
    test.push("ez");
    nud::print(test);

    return nudvoid(0);
}

nudint main(nudint argc, nudchar** argv) {
    std::vector<nud::thread> threads;

    for(int i = 0; i < 3; i++) {
        threads.push_back(nud::thread(demo()));
    }

    for(auto& thread : threads) {
        thread.run();
    }

    nud::exit();
}