#include<stdio.h>
 int main()
{
 int n,i,s=0;
 scanf("%d",&n);
 char a[n];
 for(i=0;i<=n;++i)
{
 scanf("%c",&a[i]);
 if(a[i]==a[i-1]&&a[i-1]==a[i-2]&&a[i-2]=='x'&&i>1)
 ++s;
}
 printf("%d",s);
 return 0;
}
