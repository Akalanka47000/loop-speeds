void main() {
    var totalTime = 0;

    var testCases = 100;

    for (var i = 0; i < testCases; i++) {
        var start = DateTime.now();
        for (var j = 0; j < 1000000; j++) {
            var x = j;
        }
        totalTime += DateTime.now().difference(start).inMilliseconds;
    }

    print(totalTime ~/ (testCases * 1000));
}