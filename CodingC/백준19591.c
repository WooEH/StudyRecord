//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int N, M;
//    long long *L=NULL, *R=NULL, *P=NULL, *X=NULL;
//    int ans=0;
//    
//    
//    //시민의 수 N, 상점의 수 M 입력
//    scanf("%d %d",&N,&M);
//    
//    //입력조건 예외처리
//    if(N<1 || N>500000){
//        printf("Wrong input\n");
//        return -1;
//    }
//    
//    if(M<1 || M>500000) {
//        printf("Wrong input\n");
//        return -1;
//    }
//    
//    //각 시민의 소비할 수 있는 돈 범위 저장 배열 동적할당.
//    L = (long long *)malloc(sizeof(long long)*N);
//    if(L==NULL) {
//        return -1;
//    }
//    
//    R = (long long *)malloc(sizeof(long long)*N);
//    if(R==NULL){
//        return -1;
//    }
//    
//    //각 상점이 판매할 수 있는 마스크 가격과 개수 저장 배열 동적할당.
//    P = (long long *)malloc(sizeof(long long)*M);
//    if(P ==NULL ){
//        return -1;
//    }
//    
//    X = (long long *)malloc(sizeof(long long)*M);
//    if(X==NULL){
//        return -1;
//    }
//    
//    
//    //각 시민이 마스크에 소비할 수 있는 돈의 범위 입력받기.
//    for(int i=0;i<N;i++){
//        scanf("%lld %lld",L+i,R+i);
//    }
//    
//    //각 상점이 판매하고 있는 마스크 가격과 개수 입력받기
//    for(int i=0;i<M;i++){
//        scanf("%lld %lld",P+i,X+i);
//    }
//    
//    
//    //답 ans 구하는 과정.
//    for(int i=0;i<N;i++){   //각 시민에 대해서
//        for(int j=0;j<M;j++){   //각 상점에
//            
//            if(X[j]==0){
//                continue;
//            }
//            
//            if(L[i]<=P[j] && R[i] >= P[j]){
//                ans++;
//                X[j]--;
//                break;
//            }
//        }
//    }
//    
//    
//    printf("%d",ans);
//    
//    free(L);
//    free(R);
//    free(P);
//    free(X);
//    return 0;
//}
