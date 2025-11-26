#include <stdio.h>

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k;
    if(scanf("%d",&k)!=1) return 0;
    if(k>n || k<=0) return 0;
    int dq[n];
    int front=0, back=-1;
    for(int i=0;i<n;i++){
        while(front<=back && dq[front]<=i-k) front++;
        while(front<=back && a[dq[back]]<=a[i]) back--;
        dq[++back]=i;
        if(i>=k-1){
            if(i>k-1) printf(" ");
            printf("%d", a[dq[front]]);
        }
    }
    return 0;
}
