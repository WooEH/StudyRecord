//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str1[21], str2[21], temp;
//    int ind, rev;
//
//    scanf("%s",str1);
//    scanf("%s",str2);
//    scanf("%d",&ind);
//    scanf("%d",&rev);
//
//    for(int i=strlen(str1)-1;i>=ind;i--){
//        *(str1+i+strlen(str2)) = *(str1+i);
//    }
//
//    if(rev == 0) {
//        for(int i=ind;i<ind+strlen(str2);i++){
//            *(str1+i) = *(str2+i-ind);
//        }
//    }else if(rev ==1){
//        for(int i=0;i<strlen(str2)/2;i++){
//            temp = *(str2+i);
//            *(str2+i) = *(str2+strlen(str2)-1-i);
//            *(str2+strlen(str2)-1-i) = temp;
//        }
//
//        for(int i=ind;i<ind+strlen(str2);i++){
//            *(str1+i) = *(str2+i-ind);
//        }
//    }
//    printf("%s",str1);
//    return 0;
//}
