//#include <stdio.h>
//
//int main(){
//    //고정 비용:A, 가변비용: B -> n대 생산 = A + nB < nC 이 때의 n
//    long long A, B, C;
//    long long ans=0;
//    
//    scanf("%lld %lld %lld",&A,&B,&C);
//    
//    if(B >= C) {
//        printf("-1");
//    }else{
//        ans = A/(C-B) + 1;
//        printf("%lld",ans);
//    }
//    return 0;
//}
