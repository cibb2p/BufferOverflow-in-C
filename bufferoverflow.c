#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check_authentication(char *password) {
 int auth_flag = 0;
 char password_buffer[10];
 strcpy(password_buffer, password);
 if(strcmp(password_buffer, "cibb2pwn") == 0)
 auth_flag = 1;
 return auth_flag;
}
/*
*/
void main(int argc, char *argv[]) {
system("color a");
 if(argc < 2) {
 printf("Usage: %s <password>\n", argv[0]);
 exit(0);
 }
 if(check_authentication(argv[1])) {
 printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
 printf(" [+] You're logged in.\n");
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
 } else {
 printf("\nAccess Denied.\n");
 }
}
