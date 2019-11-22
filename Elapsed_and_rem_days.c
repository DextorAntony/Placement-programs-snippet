#include <stdio.h>

int main()
{
    
    int d,m,y,sum=0;
    scanf("%d",&d);
     scanf("%d",&m);
      scanf("%d",&y);
      
      switch(m - 1){
          
          case 12:
          sum = sum + 31;
       
          
          case 11:
          sum = sum + 30 ;
          
          
          case 10:
          sum = sum + 31 ;
      
          
          case 9:
          sum = sum + 30 ;
      
          
          case 8:
          sum = sum + 31 ;
      
          
          case 7:
          sum = sum + 31;
  
          
          case 6:
          sum = sum + 30;
      
          
          case 5:
          sum = sum + 31;
        
          
          case 4:
          sum = sum + 30;
        
          
          case 3:
          sum = sum + 31;
         
          
          case 2:
          sum = sum + 28;
         
          
          
       
          
          if(y%4==0){
              if(y%100!=0){
                  if(y%400){
                      sum = sum + 29;
                  }
              }
          }
          
          else{
              case 1:
              sum = sum + 30;
          }
          
      }
sum = sum + d;
printf("%d %d",sum,(365 - sum));
    return 0;
}
