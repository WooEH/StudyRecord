//#include <stdio.h>
//
//void ABC(int *a, int k);
//
//int main() {
//    int arr[10];
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",arr+i);
//    }
//    
//    for(int i=0;i<9;i++){
//        ABC(arr+i,10-i);
//    }
//    
//    for(int i=0;i<10;i++){
//        printf(" %d",*(arr+i));
//    }
//    return 0;
//}
//
//void ABC(int *a, int k){
//    int max = *a, ind = 0, temp;
//    for(int *p=a;p<=a+k-1;p++){
//        if(*p > max){
//            ind = p - a;
//            max = *p;
//        }
//    }
//    
//    temp = *a;
//    *a = *(a+ind);
//    *(a + ind) = temp;
//}
