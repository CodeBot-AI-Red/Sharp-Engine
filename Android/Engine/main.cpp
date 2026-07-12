#include "engine.h"

int main() {
    SharpEngine engine;

    engine.initialize();

    while (true) {
        engine.update();
    }

    engine.shutdown();
    return 0;
}
