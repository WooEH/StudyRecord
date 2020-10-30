//#include <stdio.h>
//
//int count_3(int x);
//
//int main() {
//    int N;
//    
//    scanf("%d",&N);
//    printf("%d",count_3(N));
//    return 0;
//}
//
//int count_3(int x){
//    int cnt = 0, temp = 0;
//    
//    for(int i=1;i<=x;i++){
//        temp = i;
//        while(temp > 0) {
//            if(temp % 10 == 3){
//                cnt++;
//            }
//            
//            temp /= 10;
//        }
//    }
//    return cnt;
//}
