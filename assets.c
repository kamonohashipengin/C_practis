//���Y�^�p�̃V�~�����[�V�����v�Z������֐�assets�̃v���O�����ł��B
//�ȉ�����͂���ƌ��ʂ�������܂��B�i1.�����������z�A2.�����̓����z�A3.�����i�N���j�A4.�^�p�N���j


#include<stdio.h>
double assets(int,int,double,int);


int main(void){

    int start;
    int monthry;
    double benefit;
    int year;

    printf("1.���������z����͂��ĉ�����\n");
    scanf("%d",&start);

    printf("2.�����̓����z����͂��ĉ�����\n");
    scanf("%d",&monthry);

    printf("3.�����i�N���j����͂��ĉ�����(�����_��)\n");
    scanf("%lf",&benefit);

    printf("4.�^�p�N������͂��ĉ�����\n");
    scanf("%d",&year);

    
    printf("%d�N��Ɏ��Y��%.2f�~�ƂȂ錩���݂ł��B\n",year,assets(start,monthry,benefit,year));


    return 0;

}

//�V�~�����[�V�����v�Z������֐�assets
double assets(int start, int monthry, double benefit, int year){

    double result = start;
    double benefit2 = 1+(benefit*0.01);

    for(int i=0; i<year; i++){
        result += (monthry*12);
        result *= benefit2;
    }

    return result;

    }

