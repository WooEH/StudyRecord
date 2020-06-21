#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "my_struct.h"
#include "my_header.h"

void exit_program(TEL **tel_list,int *count, int max){
    FILE *fp=NULL;
    /*
     현재 구조체들에 저장된 정보들을 모두 파일에 옮겨준다.
     그리고 할당된 메모리들을 모두 해제해준다.
     */
    
    fp=fopen("PHONE_BOOK.txt","w");
    if(fp==NULL){
        printf("Can't open");
        return ;
    }
    
    for(int i=0;i<*count;i++){
        fprintf(fp,"%s %s %s\n",tel_list[i]->name, tel_list[i]->birth,tel_list[i]->tel_no);
    }
    
    fclose(fp);
    
    for(int i=0;i<*count;i++){
        free(tel_list[i]->name);
        free(tel_list[i]->birth);
        free(tel_list[i]->tel_no);
        free(tel_list[i]);
    }
    free(tel_list);
}
