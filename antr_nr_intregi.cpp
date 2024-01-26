#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char s[101],*p;
   int nr=0,c;
   cin.get(s,101);
   p=strtok(s," ");
   while(p!=NULL)
   {
       c=0;
       for(int i=0;i<strlen(p);i++)
           if(strchr("0123456789",p[i])!=NULL) c++;
       if(c==strlen(p)) nr++;
       p=strtok(NULL," ");
   }
   cout<<nr;
}