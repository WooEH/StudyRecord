//#include <stdio.h>
//
//int main() {
//    char ch[10];
//    int cnt=0, max=0, ind=0;
//    
//    for(int i=0;i<10;i++){
//        scanf("%c",ch+i);
//    }
//    
//    for(int i=0;i<10;i++){
//        cnt=0;
//        for(int j=0;j<10;j++){
//            if(*(ch+i) == *(ch+j)) {
//                cnt++;
//            }
//        }
//        
//        if(cnt > max) {
//            ind = i;
//            max = cnt;
//        }
//    }
//    
//    printf("%c %d",*(ch+ind), max);
//    return 0;
//}
