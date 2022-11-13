class Main {
    public static void main(String[] args) {
        long totalTime = 0;

        int testCases = 100;

        for (int i = 0; i < testCases; i++) {
            long start = System.currentTimeMillis();
            for (int j = 0; j < 1000000; j++) {
                long x = j;
            }
            totalTime += System.currentTimeMillis() - start;
        }

        System.out.println(totalTime / (testCases * 1000));
    }
}