#include <iostream> [cite: 69]
using namespace std; [cite: 70]
// Base class: Person [cite: 71]
class Person { [cite: 72]
public: [cite: 73]
Person() { [cite: 74]
cout << "Person's constructor called" << endl; [cite: 75]
} [cite: 76]
};
// Derived class 1: Faculty [cite: 77]
class Faculty: public Person { [cite: 78]
public: [cite: 79]
Faculty() { [cite: 80]
cout << "Faculty's constructor called" << endl; [cite: 81]
}
};
// Derived class 2: Student [cite: 82]
class Student: public Person { [cite: 83]
public: [cite: 84]
Student() { [cite: 85]
cout << "Student's constructor called" << endl; [cite: 86]
}
};
// Derived class 3: TA (inherits from both Faculty and Student) 
 class TA: public Faculty, public Student { [cite: 87]
public: [cite: 88]
TA() { [cite: 89]
cout << "TA's constructor called" << endl; [cite: 90]
}
};
int main(){ [cite: 91]
TA ta; // Creating an object of TA [cite: 92]
 return 0; [cite: 92]
} [cite: 96]
