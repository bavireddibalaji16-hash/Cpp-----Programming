
/* Parent's access	       public inheritance	      protected inheritance	     private inheritance
   public	               Public	                  Protected	                 Private
   protected	           Protected	              Protected	                 Private
   private	               Not directly accessible	  Not directly accessible	 Not directly accessible */

#include<iostream>
#include<string>
using namespace std;

/* 1)public ->protected
class Person {    
public:
    int age = 18;
};

class Student : protected Person {
public:
    void show() {
        cout << age;  // Allowed
    }
};

int main() {
    Student s;
    s.show();         // Allowed
    // cout << s.age; // Error
    return 0;
} */




/* 2) private ->protected 
 
class Person {
private:
    int age = 18;

public:
    int getAge() {
        return age;
    }
};

class Student : protected Person {
public:
    void show() {
        // cout << age;  // Error: parent's private member
        cout << "Age: " << getAge() << endl;
    }
};

int main() {
    Student s;

    s.show();

    // cout << s.getAge();  // Error: getAge becomes protected

    return 0;
} */





/*3)protected->protected
class Person {
protected:
    int age = 18;
};

class Student : protected Person {
public:
    void show() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;

    s.show();

    // cout << s.age;  // Error: age is protected

    return 0;
} */






/*4)private->private

class Person {
private:
    int age = 18;

public:
    int getAge() {
        return age;
    }
};

class Student : private Person {
public:
    void show() {
        cout << "Age: " << getAge() << endl;
    }
};

int main() {
    Student s;

    s.show();

    // cout << s.getAge();  // Error: private inheritance

    return 0;
} */

