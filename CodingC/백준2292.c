//#include <stdio.h>
//
//int main(){
//    long long N;
//    int up=1, down =1, gap = 0;
//    
//    scanf("%lld",&N);
//    if(!(N<=10000000&&N>=1)){ //예외처리
//        return -1;
//    }
//    
//    //시작 지점: 1, 2, 4, 7, 11, 16 ... = (n*n - n + 2)/2
//    for(int i=1;;i++){
//        if((i*i-i+2)/2 > N) {
//            if(i%2==0){
//                //직전 분수의 분자가 1
//                gap = (i*i-i+2)/2-N;
//                up = gap;
//                down = i-up;
//            }else {
//                //직전 분수의 분모가 1
//                gap = (i*i-i+2)/2-N;
//                down = gap;
//                up = i-down;
//            }
//            break;
//        }
//    }
//    printf("%d/%d",up,down);
//    return 0;
//}
