/*
Student: Jasmine Nguyen
RedID: 826620932
Course: CS420-Advanced Programming Languages
Instructor: Magda Tsintsadze
Due Date: 02/19/2023
Assignment: Lab 1 - Bit Level Manipulation
*/

#include <stdio.h>

int main(){
   int num; //n is the decimal number required from the user input
   int b, i, k;   // b is the bit system, k is a pointer to pointer to int(double pointer) and holds an address of some other pointer variable
   int a[64]; // a[] is the array to store the binary number 
   int *p;   // the pointer used to store address of a[]

   // asks user to input a decimal number
   printf("Enter decimal number: ");
   
   if (scanf("%d", &num) != 1 || num < 0){  // Error checking: statement that checks if user inputs a negative decimal number or string 
      printf("Error! Your decimal number should be positive and not a string. Please try again.\n");
      return 1;
   }

   // Error checking: asks user to input bit system and checks for invalid bit system input
   printf("Enter a bit system(4/8/16/32/64) to output your number: ");
   if(scanf("%d", &b) != 1 || b != 4 && b != 8 && b != 16 && b != 32 && b != 64){  // checking for invalid bit system and loops until valid input
      printf("Error! Bit system should be 4, 8, 16, 32 or 64. Please try again to indicate the size.\n");
      return 1;
   }

   p = a;   // stores the address of a[] into pointer p
   for(i = 0; i < b; i++){  // converts decimal input to binary value
      k = num >> i;
      if(k & 1){
         *p = 1;
      }
      else{
         *p = 0;
      }
      p++;
   }

   printf("Your number in binary will be: ");   // prints binary number
   p = a + b - 1;
   for(i = 0; i < b; i++){
      printf("%d", *p);
      p--;
   }

   printf("\nYour number in One's complement will be: ");   // stores all inverted bits of binary value to One's complement and prints it
   p = a;
   for(i = 0; i < b; i++){
      if(*p == 0){
         *p = 1;
      }
      else{
         *p = 0; // marks the end of One's complement's string
      }
      printf("%d", *p);
      p++;
   }

   printf("\nYour number in Two's complement will be: ");   // calculates and prints two's complement of the user's number
   p = a;
   i = 0;
   while(*p == 0 && i < b){  // finding the first '1' from right
      p++;
      i++;
   }
   if(i == b){  // if all bits are 0, add 1 to the one's complement to get 2's complement in a for loop
      p--;
      *p = 1;
   }
   else{
      *p = 0;
      p++;
      for( ; i < b-1; i++){
         *p = !(*p);
         p++;
      }
   }
   for(i = 0; i < b; i++){   // printing 2's complement
      printf("%d", *(a+i));
   }
   printf("\n");
   return 0;
   
}
