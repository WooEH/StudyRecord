//#include <stdio.h>
//
//int main() {
//    int N, K, L, X;
//    int pos_x, pos_y;
//    char C;
//    
//    scanf("%d",&N);
//    if(N<2||N>100){ //예외처리
//        return -1;
//    }
//    
//    scanf("%d",&K); //에외처리
//    if(K<0||K>100){
//        return -1;
//    }
//    
//    for(int i=0;i<K;i++) {
//        scanf("%d %d",&pos_x,&pos_y);
//        if(pos_x==1&&pos_y==1) {    //맨위 맨좌측에 사과 있으면 안됨.
//            return -1;
//        }
//    }
//    
//    scanf("%d",&L);
//    
//    for(int i=0;i<L;i++){
//        scanf("%d %c",&X,&C);
//    }
//    return 0;
//}
