#include<stdio.h>

int main(){
     int tiffin;
   scanf("%d",&tiffin);
   if(tiffin<=50)
   {
    printf("singara somucha khawa lagbo");
   }
   else if( tiffin <= 100)
   {
    printf("ebar sathe akta coke o khawa jaibo");
   } 
   else if(tiffin >100)
   {
    printf("nah akta burger e khabo");
   }
   else {printf("tui gorid tor kase taka ni");}
   
    return 0;
}