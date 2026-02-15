#include <bits/stdc++.h>
using namespace std;

// The data structure to hold student info
class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

// The custom comparator class
class cmp
{
public:
    // Overloading the () operator makes this a "Functor"
    bool operator()(Student l, Student r)
    {
        // Rule 1: Lower marks should come first (Min-Heap logic for marks)
        if(l.marks > r.marks){
            return true; // "l" has lower priority, so "r" moves up
        }
        else if(l.marks < r.marks){
            return false; // "l" has higher priority, stays up
        }
        else{
            // Rule 2: If marks are tied, the student with the 
            // smaller roll number should come first.
            return l.roll > r.roll; 
        }
    }
};

int main()
{
    // Syntax: priority_queue<Type, Container, Comparator>
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj); // O(log N)
    }

    // Printing elements one by one
    while (!pq.empty())
    {
        // .top() gives the student with the highest priority based on our 'cmp'
        cout << pq.top().roll << " " << pq.top().name << " " << pq.top().marks << endl;
        pq.pop(); // O(log N)
    }

    return 0;
}