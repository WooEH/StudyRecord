//#include <stdio.h>
//
//int main(){
//    FILE *fp1 = NULL, *fp2=NULL;
//    char ch;
//    
//    fp1 = fopen("test1.txt","r");
//    if(fp1==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    fp2 = fopen("test2.txt","w");
//    if(fp2==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    while(!feof(fp1)){
//        ch = fgetc(fp1);
//        if(ch<='z'&&ch>='a'){
//            ch += 'A' - 'a';
//            fprintf(fp2,"%c",ch);
//        }else if(ch<='Z' && ch >= 'A'){
//            ch += 'a' - 'A';
//            fprintf(fp2,"%c",ch);
//        }
//    }
//    
//    fclose(fp1);
//    fclose(fp2);
//    return 0;
//}
