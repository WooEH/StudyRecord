//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[101];
//    int ans = 0;
//    
//    scanf("%s",str);
//    
//    for(int i=0;i<strlen(str);i++){ //예외처리
//        if(!((str[i]>='a'&&str[i]<='z')||str[i]=='-'||str[i]=='=')) {
//            return -1;
//        }
//    }
//    
//    for(int i=0;i<strlen(str);i++){
//        if(str[i]=='c') {
//            if(str[i+1]=='='||str[i+1]=='-') {
//                i += 1;
//            }
//        }else if(str[i]=='d'){
//            if(str[i+1]=='-'){
//                i += 1;
//            }else if(str[i+1]=='z'){
//                if(str[i+2]=='='){
//                    i+= 2;
//                }
//            }
//        }else if(str[i]=='l'){
//            if(str[i+1]=='j'){
//                i+=1;
//            }
//        }else if(str[i]=='n'){
//            if(str[i+1]=='j'){
//                i+=1;
//            }
//        }else if(str[i]=='s'){
//            if(str[i+1]=='=') {
//                i+=1;
//            }
//        }else if(str[i]=='z'){
//            if(str[i+1]=='='){
//                i+=1;
//            }
//        }
//        ans += 1;
//    }
//    printf("%d",ans);
//    return 0;
//}
