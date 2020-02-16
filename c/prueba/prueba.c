#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   /* Define a temporary variable */
   char example[100] =  "TechOnTheNet.com ";

   /* Copy the first string into the variable */
   /* strcpy(example, "TechOnTheNet.com "); */

   /* Concatenate the following two strings to the end of the first one */
   strcat(example, "is over 10 ");
   strcat(example, "years old.");

   /* Display the concatenated strings */
   printf("%s\n", example);

   return 0;
}
