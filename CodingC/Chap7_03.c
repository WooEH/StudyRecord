//#include <stdio.h>
//
//int main() {
//    int arr[5], max1=-100000000, max2=-10000000, ind = 0;
//
//    for(int i=0;i<5;i++){
//        scanf("%d",&arr[i]);
//    }
//
//    for(int i=0;i<5;i++){
//        if(arr[i] > max1) {
//            max1 = arr[i];
//            ind = i;
//        }
//    }
//
//    for(int i=0;i<5;i++){
//        if(i == ind){
//            continue;
//        }else if(arr[i] > max2){
//            max2 = arr[i];
//        }
//    }
//
//    printf("%d\n%d",max1,max2);
//    return 0;
//}
