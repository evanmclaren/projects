#include <iostream>
#include <vector>
#include <string>

class student {
public:
    int student_id;
    std::string student_name;
    std::string student_email;
    std::vector<student> student_list;

    student(int aStudent_id, std::string aStudent_name, std::string aStudent_email) {
        student_id = aStudent_id;
        student_name = aStudent_name;
        student_email = aStudent_email;
    }

    void modify_student(int student_index){
        if(student_index >= 0 && student_index < student_list.size()){
            std::cout << "Re-enter student's name: " << std::endl;
            std::cin.ignore();
            std::getline(std::cin, student_list[student_index].student_name);
            std::cout << "Re-enter student's email: " << std::endl;
            std::getline(std::cin, student_list[student_index].student_email);
        }

    };
};

int main() {

    int user_selection;
    std::string aStudent_name;
    std::string aStudent_email;
    int last_student_id = 0;
    std::vector<student> student_list;
    int student_index;

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
                    std::cin.ignore();
                    std::getline(std::cin, aStudent_name);

                    std::cout << "Enter student's email: " << std::endl;
                    std::getline(std::cin, aStudent_email);

                    last_student_id ++;
                    student s(last_student_id, aStudent_name, aStudent_email);
                    student_list.push_back(s);
                break;
            }
            case 2: {
                for (int i = 0; i < student_list.size(); i++) {
                    std::cout << "Student ID: " << student_list[i].student_id << std::endl;
                    std::cout << "Student Name: " << student_list[i].student_name << std::endl;
                    std::cout << "Student Email: " << student_list[i].student_email << std::endl;
                }

                std::cout << "Enter the Student ID of the student you wish to edit: " << std::endl;
                std::cin.ignore();
                std::getline(std::cin, student_index);
                student.modfiy_student(student_index);
                break;
            }
            case 10: {
                for (int i = 0; i < student_list.size(); i++){
                    std::cout << "Student ID: " << student_list[i].student_id << std::endl;
                    std::cout << "Student Name: " << student_list[i].student_name << std::endl;
                    std::cout << "Student Email: " << student_list[i].student_email << std::endl;
                }
                break;
            }
        }
    }
    return 0;
}
