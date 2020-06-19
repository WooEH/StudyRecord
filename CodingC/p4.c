//#include <stdio.h>
//#include <string.h>
//
//int main(){
//    FILE *fp=NULL, *fp1 = NULL;
//    char tmp[21];
//    
//    fp = fopen("file3.txt","w");
//    if(fp==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    fp1 = fopen("file4.txt","w");
//    if(fp1 ==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    for(int i=0;i<2;i++){
//        gets(tmp);
//        
//        for(int j=0;j<strlen(tmp);j++){
//            fputc(tmp[j],fp);
//        }
//        if(i==0) fputc('\n',fp);
//    }
//    
//    fclose(fp);
//    
//    fp = fopen("file3.txt","a");
//    if(fp==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    gets(tmp);
//    for(int i=0;i<strlen(tmp);i++){
//        fputc(tmp[i],fp1);
//    }
//    
//    fclose(fp1);
//    
//    fp1 = fopen("file4.txt","r");
//    if(fp1==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    while(!feof(fp1)){
//        fputc(fgetc(fp1),fp);
//    }
//    
//    fclose(fp);
//    fclose(fp1);
//    return 0;
//}
