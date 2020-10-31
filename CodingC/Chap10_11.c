//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str1[81], str2[11];
//    int cnt=0, flag=0;
//    
//    scanf("%s",str1);
//    scanf("%s",str2);
//    
//    printf("%d ",strlen(str1));
//    for(int i=0;i<=strlen(str1)-strlen(str2);i++){
//        cnt=0;
//        for(int j=0;j<strlen(str2);j++){
//            if(*(str1+j+i)==*(str2+j)){
//                cnt++;
//            }
//        }
//        
//        if(cnt==strlen(str2)){
//            printf("1");
//            flag = 1;
//            break;
//        }
//    }
//    
//    if(flag==0){
//        printf("0");
//    }
//    return 0;
//}
