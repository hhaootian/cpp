#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

struct teacher {
    int id;
    string name;
    struct student student;
};

int main() {
    student s1;
    s1.name = "doge";
    s1.age = 20;
    s1.score = 100;
    cout << s1.name << s1.age << s1.score << endl;

    student s2 = {"cate", 21, 80};
    cout << s2.name << s2.age << s2.score << endl;

    student student_list[] = {
        {"s1", 10, 10},
        {"s2", 20, 20}
    };
    cout << student_list[0].name << endl;

    student * p = &s1;
    cout << p->name << endl;

    teacher t1 = {1, "t1", s1};
    cout << t1.student.name << endl;
    t1.student.name = "changed";
    cout << t1.student.name << s1.name << endl;

    return 0;
}
