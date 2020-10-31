//#include <stdio.h>
//
//int main() {
//    char ch[20], len=0;
//    
//    for(int i=0;i<20;i++) {
//        scanf("%c",ch+i);
//        
//        if(*(ch+i)=='\n'){
//            len = i;
//            break;
//        }
//    }
//    
//    for(int i=0;i<len;i++){
//        if(*(ch+i) == '#'){
//            len = i;
//            break;
//        }
//    }
//    
//    for(int i=len-1;i>=0;i--){
//        printf("%c",*(ch+i));
//    }
//    return 0;
//}
