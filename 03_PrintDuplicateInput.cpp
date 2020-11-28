#include <iostream>

using namespace std;
# define NO_OF_CHARS 256 
int main()
{   
   char str[]="geeksforgeeks";
   //intitalize array of size 256
   int *count = (int *)calloc(NO_OF_CHARS,sizeof(int));
   for (int i = 0; *(str + i); i++) 
        {
            count[*(str + i)]++;
        }
    for (int i = 0; i < NO_OF_CHARS; i++) 
    if(count[i] > 1) 
        printf("%c, count = %d \n", i, count[i]); 
  
    free(count);
    return 0;
}
