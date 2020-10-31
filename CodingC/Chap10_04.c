//#include <stdio.h>
//#include <string.h>
//
//int length(char *x);
//int compare(char *a,char *b);
//
//int main() {
//    char a[101], b[101];
//    
//    scanf("%s",a);
//    scanf("%s",b);
//    
//    printf("%d %d",length(a),compare(a,b));
//    return 0;
//}
//
//int length(char *x){
//    int len = 0;
//    
//    for(char *p=x;*p!='\0';p++){
//        len++;
//    }
//    return len;
//}
//
//int compare(char *a,char *b){
//    if(length(a) != length(b)){
//        return 0;
//    }else {
//        for(int i=0;i<length(a);i++){
//            if(a[i] != b[i]){
//                return 0;
//            }
//        }
//    }
//    return 1;
//}
