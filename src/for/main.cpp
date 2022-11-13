#include <iostream>
#include <ctime>

int main() {
    long totalTime = 0;

    int testCases = 100;

    for (int i = 0; i < testCases; i++) {
        long start = clock();
        for (int j = 0; j < 1000000; j++) {
            long x = j;
        }
        totalTime += clock() - start;
    }

    std::cout << totalTime / (testCases * CLOCKS_PER_SEC) << std::endl;
}