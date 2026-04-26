#include <iostream>
#include "AttendanceLibrary.h"
using namespace std;

int main() {

    Attendance s1;
    Attendance s2(20, 15);
    Attendance s3(s2);

    s1.markAttendance();
    s1.markAttendance(2);
    s1.markAttendance(3, 5);

    cout << "Student 1: " << s1 << endl;
    cout << "Student 2: " << s2 << endl;
    cout << "Student 3: " << s3 << endl;

    Attendance total = s1 + s2;
    cout << "Combined: " << total << endl;

    Attendance diff = s2 - s1;
    cout << "Difference: " << diff << endl;

    if (s2 == s3)
        cout << "s2 and s3 are equal\n";

    if (s1 < s2)
        cout << "s1 has less attendance than s2\n";

    return 0;
}