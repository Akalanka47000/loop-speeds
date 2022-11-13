import time

totalTime = 0

testCases = 100

for i in range(testCases):
        start = time.time()
        for j in range(0, 1000000):
                x = j
        totalTime += (time.time() - start)

print(totalTime/testCases)