let totalTime = 0;

let testCases = 100

for (let i = 0; i < testCases; i++) {
    const start = Date.now();
    for (var j = 0; j < 1000000; j++) {
        let x = j;
    }
    totalTime += Date.now() - start
}

console.log(totalTime / (testCases * 1000));