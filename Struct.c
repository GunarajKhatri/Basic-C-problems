/*

Q.Program to get name,roll and marks of 48 students and store in file and read 
those datas.

*/

#include <stdio.h>

struct Students
{
    char name[10];
    int roll;
    int marks;
};

int main(void)
{

    struct Students Student[48];
    FILE *my_file;
    my_file = fopen("person.dat", "w");
    if (my_file == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        return -1;
    }
    for (int i = 1; i <= 2; i++)
    {
        printf("Enter student name: ");
        scanf("%s", &Student[i].name);
        printf("Enter student rollno: ");
        scanf("%d", &Student[i].roll);
        printf("Enter student obtained marks: ");
        scanf("%s", &Student[i].marks);
        fwrite(&Student[i], sizeof(struct Students), 1, my_file);
        printf("\n");
    }
    if (fwrite != 0)
        printf("contents to file written successfully!Below \n");
    else
        printf("error writing file !\n");

    my_file = fopen("person.dat", "rb");
    struct Students students;
    for (int j = 1; j <= 2; j++)
    {
        fread(&Student[j], sizeof(struct Students), 1, my_file);
        printf("Student%d name:%s \n", j, Student[j].name);
        printf("Student%d roll:%d \n", j, Student[j].roll);
        printf("Student%d marks:%d \n", j, Student[j].marks);
        printf("\n");
    }
}

// close file
fclose(my_file);
}