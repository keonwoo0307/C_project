#include<stdio.h>
int main()
{
    int radius;
    printf("반지름을 입력하세요 :");
    scanf("%d",&radius);
    printf("원의 넓이는 :%g\n",radius*radius*3.14);
    printf("원의 둘레는 :%g\n",radius*2*3.14);
    return 0;

}

