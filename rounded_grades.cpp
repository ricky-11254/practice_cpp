#include <iostream>
#include <vector>

using namespace std;

int round_grade(int grade) {
    if (grade < 38) {
        return grade;
    }

    int nextmultipleof5 = ((grade + 4) / 5) * 5;

    if (nextmultipleof5 - grade < 3) {
        return nextmultipleof5;
    } else {
        return grade;
    }
}

vector<int> grading_students(vector<int> grades) {
    vector<int> rounded_grades;
    for (int i = 0; i < grades.size(); i++) {
        rounded_grades.push_back(round_grade(grades[i]));
    }
    return rounded_grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);

    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }

    vector<int> result = grading_students(grades);

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

    return 0;
}

