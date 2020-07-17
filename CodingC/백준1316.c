//#include <stdio.h>
//#include <string.h>
//
//int main(){
//    char str[101];
//    int ans = 0, N, flag1 = 0, flag2 = 0;
//    
//    scanf("%d",&N);
//    if(!(N>=1&&N<=100)){
//        return -1;
//    }
//    
//    for(int i=0;i<N;i++){
//        scanf("%s",str);
//        
//        for(int j=0;j<strlen(str);j++){
//            if(!(str[j]<='z'&&(str[j]>='a'))) {
//                return -1;
//            }
//        }
//        
//        flag2 = 0;
//        for(int j=0;j<strlen(str)-1;j++){
//            flag1 = 0;
//            
//            for(int k=j+1;k<strlen(str);k++){
//                if(str[j]!=str[k]){
//                    flag1 = 1;
//                }
//                
//                if(flag1==1&&str[j]==str[k]){
//                    flag2 =1;
//                    break;
//                }
//            }
//        }
//        if(flag2==0){
//            ans += 1;
//        }
//        // 같은 스펠링이 모아서 나오는 문자열 개수 출력하는 문제.
//    }
//    
//    printf("%d",ans);
//    return 0;
//}
