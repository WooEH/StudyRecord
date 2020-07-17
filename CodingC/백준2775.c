//#include <stdio.h>
//
//int p_cnt(int f, int n);
//
//int main(){
//    int T, k, n;
//    
//    scanf("%d",&T);
//    
//    for(int i=0;i<T;i++){
//        scanf("%d",&k);
//        scanf("%d",&n);
//        if(k<1||k>14||n<1||n>14){
//            return -1;
//        }
//        printf("%d\n",p_cnt(k,n));
//    }
//    return 0;
//}
//
//int p_cnt(int f, int n) {
//    int cnt=0;
//    
//    if(f==0){
//        return n;
//    }
//    
//    for(int i=1;i<=n;i++){
//        cnt += p_cnt(f-1,i);
//    }
//    
//    return cnt;
//}
