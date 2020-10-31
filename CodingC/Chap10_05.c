//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str1[21], str2[21];
//    int ind;
//
//    scanf("%s",str1);
//    scanf("%s",str2);
//    scanf("%d",&ind);
//
//    for(int i=strlen(str1)-1;i>=ind;i--){
//        *(str1+i+strlen(str2)) = *(str1+i);
//    }
//
//    for(int i=ind;i<ind+strlen(str2);i++){
//        *(str1+i) = *(str2+i-ind);
//    }
//
//    printf("%s",str1);
//    return 0;
//}
