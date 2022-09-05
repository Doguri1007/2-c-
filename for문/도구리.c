#include <stdio.h>
int main()
{
  int input;

  scanf("%d",&input); // 입력 받는다

  printf("===%d단===\n", input);
  for(int i=1;i<=9;i++)// for문 만들기+ 구구단 출력하기
    {
  printf("%d*%d=%d\n", input, i, input*i);//서식지정자를 활용하여 출력한다
      }
  return 0;
}
