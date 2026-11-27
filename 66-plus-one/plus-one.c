
#pragma GCC optimize("O3, unroll-loops")
int* plusOne(int* digits, int n, int* returnSize) {
    *returnSize=n;
    for(int i=n-1; i>=0; i--){
        digits[i]++;
        if (digits[i]<10) return digits;
        digits[i]=0;
    }
    (*returnSize)++;
    digits=(int*)realloc(digits, sizeof(int)*(n+1));
    memset(digits, 0, (n+1)*sizeof(int));
    digits[0]=1;
    return digits;
}