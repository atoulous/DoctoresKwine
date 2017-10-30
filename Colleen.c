#include <stdio.h>

void my_ft() {
char*a="#include <stdio.h>%c%cvoid my_ft() {%cchar*a=%c%s%c;%cprintf(a,10,10,10,34,a,34,10,10,10,10,10,10,10,10,10,10,10,10);%c}%c%c/*%c  function main%c*/%cint main() {%c/*%c  function my_ft%c*/%cmy_ft();%c}";
printf(a,10,10,10,34,a,34,10,10,10,10,10,10,10,10,10,10,10,10);
}

/*
  function main
*/
int main() {
/*
  function my_ft
*/
my_ft();
}