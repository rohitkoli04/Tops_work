// C Program to Check Uppercase or Lowercase or Digit or Special
// Character

#include<stdio.h>
int main(){
    char character;
    
    // accpet a chacacter form user info
    printf("enter a chacarater :");
    scanf("%c", &character);
    

// cheak using if character uppercase

if ( character >= 'A' && character <='Z')
{
   printf ("%c is an uppercase character");
}

//  esle if using lowecase chacarater

else if (character >= 'a' && character <='z')
{
   printf("%c is a lowercase character");
}

// using esle if  digit number 
else if( character >='9' && character <='0')
  {
    printf("%cis a digital\n", character);

  }
//  //special charater
//  else {
//     printf("%c is a special charater\n");
//  
 return 0;
}

