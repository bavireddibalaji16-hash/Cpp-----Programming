 #include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Created\n";
    }

    ~Student() {
        cout << "Destroyed\n";
    }

 };

   void test() {
    Student s1;
    static Student s2;
    cout << "Function ending\n";
    }


int main() {
    test();
    cout << "Back in main\n";
    return 0;
} 


/* #include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Object created\n";
    }

    ~Student() {
        cout << "Object destroyed\n";
    }
};

void test() {
    Student s1;          // Normal object
    static Student s2;   // Static object
}

int main() {
    cout << "First call:\n";
    test();

    cout << "\nSecond call:\n";
    test();

    cout << "\nProgram ending\n";
    return 0;
}
 */







