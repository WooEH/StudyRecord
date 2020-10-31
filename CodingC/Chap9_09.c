//#include <stdio.h>
//
//int* mid(int x[]);
//
//int main() {
//    int x[3];
//    
//    for(int i=0;i<3;i++) {
//        scanf("%d",x+i);
//    }
//    
//    printf("%d",*mid(x));
//    return 0;
//}
//
//int* mid(int x[]) {
//    int a;
//    
//    for(int i=0;i<2;i++){
//        for(int j=i+1;j<3;j++){
//            if(*(x+i) > *(x+j)){
//                a = *(x+i);
//                *(x+i) = *(x+j);
//                *(x+j) = a;
//            }
//        }
//    }
//    return x+1;
//}
