#include <stdio.h>

int first(int a[], int n, int x){
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x){ans=m; r=m-1;}
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return ans;
}

int last(int a[], int n, int x){
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x){ans=m; l=m+1;}
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return ans;
}

int main(){
    int n;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int t;
    scanf("%d",&t);
    int f=first(a,n,t);
    int lidx=last(a,n,t);
    if(f==-1) printf("-1, -1\n");
    else printf("%d, %d\n",f,lidx);
    return 0;
}
