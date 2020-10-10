//#include <stdio.h>
//#define TRUE 1
//
//int main() {
//    int money_in = 0, change = 0, price = 0, order = 0, temp=0;
//    char menu[5][10] = { "Cola", "Sprite", "Demisoda", "Vitamin" , "Water"};
//    
//    printf("1. Cola\n");
//    printf("2. Sprite\n");
//    printf("3. Demisoda\n");
//    printf("4. Vitamin\n");
//    printf("5. Water\n");
//    while(TRUE) {
//        scanf("%d",&order);
//        
//        if(order == 1) {
//            price = 1000;
//            break;
//        }else if(order == 2){
//            price = 1100;
//            break;
//        }else if(order == 3){
//            price = 900;
//            break;
//        }else if(order == 4){
//            price = 1300;
//            break;
//        }else if(order == 5) {
//            price = 800;
//            break;
//        }else {
//            printf("잘못된 입력입니다. 다시 입력하세요.\n");
//        }
//    }
//    
//    printf("%d 원입니다.\n",price);
//    while(TRUE){
//        printf("남은 가격은 %d 원입니다.\n",price - money_in);
//        printf("돈 입력: ");
//        scanf("%d",&temp);
//        
//        money_in += temp;
//        
//        if(money_in >= price){
//            change = money_in - price;
//            break;
//        }
//    }
//    
//    printf("%s 상품을 받아주세요.\n거스름돈은 %d 원입니다.\n",menu[order-1],change);
//    return 0;
//}
