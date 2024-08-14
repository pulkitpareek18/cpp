# include <iostream>
using namespace std; // Importing the std namespace for using string and cout function.

namespace BKBIET{
    namespace Academics{
        namespace Student{
            namespace Pulkit{
                string name = "Pulkit Pareek";
                string rollNo = "23EBKCS098";
                int semester = 3;
            }
        }
        namespace Faculty{
            namespace Pradeep{
                string name = "Pradeep Singh Shekhawat";
                string subject = "CPP";
            }
        }
    }

    namespace Management {

            namespace Principal {
                string name = "Anil Kumar Sharma";
                int salary =  210000;
            }

            namespace Director {
                string name = "SM Prasanna Kumar";
                int salary = 250000;
            }
        
    }

}

int main(){
    // 1. Direct Access Using Scope Resolution Operator (`::`)
    cout << "Student Name: " << BKBIET::Academics::Student::Pulkit::name << endl;

    cout << "Faculty Name: " << BKBIET::Academics::Faculty::Pradeep::name << endl;

    cout << "Director Name: " << BKBIET::Management::Director::name << endl;

    // 2. Using `using` Declarations
    using BKBIET::Academics::Student::Pulkit::name;
    using BKBIET::Academics::Faculty::Pradeep::subject;

    cout << "Name: " << name << endl;

    cout << "Subject: " << subject << endl;

    // 3. Namespace Aliases
    namespace AcademicsStudent = BKBIET::Academics::Student::Pulkit;
    namespace AcademicsFaculty = BKBIET::Academics::Faculty::Pradeep;
   

    cout << "Name: " << AcademicsStudent::name << endl;

    cout << "Name: " << AcademicsFaculty::name << endl;

    return 0;
}

// Output

// Student Name: Pulkit Pareek
// Faculty Name: Pradeep Singh Shekhawat
// Director Name: SM Prasanna Kumar
// Name: Pulkit Pareek
// Subject: CPP
// Name: Pulkit Pareek
// Name: Pradeep Singh Shekhawat