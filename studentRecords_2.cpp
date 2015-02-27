#include <stdio.h>
#include <string.h>

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
	printf("******************************************\n");
	printf("Choice : ");
	char choice; 
	scanf("%c", &choice);

	if (choice == '1')
	{
		int num_studs;
		printf("How many students? ");
		scanf("%d", &num_studs);

		while(num_studs--)
		{
			printf("******************************************\n");
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

			stud.percentage = (total_marks/(double)stud.numc);

			FILE* fout = fopen("studs.txt", "a");
		    fwrite(&stud, sizeof(student), 1, fout);
		    fclose(fout);
		}
		printf("******************************************\n");
	}
	else if (choice == '2')
	{
		printf("******************************************\n");
		printf("Merit List: \n");

		char snames[50][20];
		double spercent[50];

		student read_data;
		FILE* fin = fopen("studs.txt", "r");
		int i = 0;
	    while(fread(&read_data, sizeof(student), 1, fin))
	    {
			strcpy(snames[i], read_data.name);
			spercent[i] = read_data.percentage;
			++i;
	    }
	    
	    char temp[20], dtemp;
	    for (int j = 0; j < i; ++j)
	    {
	    	for (int k = 0; k < i-j-1; ++k)
	    	{
	    		if (spercent[k] < spercent[k+1])
	    		{
	    			dtemp = spercent[k];
	    			spercent[k] = spercent[k+1];
	    			spercent[k+1] = dtemp;

	    			strcpy(temp, snames[k]);
	    			strcpy(snames[k], snames[k+1]);
	    			strcpy(snames[k+1], temp);	    			
	    		}
	    	}
	    }

	    for (int x = 0; x < i; ++x)
	    {
	    	printf("Rank %d : %s\n", x+1, snames[x]);
	    }

	    fclose(fin);
	    printf("******************************************\n");
	}
	else if(choice == '3')
	{
		printf("******************************************\n");
		printf("Student List: \n");
		
		student read_data;
		FILE* fin = fopen("studs.txt", "r");		
	    while(fread(&read_data, sizeof(student), 1, fin))
	    {
	    	printf("%s\n", read_data.name);
	    }
	    fclose(fin);
	    printf("******************************************\n");
	}

	return 0;
}