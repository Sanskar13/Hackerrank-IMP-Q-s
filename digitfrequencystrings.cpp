#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
   char num[100];
   scanf("%s" , num);
   int n = strlen(num);
   
   char comp[] = {"0123456789"};
   int s = strlen(comp);
   
   int count = 0;
   for(int i=0;i<s;i++)   
   {
       count =0;
       for(int j=0;j<n;j++)
       {           
           if(comp[i]==num[j]){
           count++;
           }       
       }
       printf("%d\t" , count);  
   }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
