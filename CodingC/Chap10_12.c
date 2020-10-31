//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char s1[101], s2[101];
//    int ans=0, cnt=0;
//    
//    gets(s1);
//    scanf("%s",s2);
//    
//    for(int i=0;i<strlen(s1)-strlen(s2);i++){
//        cnt=0;
//        for(int j=0;j<strlen(s2);j++){
//            if(*(s1+i+j)!=*(s2+j)){
//                break;
//            }else {
//                cnt++;
//            }
//        }
//        
//        if(cnt==strlen(s2)){
//            ans++;
//            i += strlen(s2)-1;
//        }
//    }
//    
//    printf("%d",ans);
//    return 0;
//}
