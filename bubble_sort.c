//�o�u���\�[�g�̃v���O����
#include <stdio.h>

int main(void)
{
    int box [10] = {12,34,8,45,22,3,29,55,1,5};
    int a,t;

  //�o�u���\�[�g
  for (int i=0; i<10; ++i) {
    for (a=i+1; a<10; ++a) {//i��0�i�Y�����ja��1�ŃX�^�[�g�B����i1�Aa2�Ō��i8�Aa9�ɁB
      if (box[i] > box[a]) {//�Y����i��a���r���Ai�̕������l���傫���ꍇ
        t =  box[i];        //���̐��l��t�Ƃ��ĕۑ�
        box[i] = box[a];    //�Y����i��a�̐��l����
        box[a] = t;         //�Y����a��ϐ�t�ɑ��
                            //if (box[i] > box[a])�̏ꍇ�Ai��a�̃f�[�^������ւ��I
      }
    }
  }

  /* �����\�[�g�������l���o�� */
  printf("�����\�[�g�������l\n");
  for (int i=0; i<9; ++i){
    printf("%d\n", box[i]);

    }

    return 0;

}