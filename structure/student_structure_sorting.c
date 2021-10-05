
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[30];
    int id;
    float cgpa;
    int sem;
};

// setting up rules for comparison
// to sort the students based on names

// * sort based on cgpa if cgpa same sort on name
int comparator(const void *p, const void *q)
{
    if( ((struct Student *)p)->cgpa != ((struct Student *)q)->cgpa )
    {
        return ((struct Student *)p)->cgpa > ((struct Student *)q)->cgpa ;
    }
    
    return strcmp(((struct Student *)p)->name,
                  ((struct Student *)q)->name);
}

void inputswe(struct Student student2[], int size2)
{
    for (int i = 0; i < size2; i++)
    {
        scanf("%s %d %f %d", &student2[i].name, &student2[i].id, &student2[i].cgpa, &student2[i].sem);
    }
}

void outputswe(struct Student student2[], int size3)
{
    for (int i = 0; i < size3; i++)
    {
        printf("%s %d %.2f %d\n", student2[i].name, student2[i].id, student2[i].cgpa, student2[i].sem);
    }
}

int main()
{
    int n ;
    printf("Enter Total Number of Student :");
    scanf("%d",&n);
    
    struct Student arr[n];

    inputswe(arr, n);
    qsort(arr, n, sizeof(struct Student), comparator);

    outputswe(arr, n);

    // based on the specified comparator
    // qsort(arr, n, sizeof(struct Student), comparator);

    return 0;
}