void factorialRange(int start, int end) {
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }
    
    for (int i = start; i <= end; i++) {
        long long factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("%lld\n", factorial);
    }
}