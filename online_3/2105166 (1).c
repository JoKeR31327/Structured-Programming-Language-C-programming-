#include<stdio.h>
#include<string.h>
int main()
#define N 100
{
char line[N][100];
int n=0;
printf("enter the number of lines= ");
scanf("%d", &n);
for(int i=0; i<n; i++){
    scanf("%s[^\n]", &line[i]);
}
char *p=line;
char *t=p;
while(*p){
    if(*p=='//' || *p=='\n'){
    break;
    }
    p++;
}
int a=p-t;
char b[N][100];
for(int i=0; i<a; i++){
strncpy(b[i],line[i],a);
}
for(int i=0;i<a; i++){
printf("%s\n", b[i]);
}
}
