#include <stdio.h>
#include <string.h>

char *strrev(char *string) {
  char *start_poiter = string;
  char *end_pointer = string + strlen(string) - 1;

  while(start_poiter < end_pointer){
    char temp = *start_poiter;
    *start_poiter = *end_pointer;
    *end_pointer = temp;

    start_poiter++;
    end_pointer--;
  }
  return string;
}

int main() {
  char str[] = "hello world";
  printf("%s\n", strrev(str)); 
  return 0;
}
