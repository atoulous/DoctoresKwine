#include <stdio.h>
/*
  comment
*/
#define STR "#include <stdio.h>%c/*%c  comment%c*/%c#define STR %c%s%c%c#define PRINT(f) fprintf(f, STR, 10, 10, 10, 10, 34, STR, 34, 10, 10, 34, 34, 34, 34, 10)%c#define MAIN int main() { FILE *f; if (!(f=fopen(%cGrace_kid.c%c, %cw%c))) { return (0); }; PRINT(f); }%cMAIN"
#define PRINT(f) fprintf(f, STR, 10, 10, 10, 10, 34, STR, 34, 10, 10, 34, 34, 34, 34, 10)
#define MAIN int main() { FILE *f; if (!(f=fopen("Grace_kid.c", "w"))) { return (0); }; PRINT(f); }
MAIN