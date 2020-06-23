//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct tel{
//    char *name;
//    char *tel_no;
//    char *birth;
//}TEL;
//
//void insert(TEL **tel_list, int *count, int max, char *temp);
//void print_all(TEL **tel_list, int *count, int max);
//void delete_tel(TEL **tel_list, int *count, int max);
//void find_by_birth(TEL **tel_list, int *count, int max);
//void reg_from_file(TEL **tel_list, int *count, int max);
//void exit_program(TEL **tel_list,int *count, int max);
//
//int main(){
//    TEL **tel_list=NULL;
//    int count=0, n, max_num;
//    char *temp=NULL;
//
//    printf("Max_num:");
//    scanf("%d",&max_num);
//
//    tel_list = (TEL **)malloc(sizeof(TEL *)*max_num);
//    if(tel_list==NULL){
//        printf("NO ENOUGH MEMORY");
//        return -1;
//    }
//
//    while(1){
//        printf("*****Menu*****\n");
//        printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.RegFromFile><6.Exit>\n");
//        printf("Enter_the_menu_number:");
//        scanf("%d",&n);
//
//        switch(n){
//            case 1: insert(tel_list,&count, max_num, temp); break;
//            case 2: print_all(tel_list,&count, max_num); break;
//            case 3: delete_tel(tel_list,&count, max_num); break;
//            case 4: find_by_birth(tel_list,&count, max_num); break;
//            case 5: reg_from_file(tel_list,&count, max_num); break;
//            case 6:
//                exit_program(tel_list,&count, max_num);
//                return 0;
//        }
//    }
//}
//
//void insert(TEL **tel_list, int *count, int max, char *temp){
//    char tmp[101];
//    int ind=0, flag=0, s_cnt=0;
//    int k=0;
//    
//    (*count)++;
//    if(temp==NULL){
//        if(*count>max){
//            printf("OVERFLOW\n");
//            (*count)--;
//            return ;
//        }
//        tel_list[*count-1]=(TEL *)malloc(sizeof(TEL));
//        if(tel_list[*count-1]==NULL){
//            printf("NO ENOUGH MEMORY");
//            return ;
//        }
//        printf("Name:");
//        scanf("%s",tmp);
//        
//        for(int i=0;i<(*count)-1;i++){
//            if(strcmp(tel_list[i]->name,tmp)>0){
//                ind = i;
//                flag =1;
//                break;
//            }
//        }
//        
//        if(flag==1){
//            for(int i=(*count)-2;i>=ind;i--){
//                tel_list[i+1]->name = tel_list[i]->name;
//                tel_list[i+1]->tel_no = tel_list[i]->tel_no;
//                tel_list[i+1]->birth = tel_list[i]->birth;
//            }
//        }else {
//            ind = *count-1;
//        }
//        tel_list[ind]->name = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
//        if(tel_list[ind]->name==NULL){
//            printf("NO ENOUGH MEMORY");
//            return ;
//        }
//        strcpy(tel_list[ind]->name,tmp);
//        
//        printf("Phone_number:");
//        scanf("%s",tmp);
//        tel_list[ind]->tel_no = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
//        if(tel_list[ind]->tel_no==NULL){
//            printf("NO ENOUGH MEMORY");
//            return ;
//        }
//        strcpy(tel_list[ind]->tel_no,tmp);
//        
//        printf("Birth:");
//        scanf("%s",tmp);
//        tel_list[ind]->birth = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
//        if(tel_list[ind]->birth==NULL){
//            printf("NO ENOUGH MEMORY");
//            return ;
//        }
//        strcpy(tel_list[ind]->birth,tmp);
//        printf("<<%d>>\n",*count);
//    }else {
//        tel_list[*count-1]=(TEL *)malloc(sizeof(TEL));
//        if(tel_list[*count-1]==NULL){
//            printf("NO ENOUGH MEMORY");
//            return ;
//        }
//        
//        for(int i=0;i<=strlen(temp);i++){
//            if(temp[i]==' '||temp[i]=='\0'){
//                tmp[k]='\0';
//                
//                if(s_cnt==0){
//                    for(int j=0;j<(*count)-1;j++){
//                        if(strcmp(tel_list[j]->name,tmp)>0){
//                            ind = j;
//                            flag =1;
//                            break;
//                        }
//                    }
//                    
//                    if(flag==1){
//                        for(int j=(*count)-2;j>=ind;j--){
//                            tel_list[j+1]->name = tel_list[j]->name;
//                            tel_list[j+1]->tel_no = tel_list[j]->tel_no;
//                            tel_list[j+1]->birth = tel_list[j]->birth;
//                        }
//                    }else {
//                        ind = *count-1;
//                    }
//                    tel_list[ind]->name = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
//                    if(tel_list[ind]->name==NULL){
//                        printf("NO ENOUGH MEMORY");
//                        return ;
//                    }
//                    strcpy(tel_list[ind]->name,tmp);
//                }else if(s_cnt==1){
//                    tel_list[ind]->tel_no = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
//                    if(tel_list[ind]->tel_no==NULL){
//                        printf("NO ENOUGH MEMORY");
//                        return ;
//                    }
//                    strcpy(tel_list[ind]->tel_no,tmp);
//                }else if(s_cnt==2){
//                    tel_list[ind]->birth = (char *)malloc(sizeof(char)*(strlen(tmp)+1));
//                    if(tel_list[ind]->birth==NULL){
//                        printf("NO ENOUGH MEMORY");
//                        return ;
//                    }
//                    strcpy(tel_list[ind]->birth,tmp);
//                }
//                
//                s_cnt++;
//                k=0;
//            }else if(temp[i]!=' '&&temp[i]!='\0'){
//                tmp[k] = temp[i];
//                k++;
//            }
//        }
//    }
//}
//
//
//void print_all(TEL **tel_list, int *count, int max){
//    for(int i=0;i<*count;i++){
//        printf("%s %s %s\n",tel_list[i]->name,tel_list[i]->tel_no,tel_list[i]->birth);
//    }
//}
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
//
//void find_by_birth(TEL **tel_list, int *count, int max){
//    char tar_mon[3];
//    printf("Birth:");
//    scanf("%s",tar_mon);
//
//    for(int i=0;i<*count;i++){
//        if(strlen(tar_mon)==1){
//            if(tel_list[i]->birth[strlen(tel_list[i]->birth)-3]==tar_mon[0]){
//                printf("%s %s %s\n",tel_list[i]->name,tel_list[i]->tel_no,tel_list[i]->birth);
//            }
//        }else {
//            if(tel_list[i]->birth[strlen(tel_list[i]->birth)-4]==tar_mon[0]&&tel_list[i]->birth[strlen(tel_list[i]->birth)-3]==tar_mon[1]){
//                printf("%s %s %s\n",tel_list[i]->name,tel_list[i]->tel_no,tel_list[i]->birth);
//            }
//        }
//    }
//}
//
//void reg_from_file(TEL **tel_list, int *count, int max){
//    FILE *fp = NULL;
//    char tmp[101];
//    int cnt=*count;
//    
//    fp = fopen("PHONE_BOOK.txt","r");
//    if(fp ==NULL ){
//        printf("Can't open");
//        return ;
//    }
//    
//    while(!feof(fp)){
//        if(NULL!=fgets(tmp, sizeof(tmp), fp)){
//            tmp[strlen(tmp)-1] = '\0';
//            cnt++;
//            
//            if(cnt <= max){
//                insert(tel_list, count, max, tmp);
//            }else {
//                printf("OVERFLOW\n");
//                return ;
//            }
//        }
//    }
//    
//    fclose(fp);
//    return ;
//}
//
//
//void exit_program(TEL **tel_list,int *count, int max){
//    FILE *fp=NULL;
//    
//    fp=fopen("PHONE_BOOK.txt","w");
//    if(fp==NULL){
//        printf("Can't open");
//        return ;
//    }
//
//    for(int i=0;i<*count;i++){
//        fprintf(fp,"%s %s %s\n",tel_list[i]->name, tel_list[i]->tel_no,tel_list[i]->birth);
//    }
//
//    fclose(fp);
//
//    for(int i=0;i<*count;i++){
//        free(tel_list[i]->name);
//        free(tel_list[i]->birth);
//        free(tel_list[i]->tel_no);
//        free(tel_list[i]);
//    }
//    free(tel_list);
//}
