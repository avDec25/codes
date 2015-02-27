//Program to store names of students, courses, marks
#include <bits/stdc++.h>
using namespace std;

typedef struct 
{
	string name;
	int numc;
	string course[5];
	//LTP ? 
	double marks[5];
	double percentage;
} student;

int main(int argc, char const *argv[])
{
	cout << "*******************Menu*******************\n";
	cout << "1) Add Student\n";
	cout << "2) Print Merit List\n";
	cout << "3) Print Student List\n";
	cout << "4) Print All\n";
	cout << "******************************************\n";
	cout << "Choice : ";
	char choice;
	cin >> choice;

	int n;
	double total = 0, percent;
	student stud, read_data;

	if(choice == '1')
	{	

		cout << "Add Student:\n";
		cout << "Input Student Name   : "; cin >> stud.name;
		cout << "How many Courses: "; cin >> n;
		stud.numc = n;
		for (int i = 0; i < n; ++i)
		{
			cout << "Input Course Name: "; cin >> stud.course[i];
			cout << "Input Marks Obtained in " << stud.course[i] << ": "; cin >> stud.marks[i];
			total += stud.marks[i];
		}
		
		percent = (total/n)*100;
		stud.percentage = percent;

		FILE* fout= fopen("data_students.txt", "w");
	    fwrite(&stud, sizeof(student), 1, fout);
	    fclose(fout);
	}

	else if (choice == '4')	
	{
	    FILE *file= fopen("data_students.txt", "r");
	    fread(&read_data, sizeof(student), 1, file);
    	// while (fgetc(file) != EOF) 
    	// {
          	
          	// cout << read_data.name << "\n";
		    for (int i = 0; i < read_data.numc; ++i)
		    {
		    	cout << read_data.course[i] << " : " << read_data.marks[i] << "\n";
		    }
		    cout << "Percentage = " << read_data.percentage << "\n\n";
	    // }
	    fclose(file);	
	}

	return 0;
}