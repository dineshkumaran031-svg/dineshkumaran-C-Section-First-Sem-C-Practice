#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created!");
        return 1;
    }

    fprintf(fp, "Name: Alstar\n");
    fprintf(fp, "Departmemt: ECE\n");
    fprintf(fp, "Class: ECE-C\n");
    fprintf(fp, "College: Karpagam College Of Engineering \n");

    fclose(fp);

    printf("Information written successfully!");

    return 0;
}

