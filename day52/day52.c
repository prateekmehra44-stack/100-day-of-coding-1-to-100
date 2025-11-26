#include <stdio.h>

int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]>=x){ ans=m; r=m-1; }
        else l=m+1;
    }
    printf("%d",ans);
    return 0;
}
