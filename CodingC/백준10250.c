//#include <stdio.h>
//
//int main() {
//    int T, H, W, N;
//    int ans=0;
//    
//    scanf("%d",&T);
//    
//    for(int i=0;i<T;i++){
//        ans=0;
//        scanf("%d %d %d",&H,&W,&N);
//        if(H<1||W>=100||N<1||N>H*W) { //예외처리
//            return -1;
//        }
//        
//        if(N%H==0){
//            ans = H*100;
//            ans += N/H;
//        }else {
//            ans = (N%H)*100;
//            ans += (N/H)+1;
//        }
//        printf("%d\n",ans);
//    }
//    return 0;
//}
