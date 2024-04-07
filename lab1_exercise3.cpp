#include <iostream>
#include <iomanip> // for setting precision

using namespace std;

struct Marks {
    int roll_no;
    string name;
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

float calculate_percentage(int chem_marks, int maths_marks, int phy_marks) {
    int total_marks = chem_marks + maths_marks + phy_marks;
    return (static_cast<float>(total_marks) / 300) * 100;
}

int main() {
    // Example data for 5 students
    Marks students_data[5] = {
        {1, "Student1", 85, 90, 75},
        {2, "Student2", 78, 92, 88},
        {3, "Student3", 92, 85, 80},
        {4, "Student4", 65, 78, 90},
        {5, "Student5", 70, 85, 95}
    };

    // Display percentage for each student
    for (int i = 0; i < 5; ++i) {
        float percentage = calculate_percentage(students_data[i].chem_marks, students_data[i].maths_marks, students_data[i].phy_marks);
        cout << "Roll No: " << students_data[i].roll_no << ", Name: " << students_data[i].name
             << ", Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    }

    return 0;
}
