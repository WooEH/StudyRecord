//#include <stdio.h>
//
//int main() {
//    int x[3][3], y[2][2], flag=0;
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            scanf("%d",&x[i][j]);
//        }
//    }
//    
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//            scanf("%d",&y[i][j]);
//        }
//    }
//    
//    for(int i=0;i<3;i++){
//        for(int j=0;j<3;j++){
//            printf(" %d",x[i][j]);
//        }
//        
//        printf("\n");
//    }
//    
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//            printf(" %d",y[i][j]);
//        }
//        
//        printf("\n");
//    }
//    
//    for(int i=0;i<2;i++){
//        for(int j=0;j<2;j++){
//            if(x[i][j]==y[0][0] && x[i][j+1] == y[0][1] && x[i+1][j] == y[1][0] && x[i+1][j+1] == y[1][1]){
//                printf("%d %d\n",i,j);
//                flag = 1;
//            }
//        }
//    }
//    
//    if(flag == 0) {
//        printf("none");
//    }
//    return 0;
//}
