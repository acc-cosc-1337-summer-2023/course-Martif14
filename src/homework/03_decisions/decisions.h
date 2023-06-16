//write include required statements
#include <iostream>
using namespace std::cout;

int get_letter_grade_using_if()
{
    int score;
	char letterGrade;
	
	std::cout<<"Input a number between 1-100 and press enter."<<endl;
	std::cout<<" The program shows you "<<endl;
	std::cout<<"the letter grade that corresponds to that number is."<<endl;
	cin>>score;

	
	if (score<0 || score >100)
	{
		std::cout<<"Test scores must be between 1-100. "<<endl;
		std::cout<<"Exit the program and run it again"<<endl;
	}

	else if (score <59)
	{ 
		letterGrade = 'F';
	}
	else if (score <69)
	{
		letterGrade = 'D';
	}
	else if (score < 79)
	{
		letterGrade = 'C';
	}
	else if (score < 89)
	{
		letterGrade = 'B';
	}
	else if  (score <=100)
	{
		letterGrade = 'A';
	}  

	std::cout<<"The letter grade is: " <<letterGrade<<endl;
	system("pause");
	return 0;
}

//get_letter_grade_using_switch


//Write a function(s) prototype  here




