#ifndef ATTENDANCELIBRARY_H
#define ATTENDANCELIBRARY_H

#include <iostream>
using namespace std;

class Attendance {
private:
    int days;
    int extra;

public:
    // Constructors
    Attendance() {
        days = 0;
        extra = 0;
    }

    Attendance(int d, int e) {
        days = d;
        extra = e;
    }

    Attendance(const Attendance& a) {
        days = a.days;
        extra = a.extra;
    }

    // Function overloading
    void markAttendance() {
        days += 1;
    }

    void markAttendance(int d) {
        days += d;
    }

    void markAttendance(int d, int e) {
        days += d;
        extra += e;
    }

    // Operator +
    Attendance operator+(const Attendance& a) {
        return Attendance(days + a.days, extra + a.extra);
    }

    // Operator -
    Attendance operator-(const Attendance& a) {
        return Attendance(days - a.days, extra - a.extra);
    }

    // ✔️ FIXED operator==
    bool operator==(const Attendance& a) const {
        return (days == a.days && extra == a.extra);
    }

    // Operator <
    bool operator<(const Attendance& a) const {
        return days < a.days;
    }

    // Output operator <<
    friend ostream& operator<<(ostream& out, const Attendance& a) {
        out << "Days: " << a.days << ", Extra: " << a.extra;
        return out;
    }
};

#endif