#include <stdio.h>

long long Fibo(int n);

int main() {
    int n;
    long long ans=0;
    
    scanf("%d",&n);
    
    if(!(n<=1000000&&n>=0)){
        return -1;
    }
    ans = Fibo(n)%1000000007;
    printf("%lld",ans);
    return 0;
}

long long Fibo(int n) {

    if(n==0) {
        return 0;
    }else if(n==1){
        return 1;
    }
    
    return Fibo(n-1)+Fibo(n-2);
}
