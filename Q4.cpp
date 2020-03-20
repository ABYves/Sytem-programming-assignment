#include<stdio.h>
main()
{
    int NUM[10],I,LARGE,SMALL;
    printf("ENTER TEN NUMBERS TO COMPARE\n");
    for(I=0;I<10;I++)
    {
        printf("\nENTER NUMBER : ");
        scanf("%d",&NUM[I]);
    }
    LARGE=SMALL=NUM[0];
    for(I=1;I<10;I++)
    {
        if(LARGE<NUM[I])
            LARGE=NUM[I];
        if(SMALL>NUM[I])
            SMALL=NUM[I];
    }
    printf("\nTHE LARGER NUMBER IS %d", LARGE);
    printf("\nThe SMALLER NUMBER IS %d", SMALL);
}
