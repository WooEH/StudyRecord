#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int ans = 0;
    
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++){ //예외처리
        if(!((str[i]>='a'&&str[i]<='z')||str[i]=='-'||str[i]=='=')) {
            return -1;
        }
    }
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='c') {
            
        }else if(str[i]=='d'){
            
        }else if(str[i]=='d'){
            
        }else if(str[i]=='l'){
            
        }else if(str[i]=='n'){
            
        }else if(str[i]=='s'){
            
        }else if(str[i]=='z'){
            
        }else {
            ans += 1;
        }
    }
    printf("%d",ans);
    return 0;
}
