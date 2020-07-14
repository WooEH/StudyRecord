//#include <stdio.h>
//#include <string.h>
//
//int main(){
//    char tmp[1000001];
//    int alphabet[26]={0,}, max = 0, ind=0;
//    int flag =0;
//    
//    scanf("%s",tmp);
//    
//    for(int i=0;i<strlen(tmp);i++){
//        if(!((tmp[i]>='a'&&tmp[i]<='z')||(tmp[i]<='Z'&&tmp[i]>='A'))){
//            return -1;
//        }
//    }
//    
//    for(int i=0;i<strlen(tmp);i++){
//        if(tmp[i]<='z'&&tmp[i]>='a'){
//            alphabet[tmp[i]-'a'] += 1;
//        }else if(tmp[i]<='Z'&&tmp[i]>='A'){
//            alphabet[tmp[i]-'A'] += 1;
//        }
//    }
//    
//    max = alphabet[0];
//    for(int i=1;i<26;i++){
//        if(alphabet[i]>max){
//            max = alphabet[i];
//            ind = i;
//        }
//    }
//    
//    for(int i=0;i<26;i++){
//        if(ind == i){
//            continue;
//        }
//        
//        if(alphabet[ind] == alphabet[i]){
//            flag = 1;
//            break;
//        }
//    }
//    
//    if(flag==1){
//        printf("?");
//    }else {
//        printf("%c",'A'+ind);
//    }
//    
//    return 0;
//}
