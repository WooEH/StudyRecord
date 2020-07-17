//#include <stdio.h>
//
//void Result()
//{
//    int T;
//    scanf("%d", &T);
//    for(int i=0;i<T;++i)
//    {
//        long long x, y, length;
//        scanf("%lld %lld", &x, &y);
//        length = y-x;
//
//        if(length < 1){
//            return -1;
//        }
//
//        long long pos=1;
//        long long turn=1;
//        long long pos_pow=0;
//
//        while(pos<length)
//        {
//            pos_pow++;
//
//            turn++;    pos+=pos_pow;
//            if(pos>=length)break;
//
//            turn++; pos+=pos_pow;
//            if(pos>=length)break;
//        }
//        if(pos>length)turn--;
//        printf("%lld\n", turn);
//    }
//}
//
//int main()
//{
//    Result();
//    return 0;
//}
