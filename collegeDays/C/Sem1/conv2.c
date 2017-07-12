#include<stdio.h>
#include<math.h>

int dec_to_bin(int);
int bin_to_dec(int);


int main()
{  
   int userinput,n;
   printf("The conversion programme : \n");
   printf("Select what conversion you want to do : \n");
   printf("1.Binary to Decimal \t Enter 1\n");
   printf("2.Decimal to Binary \t Enter 2\n");
   scanf("%d",&userinput);
   if(userinput == 1)
   {
     printf("Enter the binary number: \n");
     scanf("%d",&n);
     bin_to_dec(n);
     printf("The decimal equivalent is  %d\n", bin_to_dec(n));

   }
   else
   {
   
     printf("Enter the decimal number: \n");
     scanf("%d",&n);
     dec_to_bin(n);
     printf("The binary equivalent is  %d\n",dec_to_bin( n));



   }





}

int dec_to_bin(int n)  
{
    int aux, i=1, binary=0;
    while (n!=0)
    {
        aux=n%2;
        n/=2;
        binary+=aux*i;
        i*=10;
    }
    return binary;
}

int bin_to_dec(int n) 
{
    int decimal=0, i=0, aux;
    while (n!=0)
    {
        aux = n%10;
        n/=10;
        decimal += aux*pow(2,i);
        ++i;
    }
    return decimal;
}




