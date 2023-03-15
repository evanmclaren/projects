#include <iostream>
#include <vector>

class student{
private:
    int student_id;
    std::string student_name;
    std::string student_email;
public:
    student(int aStudent_id, std::string aStudent_name, std::string aStudent_email){
        setStudent_id(aStudent_id);
        setStudent_name(aStudent_name);
        setStudent_email(aStudent_email);
    }
    void Getstudent(int ids, std::string name, std::string email){
        student_id = ids;
        student_name = name;
        student_email = email;
    }
    void setStudent_id(int aStudent_id){
        student_id = aStudent_id;
    }
    void setStudent_name(std::string aStudent_name){
        student_name = aStudent_name;
    }
    void setStudent_email(std::string aStudent_email){
        student_email = aStudent_email;
    }
};

class test{
private:
    int test_id;

    std::string course_name;
    std::string test_name;
    std::string test_date;
public:
    test(int aTest_id, std::string aCourse_name, std::string aTest_name, std::string aTest_date){
        setTest_id(aTest_id);
        setCourse_name(aCourse_name);
        setTest_name(aTest_name);
        setTest_date(aTest_date);
    }
    void Gettest(int idt, std::string namec, std::string namet, std::string datet){
        test_id = idt;
        course_name = namec;
        test_name = namet;
        test_date = datet;
    }
    void setTest_id(int aTest_id){
        test_id = aTest_id;
    }
    void setCourse_name(std::string aCourse_name){
        course_name = aCourse_name;
    }
    void setTest_name(std::string aTest_name){
        test_name = aTest_name;
    }
    void setTest_date(std::string aTest_date){
        test_date = aTest_date;
}};

int main(){
    int user_selection;
    int last_student_id = 0;
    int last_test_id = 0;
    std::string aStudent_name;
    std::string aStudent_email;
    std::string aCourse_name;
    std::string aTest_name;
    std::string aTest_date;
    std::vector<student> students;

    std::cout<<"Please choose:"<< std::endl;
    std::cout<<"1. Add student"<< std::endl;
    std::cout<<"2. Edit student"<< std::endl;
    std::cout<<"3. Remove student"<< std::endl<< std::endl;

    std::cout<<"4. Add test"<< std::endl;
    std::cout<<"5. Edit test"<< std::endl;
    std::cout<<"6. Remove test"<< std::endl<< std::endl;

    std::cout<<"7. Add test result"<< std::endl;
    std::cout<<"8. Edit test result"<< std::endl;
    std::cout<<"9. Remove test result"<< std::endl<< std::endl;

    std::cout<<"10. Show all info"<< std::endl;
    std::cout<<"11. Exit"<< std::endl<< std::endl;

    std::cin>>user_selection;
        switch (user_selection){
            case 1:
                {std::cout<<"Enter student's name: ";
                std::cin>>aStudent_name;
                std::cout<<"Enter student's email address: ";
                std::cin>>aStudent_email;

                last_student_id ++;

                student aStudent(last_student_id, aStudent_name, aStudent_email);
                students.push_back(aStudent);
                break;}
            case 4:
                {std::cout<<"Enter course name: ";
                std::cin>>aCourse_name;
                std::cout<<"Enter test name: ";
                std::cin>>aTest_name;
                std::cout<<"Enter test date: ";
                std::cin>>aTest_date;

                last_test_id ++;

                test aTest(last_test_id, aCourse_name, aTest_name, aTest_date);
                break;}

    }
    std::cin.ignore();
    std::cin.get();

    return 0;


}
