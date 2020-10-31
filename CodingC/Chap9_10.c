//#include <stdio.h>
//
//void gcdlcm(int x, int y, int *px, int *py);
//
//int main() {
//    int N, M, gcd=0, lcm=0;
//    
//    scanf("%d %d",&N,&M);
//    gcdlcm(N, M, &gcd, &lcm);
//    printf("%d %d",gcd,lcm);
//    return 0;
//}
//
//void gcdlcm(int x, int y, int *px, int *py) {
//    int big, small, ans1=1, ans2=1;
//    
//    if(x>=y){
//        big = x;
//        small = y;
//    }else {
//        big = y;
//        small = x;
//    }
//    
//    for(int i=1;i<=small;i++){
//        if(small % i ==0 && big % i ==0 ) {
//            ans1 = i;
//        }
//    }
//    
//    for(int i=big;;i++){
//        if(i%big ==0 && i%small ==0){
//            ans2 = i;
//            break;
//        }
//    }
//    
//    *px = ans1;
//    *py = ans2;
//}
