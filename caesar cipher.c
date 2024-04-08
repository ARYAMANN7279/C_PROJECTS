#include<stdio.h>
#include<string.h>
void encrypt(char str[100],int a);
void decrypt(char str[100],int a);
int main()
{
  char s[100];
  char choice[10];
  int e;
  printf("what do you want to do? encode or decode?\n");
  scanf("%s",choice);
  if (strcmp(choice, "encode") == 0)
  {
    printf("enter your string to encode ");
    scanf("%s",s);
    printf("enter the shift ");
    scanf("%d",&e);
    encrypt(s,e);
  }
  else if (strcmp(choice, "decode") == 0)
  {
    printf("enter your string to decode ");
    scanf("%s",s);
    printf("enter the shift ");
    scanf("%d",&e);
    decrypt(s,e);
  }
  return 0;
}

void encrypt(char str[100],int s)
{
  for(int a=0;a<strlen(str);a++)
    {
      str[a]=str[a]+s;
    }
  printf("your encrypted code with shift %d is %s",s,str);
}

void decrypt(char str[100],int s)
{
  for(int a=0;a<strlen(str);a++)
    {
      str[a]=str[a]-s;
    }
  printf("your decrypted code with shift %d is %s",s,str);
}