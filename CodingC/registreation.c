//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "my_struct.h"
//#include "my_header.h"
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
//    
//    fclose(fp);
//    
//    return ;
//}
