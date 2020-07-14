//#include <stdio.h>
//
//int main(){
//    int num1, num2;
//    int rev1=0, rev2=0;
//    
//    scanf("%d %d",&num1, &num2);
//    
//    for(int i=num1;i>0;i/=10){
//        rev1 += i % 10;
//        rev1 *= 10;
//    }
//    for(int i=num2;i>0;i/=10){
//        rev2 += i % 10;
//        rev2 *= 10;
//    }
//    
//    rev1 /= 10;
//    rev2 /= 10;
//    
//    if(rev1 >= rev2) {
//        printf("%d",rev1);
//    }else {
//        printf("%d",rev2);
//    }
//    return 0;
//}
