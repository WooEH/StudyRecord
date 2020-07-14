//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char S[101];
//    int flag=0;
//    
//    scanf("%s",S);
//    
//    for(int i=0;i<strlen(S);i++){
//        if(!(S[i]<='z'&&S[i]>='a')){ //예외 처리
//            return -1;
//        }
//    }
//    
//    for(char i='a';i<='z';i++){
//        flag = 0;
//        for(int j=0;j<strlen(S);j++){
//            if(S[j]==i) {
//                printf("%d",j);
//                flag += 1;
//                break;
//            }
//        }
//        
//        if(flag==0){
//            printf("-1");
//        }
//        
//        if(i=='z'){
//            continue;
//        }
//        printf(" ");
//    }
//    return 0;
//}
//
