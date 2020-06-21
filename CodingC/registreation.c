#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "my_struct.h"
#include "my_header.h"

void reg_from_file(TEL **tel_list, int *count, int max){
    FILE *fp = NULL;
    char tmp[101];
    int cnt=*count;
    
    fp = fopen("PHONE_BOOK.txt","r");
    if(fp ==NULL ){
        printf("Can't open");
        return ;
    }
    
    while(!feof(fp)){
        /* 한줄씩 가져오고 그 줄마다 띄어쓰기 단위로 정보가 가지는 의미가 바뀌기 때문에
         처음부터 첫 띄어쓰기 = 이름
         이름을 먼저 정렬하는 과정을 insert함수를 사용할지 아니면 여기다가 따로 구현할지 생각
         이름이 배정이 끝나면 나머지 정보를 띄어쓰기 단위로 나눠서 해당 구조체로 넘겨준다.
         */
        
        fgets(tmp, 100, fp);
        cnt++;
        
        if(cnt <= max){
            insert(tel_list, count, max, tmp);
        }else if(cnt>max){
            printf("OVERFLOW\n");
            return ;
        }
        
    }
    
    fclose(fp);
}
