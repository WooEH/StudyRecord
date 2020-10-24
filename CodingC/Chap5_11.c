//#include <stdio.h>
//
//int main() {
//    int a1, a2, a3;
//    int g1, g2, g3;
//    int cntS=0, cntB=0;
//    
//    scanf("%d %d %d",&a1,&a2,&a3);
//    scanf("%d %d %d",&g1,&g2,&g3);
//    
//    if(a1 == g1){
//        cntS++;
//    }else {
//        if(a1 == g2){
//            cntB++;
//        }else if(a1 == g3){
//            cntB++;
//        }
//    }
//    
//    if(a2 == g2){
//        cntS++;
//    }else {
//        if(g2 == a1){
//            cntB++;
//        }else if(g2 == a3){
//            cntB++;
//        }
//    }
//    
//    if(a3 == g3){
//        cntS++;
//    }else {
//        if(g3 == a1){
//            cntB++;
//        }else if(g3 == a2){
//            cntB++;
//        }
//    }
//    
//    printf("%dS%dB",cntS,cntB);
//    return 0;
//}
