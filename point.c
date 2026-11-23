#include<stdio.h>
#include<stdlib.h>
int main(){
int a=n;
scanf("%d",&n);
int *ptr=(int*)callon(n*sizeof(int));
for(int i=0;i<n;n++)
{
printf ("%d",ptr[i]);
}
n=8;
ptr=realloc(ptr,n*sizeof(int));
free(ptr);
return 0;
}                                                  
