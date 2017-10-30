#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/*
  main function
*/
int main(void) {
int i = 5;
i = strncmp(__FILE__, "Sully_", 6) ? i : i - 1;
if (i > -1) {
char *execName;
asprintf(&execName, "Sully_%d.c", i);
char *fileName;
asprintf(&fileName, "Sully_%d", i);

char *cmd;
asprintf(&cmd, "gcc -Wall -Werror -Wextra %s -o %s && ./%s", execName, fileName, fileName);

char *code = "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c#include <string.h>%c/*%c  main function%c*/%cint main(void) {%cint i = %d;%ci = strncmp(__FILE__, %cSully_%c, 6) ? i : i - 1;%cif (i > -1) {%cchar *execName;%casprintf(&execName, %cSully_%cd.c%c, i);%cchar *fileName;%casprintf(&fileName, %cSully_%cd%c, i);%c%cchar *cmd;%casprintf(&cmd, %cgcc -Wall -Werror -Wextra %cs -o %cs && ./%cs%c, execName, fileName, fileName);%c%cchar *code = %c%s%c;%cFILE *f = fopen(execName, %cw%c);%cfprintf(f, code, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 10, 10, 10, 34, 37, 34, 10, 10, 34, 37, 34, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10, 34, code, 34, 10, 34, 34, 10, 10, 10, 10);%cfclose(f);%cif (i > -1) { system(cmd); };%c}}";
FILE *f = fopen(execName, "w");
fprintf(f, code, 10, 10, 10, 10, 10, 10, 10, 10, i, 10, 34, 34, 10, 10, 10, 34, 37, 34, 10, 10, 34, 37, 34, 10, 10, 10, 34, 37, 37, 37, 34, 10, 10, 34, code, 34, 10, 34, 34, 10, 10, 10, 10);
fclose(f);
if (i > -1) { system(cmd); };
}}