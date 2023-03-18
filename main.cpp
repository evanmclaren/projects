#include <iostream>
#include <vector>
#include <string>

class student {
public:
    int student_id;
    std::string student_name;
    std::string student_email;
    int last_student_id = 0;

    student(int aStudent_id, std::string aStudent_name, std::string aStudent_email){
        student_id = last_student_id + 1;
        last_student_id ++;
        student_name = aStudent_name;
        student_email = aStudent_email;
    };
};

int main() {

    int user_selection;
    std::string aStudent_name;
    std::string aStudent_email;
    int last_student_id = 0;
    std::vector<student> students;

    while(true) {
        std::cout << "Please choose:" << std::endl;
        std::cout << "1. Add student" << std::endl;
        std::cout << "2. Edit student" << std::endl;
        std::cout << "3. Remove student" << std::endl << std::endl;

        std::cout << "4. Add test" << std::endl;
        std::cout << "5. Edit test" << std::endl;
        std::cout << "6. Remove test" << std::endl << std::endl;

        std::cout << "7. Add test result" << std::endl;
        std::cout << "8. Edit test result" << std::endl;
        std::cout << "9. Remove test result" << std::endl << std::endl;

        std::cout << "10. Show all info" << std::endl;
        std::cout << "11. Exit" << std::endl << std::endl;

        std::cin >> user_selection;

        switch (user_selection) {
            case 1: {
                std::cout << "Enter student's name: " << std::endl;
                std::cin >> aStudent_name;
                std::cout << "Enter student's email: " << std::endl;
                std::cin >> aStudent_email;
                std::cin.ignore();
                std::cin.get();

                student s(last_student_id, aStudent_name, aStudent_email);
                students.push_back(s);
                break;
            }
        }
    }
    return 0;
}
