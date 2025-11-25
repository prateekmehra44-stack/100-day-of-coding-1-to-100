#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};

    scanf("%lld", &n);
    if (n < 0) n = -n;

    if (n == 0) freq[0] = 1;

    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    int max_digit = 0, max_freq = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_digit = i;
        }
    }

    printf("%d", max_digit);
    return 0;
}
