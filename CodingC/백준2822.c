//#include <stdio.h>
//
//int main(){
//    int score[8], oh=0;
//    int top[5], rank=1;
//    int ind = 0, sum=0;
//    
//    for(int i=0;i<8;i++){
//        scanf("%d",score+i);
//    }
//    
//    for(int i=0;i<8;i++){
//        rank = 1;
//        for(int j=0;j<8;j++){
//            if(score[i]<score[j]){
//                rank++;
//            }
//        }
//        if(rank==5){
//            oh = score[i];
//            break;
//        }
//    }
//    
//    for(int i=0;i<8;i++){
//        if(oh<= score[i]){
//            sum += score[i];
//            top[ind] = i+1;
//            ind++;
//        }
//    }
//    
//    printf("%d\n",sum);
//    printf("%d %d %d %d %d",top[0],top[1],top[2],top[3],top[4]);
//    return 0;
//}
