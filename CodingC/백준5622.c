//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char phone[16];
//    int time = 0;
//    
//    scanf("%s",phone);
//    if(strlen(phone)<2||strlen(phone)>15){  //예외처리
//        return -1;
//    }
//    
//    for(int i=0;i<strlen(phone);i++){   //예외처리
//        if(!(phone[i]>='A'&&phone[i]<='Z')){
//            return -1;
//        }
//    }
//    
//    for(int i=0;i<strlen(phone);i++){
//        if(phone[i] == 'A'||phone[i] == 'B'||phone[i] == 'C') {
//            time += 3;
//        }else if(phone[i] == 'D'||phone[i] == 'E'||phone[i] == 'F') {
//            time += 4;
//        }else if(phone[i] == 'G'||phone[i] == 'H'||phone[i] == 'I') {
//            time += 5;
//        }else if(phone[i] == 'J'||phone[i] == 'K'||phone[i] == 'L') {
//            time += 6;
//        }else if(phone[i] == 'M'||phone[i] == 'N'||phone[i] == 'O') {
//            time += 7;
//        }else if(phone[i] == 'P'||phone[i] == 'Q'||phone[i] == 'R'||phone[i] == 'S') {
//            time += 8;
//        }else if(phone[i] == 'T'||phone[i] == 'U'||phone[i] == 'V') {
//            time += 9;
//        }else if(phone[i] == 'W'||phone[i] == 'X'||phone[i] == 'Y'||phone[i] == 'Z') {
//            time += 10;
//        }
//    }
//    
//    printf("%d",time);
//    return 0;
//}
