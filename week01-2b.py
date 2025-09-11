//week01-3c.cpp
#include <stdio.h>

int main()
{
    int a,ans=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
       ans=ans+i*i;
    }
    printf("%d",ans);
}
