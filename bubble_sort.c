//バブルソートのプログラム
#include <stdio.h>

int main(void)
{
    int box [10] = {12,34,8,45,22,3,29,55,1,5};
    int a,t;

  //バブルソート
  for (int i=0; i<10; ++i) {
    for (a=i+1; a<10; ++a) {//iは0（添え字）aは1でスタート。次はi1、a2最後はi8、a9に。
      if (box[i] > box[a]) {//添え字iとaを比較し、iの方が数値が大きい場合
        t =  box[i];        //その数値をtとして保存
        box[i] = box[a];    //添え字iにaの数値を代入
        box[a] = t;         //添え字aを変数tに代入
                            //if (box[i] > box[a])の場合、iとaのデータが入れ替わる！
      }
    }
  }

  /* 昇順ソートした数値を出力 */
  printf("昇順ソートした数値\n");
  for (int i=0; i<9; ++i){
    printf("%d\n", box[i]);

    }

    return 0;

}