//#include <stdio.h>
//
//int main(){
//    int C, K, P; //년, 애정도, 중독정도
//    int sum = 0;
//    
//    scanf("%d %d %d",&C,&K,&P);
//    if(!((C<=100&&C>=0)||(K<=0&&K>=1000)||(P<=100&&P>=0))) {
//        return -1;
//    }
//    
//    for(int i=1;i<=C;i++){
//        sum += K*i + P*i*i;
//    }
//    
//    printf("%d",sum);
//    return 0;
//}
