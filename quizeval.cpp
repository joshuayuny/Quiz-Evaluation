//Quiz Evaluation
#include <iostream>
using namespace std;
int main()
{
  // Variable for quiz score
  int student;
  int quiz;
  int sum;
  // Array Parameter
  
  // Asking user questions
  cout << "How many students will be graded? ";
  cin >> student;
  cout << "How many quizzes did the students take? ";
  cin >> quiz;
  // User inputs becomes the row and column of the array 
  int tests[student][quiz];
  // For loop for the number if students exam that will be graded 
  for(int row=0; row < student; row++)
  {
   // Prints out Student then their first exam and on forward
   cout << "Student " << row+1;
   cout << endl;
   // Another For loop for the quiz scores of the students
   for(int column=0; column < quiz; column++)
   {
    cout << "Please enter the grade for quiz " << column+1 << ": ";
    cin >> tests[row][column];
    }
   }
  
  // Total Grade adds the total as well
  for(int row=0; row < student; row++)
  {
  int totalGrade = 0;
  cout << "Student " << row +1<< " total grade: ";
  for(int column=0; column < quiz; column++)
   {
   totalGrade = totalGrade + tests[row][column];
   }
   cout << totalGrade;
   cout << endl;
 }
  return 0;
}

