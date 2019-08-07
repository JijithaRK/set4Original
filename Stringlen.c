#include <stdio.h>
#include <string.h>
 
int main()
{
  char a[100];
  int len,i,count=0;
 
  gets(a);
  
 
  len = strlen(a);
  
  for(i=0;a[i];i++)
  {
      if(a[i]==' ')
      {
          count=count+1;
      }
      
      
  }
 
  printf("%d",(len-count));
   
  
  return 0;
}
