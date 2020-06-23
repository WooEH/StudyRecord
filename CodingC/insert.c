#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "my_struct.h"
#include "my_header.h"

void insert(TEL **tel_list, int *count, int max, char *temp){
    char tmp[101];
    int ind=0, flag=0, s_cnt=0;
    int k=0;
    
    (*count)++;
    if(temp==NULL){
        if(*count>max){
            printf("OVERFLOW\n");
            (*count)--;
            return ;
        }
        tel_list[*count-1]=(TEL *)malloc(sizeof(TEL));
        if(tel_list[*count-1]==NULL){
            printf("NO ENOUGH MEMORY");
            return ;
        }
        printf("Name:");
        scanf("%s",tmp);
        
        for(int i=0;i<(*count)-1;i++){
            if(strcmp(tel_list[i]->name,tmp)>0){
                ind = i;
                flag =1;
                break;
            }
        }
        
        if(flag==1){
            for(int i=(*count)-2;i>=ind;i--){
                tel_list[i+1]->name = tel_list[i]->name;
                tel_list[i+1]->tel_no = tel_list[i]->tel_no;
                tel_list[i+1]->birth = tel_list[i]->birth;
            }
        }else {
            ind = *count-1;
        }
        tel_list[ind]->name = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
        if(tel_list[ind]->name==NULL){
            printf("NO ENOUGH MEMORY");
            return ;
        }
        strcpy(tel_list[ind]->name,tmp);
        
        printf("Phone_number:");
        scanf("%s",tmp);
        tel_list[ind]->tel_no = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
        if(tel_list[ind]->tel_no==NULL){
            printf("NO ENOUGH MEMORY");
            return ;
        }
        strcpy(tel_list[ind]->tel_no,tmp);
        
        printf("Birth:");
        scanf("%s",tmp);
        tel_list[ind]->birth = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
        if(tel_list[ind]->birth==NULL){
            printf("NO ENOUGH MEMORY");
            return ;
        }
        strcpy(tel_list[ind]->birth,tmp);
        printf("<<%d>>\n",*count);
    }else {
        tmp[0]='\0';
        
        tel_list[*count-1]=(TEL *)malloc(sizeof(TEL));
        if(tel_list[*count-1]==NULL){
            printf("NO ENOUGH MEMORY");
            return ;
        }
        
        for(int i=0;i<=strlen(temp);i++){
            if(temp[i]==' '||temp[i]=='\0'){
                tmp[k]='\0';
                
                if(s_cnt==0){
                    for(int i=0;i<(*count)-1;i++){
                        if(strcmp(tel_list[i]->name,tmp)>0){
                            ind = i;
                            flag =1;
                            break;
                        }
                    }
                    
                    if(flag==1){
                        for(int i=(*count)-2;i>=ind;i--){
                            tel_list[i+1]->name = tel_list[i]->name;
                            tel_list[i+1]->tel_no = tel_list[i]->tel_no;
                            tel_list[i+1]->birth = tel_list[i]->birth;
                        }
                    }else {
                        ind = *count-1;
                    }
                    tel_list[ind]->name = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
                    if(tel_list[ind]->name==NULL){
                        printf("NO ENOUGH MEMORY");
                        return ;
                    }
                    strcpy(tel_list[ind]->name,tmp);
                }else if(s_cnt==1){
                    tel_list[ind]->tel_no = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
                    if(tel_list[ind]->tel_no==NULL){
                        printf("NO ENOUGH MEMORY");
                        return ;
                    }
                    strcpy(tel_list[ind]->tel_no,tmp);
                }else if(s_cnt==2){
                    tel_list[ind]->birth = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
                    if(tel_list[ind]->birth==NULL){
                        printf("NO ENOUGH MEMORY");
                        return ;
                    }
                    strcpy(tel_list[ind]->birth,tmp);
                }
                
                s_cnt++;
                k=0;
            }else if(temp[i]!=' '&&temp[i]!='\0'){
                tmp[k] = temp[i];
                k++;
            }
        }
    }
}
