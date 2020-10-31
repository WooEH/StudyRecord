//#include <stdio.h>
//
//int arrsum(int *start, int *end);
//
//int main() {
//    int N, S, E;
//    int arr[100];
//    
//    scanf("%d %d %d",&N,&S,&E);
//    for(int i=0;i<N;i++){
//        scanf("%d",arr+i);
//    }
//    
//    printf("%d", arrsum(arr+S,arr+E));
//    return 0;
//}
//
//int arrsum(int *start, int *end){
//    int sum = 0;
//    
//    for(int* p=start;p<=end;p++){
//        sum += *p;
//    }
//    return sum;
//}
