#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "my_struct.h"
#include "my_header.h"

void find_by_birth(TEL **tel_list, int *count, int max){
    char tar_mon[3];
    printf("Birth:");
    scanf("%s",tar_mon);
    
    for(int i=0;i<*count;i++){
        if(strlen(tar_mon)==1){
            if(tel_list[i]->birth[strlen(tel_list[i]->birth)-3]==tar_mon[0]){
                printf("%s %s %s\n",tel_list[i]->name,tel_list[i]->tel_no,tel_list[i]->birth);
            }
        }else {
            if(tel_list[i]->birth[strlen(tel_list[i]->birth)-4]==tar_mon[0]&&tel_list[i]->birth[strlen(tel_list[i]->birth)-3]==tar_mon[1]){
                printf("%s %s %s\n",tel_list[i]->name,tel_list[i]->tel_no,tel_list[i]->birth);
            }
        }
    }
}
