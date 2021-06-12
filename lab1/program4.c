#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define numberOfStudents 2

struct Student
{
    char name[20];
    int roll;
    char address[20];
    long int phoneNumber;
};

int main()
{
    struct Student s[numberOfStudents];
    FILE *fptr;

    fptr = fopen("./file.txt", "w");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Enter your name: ");
        scanf("%s",s[i].name);
        fprintf(fptr,"%s",s[i].name);
        fprintf(fptr,"%s","\n");
        printf("Enter the roll number: ");
        scanf("%d",&s[i].roll);
        fprintf(fptr,"%d",s[i].roll);
        fprintf(fptr,"%s","\n");
        printf("Enter your address: ");
        scanf("%s",s[i].address);
        fprintf(fptr,"%s",s[i].address);
        fprintf(fptr,"%s","\n");
        printf("Enter your phone number: ");
        scanf("%ld",&s[i].phoneNumber);
        fprintf(fptr,"%ld",s[i].phoneNumber);
        fprintf(fptr,"%s","\n");
    }
    fclose(fptr);

    printf("Reading from the file....\n");
    fptr =fopen("./file.txt","r");
    if(fptr == NULL){
        //error occured 
        exit(1);
    }
    for (int i = 0; i < numberOfStudents; i++)
    {
        fscanf(fptr,"%s",s[i].name);
        // printf("%s\n",s[i].name);
        fscanf(fptr,"%d",&s[i].roll);
        // printf("%d\n",s[i].roll);
        fscanf(fptr,"%s",s[i].address);
        // printf("%s\n",s[i].address);
        fscanf(fptr,"%ld",&s[i].phoneNumber);
        // printf("%ld\n",s[i].phoneNumber);
    }

    int result;
    for (int i = 0; i < numberOfStudents - 1; i++)
    {
        for (int j = 0; j < numberOfStudents - 1 - i; j++)
        {
            result = strcmp(s[j].name, s[j + 1].name);
            if (result <= 0)
            {
                continue;
            }
            else
            {
                struct Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\n\nFinal output:\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("%s, %d, %s, %ld\n",s[i].name, s[i].roll,s[i].address,s[i].phoneNumber);
    }
    return 0;
}
