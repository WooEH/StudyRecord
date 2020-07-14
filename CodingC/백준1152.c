//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char tmp[1000001];
//    int word_cnt = 0, space_cnt = 0;
//    
//    gets(tmp);
//    
//    for(int i=0;i<strlen(tmp);i++){ //예외처리
//        if(!((tmp[i]<='z'&&tmp[i]>='a')||(tmp[i]<='Z'&&tmp[i]>='A')||tmp[i]==' ')){
//            return -1;
//        }
//    }
//    
//    for(int i=0;i<strlen(tmp);i++){
//        if(tmp[i] == ' ') {
//            space_cnt += 1;
//        }
//    }
//    
//    word_cnt = space_cnt + 1;
//    
//    if(tmp[0]==' ') {
//        word_cnt -= 1;
//    }
//    
//    if(tmp[strlen(tmp)-1]==' ') {
//        word_cnt -= 1;
//    }
//    
//    printf("%d",word_cnt);
//    return 0;
//}
