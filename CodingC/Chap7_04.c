//#include <stdio.h>
//
//int main() {
//    int arr[10], cnt;
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",&arr[i]);
//    }
//    
//    for(int i=0;i<10;i++){
//        cnt=0;
//        for(int j=0;j<=i;j++){
//            if(arr[i]==arr[j]){
//                cnt++;
//            }
//        }
//        
//        if(cnt>=2){
//            continue;
//        }
//        
//        cnt = 0;
//        for(int j=0;j<10;j++){
//            if(arr[i]==arr[j]){
//                cnt++;
//            }
//        }
//        
//        printf("%d:",arr[i]);
//        for(int j=0;j<cnt;j++){
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
