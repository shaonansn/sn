#include <stdio.h>
char arr[2000];
int index = 0;
int main()
{

    printf("minganzifuguanlixitong");

    while (1)
    {
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuminganzifu\n");
        printf("3---chakansuoyouminganzifu\n");
        printf("4---tihuanneirongzhongdeminganzifu\n");
        printf("5---tuichu\n");

        printf("qingxuanzexiangyinggongneng\n");

        int code;
        scanf("%d",&code);

        if (code == 1)
        {
            printf("qingshuruyaotianjiademinganzifu\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            arr[index] = m;
            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichuxitong\n");
            break;
        }
    }

    return 0;
}