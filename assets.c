//資産運用のシミュレーション計算をする関数assetsのプログラムです。
//以下を入力すると結果が分かります。（1.初期投資金額、2.毎月の投資額、3.利率（年利）、4.運用年数）


#include<stdio.h>
double assets(int,int,double,int);


int main(void){

    int start;
    int monthry;
    double benefit;
    int year;

    printf("1.初期投資額を入力して下さい\n");
    scanf("%d",&start);

    printf("2.毎月の投資額を入力して下さい\n");
    scanf("%d",&monthry);

    printf("3.利率（年利）を入力して下さい(小数点で)\n");
    scanf("%lf",&benefit);

    printf("4.運用年数を入力して下さい\n");
    scanf("%d",&year);

    
    printf("%d年後に資産は%.2f円となる見込みです。\n",year,assets(start,monthry,benefit,year));


    return 0;

}

//シミュレーション計算をする関数assets
double assets(int start, int monthry, double benefit, int year){

    double result = start;
    double benefit2 = 1+(benefit*0.01);

    for(int i=0; i<year; i++){
        result += (monthry*12);
        result *= benefit2;
    }

    return result;

    }

