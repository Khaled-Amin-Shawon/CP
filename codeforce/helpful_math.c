#include<stdio.h>
#include<string.h>
int main()
{
  char s[101];
  scanf("%s",s);
  int count=strlen(s);
  for (int  i = 0; i < count; i+2)
  {
    for (int j = i; j < count; j+2)
    {
      
    if (s[i]>s[j])
    {
     int temp=(int)s[i];
      s[i]=s[j];
      s[j]=(char)temp;

    }
    }
    
    
  }
  printf("%s",s);
  

    
}