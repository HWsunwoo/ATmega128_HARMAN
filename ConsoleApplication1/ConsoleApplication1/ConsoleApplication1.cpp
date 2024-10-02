#include <stdio.h>
#include <string.h>
#include <math.h>
/*
// 9번
int main()
{
    int num, i, j;

    while (1)
    {
        printf("숫자(홀수)를 입력하시오 ");
        scanf("%d", &num);

        if ((num % 2) == 0)
        {
            printf("입력한 숫자가 짝수입니다.\n\n");
        }
        else if ((num % 2) != 0)
        {
            for (i = 0; i < num; i++)
            {
                if ((i % 2) == 0)
                {
                    for (j = 0; j <= i; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
        }
        else
        {
            return 0;
        }
   }
}


// 9-A번
int main()
{
    char num;
    char i, j;

    while (1)
    {
        printf("문자를 입력하시오 ");
        scanf("%c", &num);

        for (i = 'A'; i <= num; i++)
        {
            for (j = i; j <= num; j++)
            {
                printf("%c",i);
            }
            printf("\n");
        }
    }
 }
 */

/*
// 6번
int main()
{
    char num;
    char i, j;

    while (1)
    {
        printf("알파벳 문자를 입력하시오 ");
        scanf("%c", &num);

        for (i = num; 'a' <= i; i--)
        {
            for (j = 'a'; j <= i; j++)
            {
                printf("%c", j);
            }
            printf("\n");
        }
    }
}
*/

/*
// D번 메뉴 시스템
int main()
{
    int dan, dannum; // 구구단 변수
    int numc; // 피라미드 변수
    int num, i, j;

    while (1)
    {
        printf("\n\n------------------------------------------------------------------\n\n");
        printf("                            메뉴 시스템                           \n\n");
        printf("------------------------------------------------------------------\n\n\n");
        printf("#1 '*' 기호로 피라미드 출력하기\n");
        printf("#2 구구단 표 만들기\n");
        printf("#3 알파벳 순위 출력 프로그램\n");
        printf("프로그램 끝내기 : 0 \n\n");
        printf("선택 -> ");
        scanf("%d",&num);
        printf("\n\n\n");
        switch (num)
        {
            case 0:
                printf("프로그램을 종료합니다.");
                return 0;
            case 1:
                printf("1번 프로그램을 선택하셨습니다.\n\n");
                printf("'*' 기호로 피라미드 출력하기\n");
                printf("숫자(홀수)를 입력하시오 ");
                scanf("%d", &numc);

                if ((numc % 2) == 0)
                {
                    printf("입력한 숫자가 짝수입니다.\n\n");
                }
                else if ((numc % 2) != 0)
                {
                    for (i = 0; i < numc; i++)
                    {
                        if ((i % 2) == 0)
                        {
                            for (j = 0; j <= i; j++)
                            {
                                printf("*");
                            }
                            printf("\n");
                        }
                    }
                }
                break;
                    
            case 2:
                printf("2번 프로그램을 선택하셨습니다.\n");
                printf("구구단 표 만들기\n");

                printf("\n단을 입력하시오 : ");
                scanf("%d", &dan);
                printf("%d단을 출력합니다.\n\n", dan);

                for (dannum = 1; dannum < 10; dannum++)
                {
                    printf("%d * %d = %d\n", dan, dannum, dan * dannum);
                }
                break;

            case 3:
                printf("3번 프로그램을 선택하셨습니다.\n");
                printf("알파벳 순위 출력 프로그램\n");
                while (1)
                {
                    char a, b; // 알파벳 변수
                    char numalpa; // 알파벳 변수

                    printf("알파벳 문자를 입력하시오(종료 = Q): ");
                    scanf("%c", &numalpa);

                    for (a = numalpa; 'a' <= a; a--)
                    {
                        for (b = 'a'; b <= a; b++)
                        {
                            printf("%c", b);
                        }
                        printf("\n");
                    }
                    if (numalpa == 'Q')
                    {
                        break;
                    }
                }
        }
    }
}
*/

/*
// 7번
int main()
{
    int a, b, temp;
    printf("두 수를 입력하시오: ");
    scanf("%d %d", &a, &b);
    
    printf("\nswap 전 [0001] %d --- [0002] %d\n",a ,b);
    temp = a;
    a = b;
    b = temp;
    printf("swap 후 [0001] %d --- [0002] %d", a, b);
}
*/

/*
//1-1번
int main()
{
    char arr[20] = "";
    scanf("%s",&arr);

    int n = sizeof(arr);
    for (int i = 0; i < n; i++)
    {
        printf("%c",arr[i]);
    }

    printf(" ========> ");

    // if) with null 값 출력
    //printf("\n\nnull 값 출력\n");
    for (int i = 0; i < 2*n; i++)
    {
        printf(" %c", arr[i]);
    }
}
*/

/*
//1-2번 
int main()
{
    char arr[20];
    scanf("%s", &arr);


    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
    }
    printf("%s", arr);
}
*/

//8번 sort
int main()
{
    int i, j, temp;
    char arr[20];
    scanf("%s", &arr);

    int n = strlen(arr);
    printf("입력순서 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n정렬 후 : ");
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            else break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }
}
