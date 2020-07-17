//#include <stdio.h>
//
//int main(){
//    int N, cnt=0, cnt_5=0, cnt_3=0;
//    
//    scanf("%d",&N);
//    if(N<3||N>5000){
//        return -1;
//    }
//    
//    for(int i=N/5;i>=0;i--){
//        if((N-5*i)%3==0){
//            cnt_5 = i;
//            cnt_3 = (N-5*i)/3;
//        }
//        
//        if(cnt==0){
//            cnt = cnt_5 + cnt_3;
//        }else if(cnt > cnt_5 + cnt_3){
//            cnt = cnt_5 + cnt_3;
//        }
//    }
//    
//    if(cnt==0){
//        printf("-1");
//    }else {
//        printf("%d",cnt);
//    }
//    return 0;
//}
