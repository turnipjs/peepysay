#include <stdio.h>
#include <string.h>

char* text = "Each Peepy may differ slightly in appearance, the pattern will be slightly different and your Peepy's face may be aligned slightly more or less off center. It's ok because it's very cute. Peepy is about 6 inches from beak to butt.";
char* peepy =
"               \\  /\n\
( )             \\/\n\
  \\ _______  /\\      /\\\n\
  /        @/  \\____/  \\\n\
 /  @@    @ /@@@@    @@\\\n\
|   @     @/  @@      @@\\\n\
|  @   @@ |    (o) (o)   |\n\
 \\@@    @ | @  (-----)@@ |\n\
  \\ ______ \\@@@    @@@@ /\n\
   (  )     \\_@____@___/\n\
            (  )    (  )";

int main(int argc, char const *argv[]) {
    // text = "hello";
    long textLength = strlen(text);
    int bubbleWidth = textLength;
    if (bubbleWidth > 60) bubbleWidth = 60;

    printf("  %.*s  \n", bubbleWidth, "____________________________________________________________");
    printf("/ %.*s \\\n", bubbleWidth, "                                                            ");

    long currLocInText = 0;
    while (currLocInText < textLength) {
        currLocInText += printf("| %.60s |\n", &(text[currLocInText])) - 5;
    }

    printf("\\ %.*s /\n", bubbleWidth, "                                                            ");
    printf("  %.*s  \n", bubbleWidth, "____________________________________________________________");

    printf("%s", peepy);

    return 0;
}
