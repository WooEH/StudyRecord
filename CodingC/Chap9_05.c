//#include <stdio.h>
//
//int main() {
//    int arr[5], rank[5] = {0}, cnt;
//    
//    for(int i=0;i<5;i++){
//        scanf("%d",arr+i);
//    }
//    
//    for(int i=0;i<5;i++){
//        cnt=1;
//        for(int j=0;j<5;j++){
//            if(*(arr+i) < *(arr+j)){
//                cnt++;
//            }
//        }
//        
//        *(rank+i) = cnt;
//    }
//    
//    for(int i=0;i<5;i++){
//        printf("%d=r%d ",*(arr+i),*(rank+i));
//    }
//    return 0;
//}
