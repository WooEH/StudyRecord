//#include <stdio.h>
//
//int add_to_k(int *a, int *b);
//
//int main() {
//    int N, d[100], ans=0;
//    
//    scanf("%d",&N);
//    for(int i=0;i<N;i++){
//        scanf("%d",d+i);
//    }
//    
//    for(int i=0;i<N;i++){
//        ans += add_to_k(d,d+i);
//    }
//    
//    printf("%d",ans);
//    return 0;
//}
//
//int add_to_k(int *a, int *b) {
//    int sum =0;
//    
//    for(int* p =a;p<=b;p++){
//        sum += *p;
//    }
//    return sum;
//}
