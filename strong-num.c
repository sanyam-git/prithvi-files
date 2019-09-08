#include <stdio.h>

int main()
{int n,k=1,r,i,res;
    printf("Input the value of \n");
    scanf("%d",&n);

    for(;n>=k;k++)
    {r=k;res=0;
        for(;r>0;)
        {i=r%10;
        switch(i)
        {case 0 : res=res+1;break;
            case 1 : res=res+1;break;
        case 2 : res=res+2;break;
        case 3 : res=res+6;break;
        case 4 : res=res+24;break;
        case 5 : res=res+120;break;
        case 6 : res=res+720;break;
        case 7 : res=res+5040;break;
        case 8 : res=res+40320;break;
        case 9 : res=res+362880;break;}
        r=r/10;}
        if(res==k)
        printf("%d \n",k);
        else
        ;

    }

    return 0;
}

