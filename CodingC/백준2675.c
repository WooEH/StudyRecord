//#include <stdio.h>
//#include <string.h>
//
//int main(){
//    int T, R, ind=0;
//    char S[21], P[161];
//    
//    scanf("%d",&T);
//    
//    if(T<1||T>1000){    //예외처리
//        return -1;
//    }
//    
//    for(int i=0;i<T;i++){
//        ind=0;
//        P[ind] = '\0';
//        scanf("%d %s",&R,S);
//        if(R<1||R>8) {
//            return -1;
//        }
//
//        if(strlen(S)==0||strlen(S)>20){
//            return -1;
//        }
//        
//        for(int j=0;j<strlen(S);j++){
//            for(int k=0;k<R;k++){
//                P[ind] = S[j];
//                ind += 1;
//            }
//        }
//        P[ind] = '\0';
//        printf("%s\n",P);
//    }
//    return 0;
//}
