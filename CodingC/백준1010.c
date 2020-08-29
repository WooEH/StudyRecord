//#include <stdio.h>
//
//long long way(int N, int M);
//
//int main(){
//    int T, a[31][2];
//    long long ans;
//    
//    scanf("%d",&T);
//    
//    for(int i=0;i<T;i++){
//        scanf("%d %d",&a[i][0],&a[i][1]);
//        if(a[i][0]>a[i][1] || a[i][0]<=0 || a[i][1]>=30){
//            return -1;
//        }
//    }
//    
//    for(int i=0;i<T;i++){
//        ans = way(a[i][0],a[i][1]);
//        printf("%lld\n",ans);
//    }
//    return 0;
//}
//
//long long way(int N, int M){
//    long long ans=1;
//    
//    for(int i=M;i>=M-N+1;i--){
//        ans *= i;
//    }
//    
//    for(int i=N;i>=1;i--){
//        ans /= i;
//    }
//    return ans;
//}
