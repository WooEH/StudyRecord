//#include <stdio.h>
//
//void addArray(int *a, int *b, int *c, int size);
//
//int main() {
//    int N, a[30], b[30], c[30];
//    
//    scanf("%d",&N);
//    
//    for(int i=0;i<N;i++){
//        scanf("%d",a+i);
//    }
//    for(int i=0;i<N;i++){
//        scanf("%d",b+i);
//    }
//    
//    addArray(a,b,c,N);
//    
//    for(int i=0;i<N;i++){
//        printf(" %d",*(c+i));
//    }
//    return 0;
//}
//
//void addArray(int *a, int *b, int *c, int size) {
//    for(int i=0;i<size;i++){
//        *(c+i) = *(a+i) + *(b+size-i-1);
//    }
//}
