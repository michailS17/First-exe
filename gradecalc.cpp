#include <iostream>
#include <string>
using namespace std;

int main() {
  char grade;
  int num_subjects;
  cout << "Enter the number of subjects: ";
  cin >> num_subjects;

  string subject_name;
  double quiz_score, test_score, assignment_score, project_score, final_score;

  cout << "\nSubject\t\tTotal Score\tGrade\n";

  for (int i = 0; i < num_subjects; i++) {
    cout << "\nEnter the name of subject " << i++ ;
    cin >> subject_name;

    cout << "Enter the quiz score (out of 5) for " << subject_name ;
    cin >> quiz_score;

    cout << "Enter the test score (out of 15) for " << subject_name ;
    cin >> test_score;

    cout << "Enter the assignment score (out of 10) for " << subject_name ;
    cin >> assignment_score;

    cout << "Enter the project score (out of 20) for " << subject_name ;
    cin >> project_score;

    cout << "Enter the final exam score (out of 50) for " << subject_name;
    cin >> final_score;

    double total_score = quiz_score + test_score + assignment_score + project_score + final_score;
    double percentage = (total_score / 100) * 100;
    

    if (percentage >= 90) {
      grade = 'A';
    } else if (percentage >= 80) {
      grade = 'B';
    } else if (percentage >= 70) {
      grade = 'C';
    } else if (percentage >= 60) {
      grade = 'D';
    } else {
      grade = 'F';
    }

    cout << subject_name << "\t\t" << total_score << "\t\t" << grade << endl;
  }

  return 0;
}
