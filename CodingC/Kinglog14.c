//#include <stdio.h>
//
//typedef struct Student {
//    int score;
//    int studentID;
//} ST;
//
//int main(){
//    struct Student st1;
//    ST st[3];
//    
//    st1.score = 100;
//    st1.studentID = 1234;
//    
//    for(int i=0;i<3;i++){
//        st[i].score = i + 80;
//        st[i].studentID = i + 1000;
//    }
//    
//    printf("%d %d\n",st1.score, st1.studentID);
//    
//    for(int i=0;i<3;i++){
//        printf("%d %d\n",(st+i)->score,(st+i)->studentID);
//    }
//    return 0;
//}
