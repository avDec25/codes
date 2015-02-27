#include <stdio.h>

typedef struct 
{
	char name[20];
	int numc;
	char course[5][20];
	//LTP ? 
	double marks[5];
	double percentage;
} student;

int main()
{
	printf("*******************Menu*******************\n");
	printf("1) Add Student\n");
	printf("2) Print Merit List\n");
	printf("3) Print Student List\n");
	printf("4) Print All\n");
	printf("******************************************\n");
	printf("Choice : ");
	char choice; 
	scanf("%c", &choice);

	if (choice == '1')
	{
		student stud;
		printf("Add Student : \n");

		printf("Input Name : ");
		scanf("%s", stud.name);

		printf("How many courses? "); 
		scanf("%d", &stud.numc);

		double total_marks = 0;
		printf("Input Course Name and then Marks\n");
		for(int i = 0; i < stud.numc; ++i)
		{
			scanf("%s%lf", stud.course[i], &stud.marks[i]);
			total_marks += stud.marks[i];
		}

		stud.percentage = (total_marks/stud.numc);

		FILE* fout = fopen("studs.txt", "a");
	    fwrite(&stud, sizeof(student), 1, fout);
	    fclose(fout);

	}
	else if(choice == '4')
	{
		printf("Printing all student records: \n\n");

		student read_data;

		FILE* fin = fopen("studs.txt", "r");
	    fread(&read_data, sizeof(student), 1, fin);

	    printf("Name : %s\n", read_data.name);
	    printf("Percentage %lf\n", read_data.percentage);
	 
	    fclose(fin);
	}

	return 0;
}