//#include <stdio.h>
//
//int is_prime(int x);
//int next_prime(int x);
//
//int main() {
//    int N, M, cnt=0, ans;
//    scanf("%d %d",&N,&M);
//    
//    ans = N;
//    while(1) {
//        ans = next_prime(ans);
//        cnt++;
//        
//        printf(" %d",ans);
//        if(cnt==M){
//            break;
//        }
//    }
//    return 0;
//}
//
//int is_prime(int x) {
//    for(int i=2;i<x;i++){
//        if(x%i==0){
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int next_prime(int x){
//    for(int i=x+1;;i++){
//        if(is_prime(i)==1){
//            return i;
//        }
//    }
//}
