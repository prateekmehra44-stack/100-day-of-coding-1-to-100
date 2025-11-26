#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k;
    if(scanf("%d",&k)!=1) return 0;
    if(k>n || k<=0) return 0;
    int q[n];
    int front=0, back=-1;
    for(int i=0;i<n;i++){
        if(a[i]<0) q[++back]=i;
        while(front<=back && q[front]<=i-k) front++;
        if(i>=k-1){
            if(i>k-1) printf(" ");
            if(front>back) printf("0");
            else printf("%d", a[q[front]]);
        }
    }
    return 0;
}
