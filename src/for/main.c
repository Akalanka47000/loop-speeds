#include <stdio.h>
#include <time.h>

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

    printf("%ld", totalTime / (testCases * CLOCKS_PER_SEC));
}