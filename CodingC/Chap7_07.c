//#include <stdio.h>
//
//int main() {
//    int arr[10], cnt1, cnt2;
//    
//    for(int i=0;i<10;i++){
//        scanf("%d",&arr[i]);
//    }
//    
//    for(int i=0;i<10;i++){
//        cnt1=0;
//        cnt2=0;
//        for(int j=0;j<=i;j++){
//            if(arr[i] == arr[j]){
//                cnt1++;
//            }
//        }
//        
//        if(cnt1>=2){
//            continue;
//        }
//        
//        for(int j=0;j<10;j++){
//            if(arr[i]==arr[j]){
//                cnt2++;
//            }
//        }
//        
//        printf("%d %d\n",arr[i],cnt2);
//    }
//    return 0;
//}
