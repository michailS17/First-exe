#include <iostream>
#include <string>
using namespace std;

int main() {
  int num_subjects;
  cout << "Enter the number of subjects: ";
  cin >> num_subjects;

  string subject_names[num_subjects];
  double subject_scores[num_subjects][5];

  for (int i = 0; i < num_subjects; i++) {
    cout << "\nEnter the name of subject " << i + 1 << ": ";
    cin >> subject_names[i];

    cout << "Enter the quiz score (out of 5) for " << subject_names[i] << ": ";
    cin >> subject_scores[i][0];

    cout << "Enter the test score (out of 15) for " << subject_names[i] << ": ";
    cin >> subject_scores[i][1];

    cout << "Enter the assignment score (out of 10) for " << subject_names[i] << ": ";
    cin >> subject_scores[i][2];

    cout << "Enter the project score (out of 20) for " << subject_names[i] << ": ";
    cin >> subject_scores[i][3];

    cout << "Enter the final exam score (out of 50) for " << subject_names[i] << ": ";
    cin >> subject_scores[i][4];
  }

  cout << "\nSubject\t\tTotal Score\tGrade\n";

  for (int i = 0; i < num_subjects; i++) {
    double total_score = 0;
    for (int j = 0; j < 5; j++) {
      total_score += subject_scores[i][j];
    }

    double percentage = (total_score / 100) * 100;
    char grade;

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

    cout << subject_names[i] << "\t\t" << total_score << "\t\t" << grade << endl;
  }

  return 0;
}
