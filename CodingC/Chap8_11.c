//#include <stdio.h>
//
//int ans[3];
//int count_strike(int a, int b, int c);
//int count_ball(int a, int b, int c);
//
//int main() {
//    int a, b, c;
//    
//    for(int i=0;i<3;i++){
//        scanf("%d",ans+i);
//    }
//    
//    while(1) {
//        scanf("%d %d %d",&a, &b, &c);
//        
//        printf("%dS%dB\n",count_strike(a,b,c),count_ball(a,b,c));
//        if(count_strike(a,b,c)==3){
//            break;
//        }
//    }
//    return 0;
//}
//
//int count_strike(int a, int b, int c){
//    int cnt=0;
//    
//    if(a==ans[0]) {
//        cnt++;
//    }
//    
//    if(b==ans[1]) {
//        cnt++;
//    }
//    
//    if(c==ans[2]) {
//        cnt++;
//    }
//    
//    return cnt;
//}
//
//int count_ball(int a, int b, int c) {
//    int cnt =0;
//    
//    if(a==ans[1] || a == ans[2]){
//        cnt++;
//    }
//    
//    if(b==ans[0] || b == ans[2]){
//        cnt++;
//    }
//    
//    if(c==ans[0] || c == ans[1]){
//        cnt++;
//    }
//    return cnt;
//}
