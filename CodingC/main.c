//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#include "my_struct.h"
//#include "my_header.h"
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
//        draw();
//        scanf("%d",&n);
//        
//        switch(n){
//            case 1:
//                insert(tel_list,&count, max_num, temp);
//                temp = NULL;
//                break;
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
