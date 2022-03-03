#pragma warning(disable:4996)

#include <stdio.h>
#include <process.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    FILE* stream = NULL;
    int     i = 10;
    double  fp = 1.5;
    char    s[] = "this is a string";
    char    c = '\n';

    // Open the file
    if (fopen_s(&stream, "fprintf_p.out", "w") == 0) {
        // Format and print data
        _fprintf_p(stream, "%2$s%1$c", c, s);
        _fprintf_p(stream, "%d\n", i);
        _fprintf_p(stream, "%f\n", fp);

        // Close the file
        fclose(stream);
    }

    // Verify our data
    system("type fprintf_p.out");

    _getch();
    return 0;
}