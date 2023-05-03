#include <unistd.h> 
#include <string.h>

int main(){
   //char* letter[1] = "k";
   //cin >> letter;
   const char *test = "running test printchar : t\n";
   int textlength = strlen(test);
   int i;

   for (i=0; i < textlength; i++) {
      printchar(test[i]);
   }
   
   return 0; 
}
