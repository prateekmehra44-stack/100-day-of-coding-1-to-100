#include <stdio.h>

int main(){
    int n,k;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(scanf("%d",&k)!=1) return 0;
    if(k>n || k<=0){ printf("0"); return 0; }
    long long sum=0;
    for(int i=0;i<k;i++) sum+=a[i];
    long long max=sum;
    for(int i=k;i<n;i++){
        sum += a[i];
        sum -= a[i-k];
        if(sum>max) max=sum;
    }
    printf("%lld", max);
    return 0;
}
