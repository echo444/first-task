#include<stdio.h>
#include<string.h>
int n1(char s[10])
{
    if(strcmp(s,"��")==0)    return 0;
    else if(strcmp(s,"һ")==0)   return 1; 
    else if(strcmp(s,"��")==0)   return 2;
    else if(strcmp(s,"��")==0)   return 3;
    else if(strcmp(s,"��")==0)   return 4;  
    else if(strcmp(s,"��")==0)   return 5;
    else if(strcmp(s,"��")==0)   return 6;
    else if(strcmp(s,"��")==0)   return 7;
    else if(strcmp(s,"��")==0)   return 8;
    else if(strcmp(s,"��")==0)   return 9;
    else if(strcmp(s,"ʮ")==0)   return 10;
}

int suan(char s[10],int m,int n)
{   
    int s1;
    if(strcmp(s,"����")==0)   s1=m+n;
    if(strcmp(s,"����")==0)   s1=m-n;
    return s1;
}

char n2(int k)
{
    if(k==0)    printf("��");
    else if(k==1)    printf("һ");
    else if(k==2)    printf("��");
	else if(k==3)    printf("��");
    else if(k==4)    printf("��");
    else if(k==5)    printf("��");
    else if(k==6)    printf("��");
    else if(k==7)    printf("��");
    else if(k==8)    printf("��");
    else if(k==9)    printf("��");
    else if(k==10)    printf("ʮ");
	return 0;
}
int main()
{
	int n1(char s[10]);
    int suan(char s[10],int m,int n);
    char n2(int k);
    char a[10],b[10],c[10],d[10];
    int x,y; 
    scanf("%s %s %s %s",&a,&b,&c,&d);
    x=n1(d);
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"����")==0)
        {
            scanf("%s",b);
            break;
        } 
        else
        { 
            scanf("%s %s",b,c);
            y=n1(c);
            x=suan(b,x,y); 
        }  
    }
    n2(x);
    return 0;
} 
 
