#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void String_To_Words(char *);
void Int_To_Words(char *, int );

int main(void)
{
    printf("Enter the digit:\n");

    char digit[50];

    scanf("%s", digit);

    
   String_To_Words(digit);
    
    
   
    return 0;
}

void String_To_Words(char *ptr)
{
    int length = strlen(ptr);
    for(int i = 0 ; i<length; i++)
    {
        
        Int_To_Words(&ptr[i], (length-i));
 }
    return ;
}

void Int_To_Words(char *ptr, int length)
{
        
        if(length == 1)
        {

        switch((*ptr-48))
        {
            


            case  1 : printf("One");
            break;

            case 2 :  printf("Two");
            break; 

            case 3 :  printf("Three");
            break; 

            case 4 :  printf("Four");
            break; 

            case 5 :  printf("Five");
            break; 

            case 6 :  printf("Six");
            break; 

            case 7 :  printf("Seven");
            break; 

            case 8 :  printf("Eight");
            break; 

            case 9 :  printf("Nine");
           
            break; 
        }

            
    }



        if(length==2)
        {
            if((*(ptr + 1)-48) == 0)
            {

                switch(*ptr-48)
                {
                case 1 : printf(" Ten ");
                break;

                case 2 : printf(" Twenty ");
                break;

                case 3 : printf(" Thirty ");
                break;

                case 4 : printf(" Fourty ");
                break;
               
                case 5 : printf(" Fifty ");
                break;
               
                case 6 : printf(" Sixty ");
                break;
               
                case 7 : printf(" Seventy ");
                break;
               

                case 8 : printf(" Eighty ");
                break;
               
                case 9 : printf(" Ninty ");
                break;
               
                }
                
                exit(0);
            }
        
           
           
           
           
           
            else if((*(ptr+1)-48)  != 0 && ( (*(ptr) - 48)*10 + (*(ptr+1) -48)) < 20)
            {
            switch((*ptr-48)*10 + (*(ptr+1)-48))
            {   
                case 10 : printf(" Ten ");
                break;

                case 12 : printf(" Twelve ");
                break;

                case 11 : printf(" Eleven ");
                break;
               
                case 13 : printf(" Thirteen ");
                break;
               
                case 14 : printf(" Fourteen ");
                break;
               
                case 15 : printf(" Fifteen ");
                break;
               

                case 16 : printf(" Sixteen ");
                break;
               
                case 17 : printf(" Seventeen ");
                break;
               
                case 18 : printf(" Eighteen ");
                break;
               
                case 19 : printf(" Ninteen ");
                break;

                
            }
            exit(0);
               
            }

            else if((*(ptr+1)-48)  != 0 && ( (*(ptr) - 48)*10 + (*(ptr+1) - 48) ) > 20)
            {
            switch((*ptr-48))
            {   
                

                case 2 : printf(" Twenty ");
                break;
               
                case 3 : printf(" Thirty ");
                break;
               
                case 4 : printf(" Forty ");
                break;
               
                case 5 : printf(" Fifty ");
                break;
               

                case 6 : printf(" Sixty ");
                break;
               
                case 7 : printf(" Seventy ");
                break;
               
                case 8 : printf(" Eighty ");
                break;
               
                case 9 : printf(" Ninty ");
                break;

                
            }
           
               
            }
 
 
            

        else
           {
               switch(*ptr-48)
               {    
                   case 1 : printf(" Eleven ");
                   break;

                   case 2 : printf(" Twenty ");
                   break;

                   case 3 : printf(" Thirty ");
                break;

                case 4 : printf( " Fourty ");
                break;
               
                case 5 : printf(" Fifty ");
                break;
               
                case 6 : printf(" Sixty ");
                break;
               
                case 7 : printf(" Seventy ");
                break;
               

                case 8 : printf(" Eighty ");
                break;
               
                case 9 : printf(" Ninty ");
                break;
               
               }
               
           }
           
        }



        if(length==3)
        {
            switch((*ptr-48))
            {

                case 1 : printf(" One Hundread ");
                break; 

                
                case 2 : printf(" Two Hundread ");
                break;

                
                case 3 : printf(" Three Hundread ");
                break;

                
                case 4 : printf(" Four Hundread ");
                break;

                
                case 5 : printf(" Five Hundread ");
                break;

                
                case 6 : printf(" Six Hundread ");
                break;

                
                case 7 : printf(" Seven Hundread ");
                break;

                
                case 8 : printf(" Eight Hundread ");
                break;

                
                case 9 : printf(" Nine Hundread ");
                break;



            }

        }


    }










