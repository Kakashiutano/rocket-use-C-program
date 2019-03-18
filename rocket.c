// I want to create active rocket
#include <stdio.h>
#include <unistd.h> // for usleep function
 
const char rocket[] =
"           _\n\
          /^\\\n\
          |-|\n\
          |C|\n\
          |H|\n\
          |H|\n\
          |U|\n\
          |N|\n\
          |E|\n\
          |N|\n\
          |G|\n\
          | |\n\
         /| |\\\n\
        / | | \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";
 
int main()
{
	int i;
    for (i = 0; i < 50; i ++) printf("\n"); // jump to bottom of console
    printf("%s", rocket);
    int j = 300000;
    for (i = 0; i < 50; i ++) {
        usleep(j); // move faster and faster,
        j = (int)(j * 0.9); // so sleep less each time
        printf("\n"); // move rocket a line upward
    }
    printf("Visit http://ChhunnengOS.com !\n");
    return 0;
}
