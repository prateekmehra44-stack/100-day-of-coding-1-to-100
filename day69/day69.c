#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n], freq[n+1];
    
    for(int i=0;i<=n;i++) freq[i] = 0;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(freq[a[i]] == 1){
            printf("%d", a[i]);
            return 0;
        }
        freq[a[i]] = 1;
    }

    return 0;
}
