//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "my_struct.h"
//#include "my_header.h"
//
//void delete_tel(TEL **tel_list, int *count, int max){
//    char tmp[101];
//    int flag=0;
//    
//    if(*count==0){
//        printf("NO MEMBER\n");
//        return ;
//    }
//    
//    printf("Name:");
//    scanf("%s",tmp);
//    
//    for(int i=0;i<*count;i++){
//        if(strcmp(tel_list[i]->name,tmp)==0){
//            flag++;
//            for(int j=i;j<*count-1;j++){
//                tel_list[j]->name = (char *)realloc(tel_list[j]->name,sizeof(char)*(strlen(tel_list[j+1]->name)+1));
//                if(tel_list[j]->name==NULL){
//                    printf("NO ENOUGH MEMORY");
//                    return ;
//                }
//                strcpy(tel_list[j]->name,tel_list[j+1]->name);
//
//                tel_list[j]->tel_no = (char *)realloc(tel_list[j]->tel_no,sizeof(char)*(strlen(tel_list[j+1]->tel_no)+1));
//                if(tel_list[j]->tel_no==NULL){
//                    printf("NO ENOUGH MEMORY");
//                    return ;
//                }
//                strcpy(tel_list[j]->tel_no,tel_list[j+1]->tel_no);
//                
//                tel_list[j]->birth = (char *)realloc(tel_list[j]->birth,sizeof(char)*(strlen(tel_list[j+1]->birth)+1));
//                if(tel_list[j]->birth==NULL){
//                    printf("NO ENOUGH MEMORY");
//                    return ;
//                }
//                strcpy(tel_list[j]->birth,tel_list[j+1]->birth);
//            }
//            (*count)--;
//        }
//    }
//
//    if(flag==1){
//        free(tel_list[*count]->name);
//        free(tel_list[*count]->tel_no);
//        free(tel_list[*count]->birth);
//        free(tel_list[*count]);
//    }
//}
