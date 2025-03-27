int countGlovePairs(int gloves[1000], int n) {
    int frequency[1000] = {0};
    for (int i = 0; i < n; i++) {
        frequency[gloves[i]]++;
    }
    int pairs = 0;
    for (int i = 0; i < 1001; i++) {
        pairs += frequency[i] / 2;
    }
    return pairs;
}