//#include <stdio.h>
//
//
//int main() {
//    FILE *fp = NULL;
//    int N, cnt=0, sum=0;
//    double avg;
//    
//    fp = fopen("data.txt","w");
//    if(fp==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    scanf("%d",&N);
//    while(N!=EOF){
//        fprintf(fp,"%d\n",N);
//        scanf("%d",&N);
//    }
//    fclose(fp);
//    
//    fp = fopen("data.txt","r");
//    if(fp==NULL){
//        printf("Can't open");
//        return -1;
//    }
//    
//    while(!feof(fp)){
//        cnt++;
//        fscanf(fp,"%d\n",&N);
//            
//        sum += N;
//    }
//    avg = (double)(sum)/cnt;
//    fclose(fp);
//    
//    printf("%d\n%d\n%.2lf",cnt,sum,avg);
//    return 0;
//}
