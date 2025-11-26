#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int max_so_far = a[0];
    int curr = a[0];

    for(int i=1;i<n;i++){
        if(curr + a[i] < a[i]) curr = a[i];
        else curr += a[i];
        if(curr > max_so_far) max_so_far = curr;
    }

    printf("%d", max_so_far);
    return 0;
}
