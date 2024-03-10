#include <iostream>
#include <string>

class User {
private:
    std::string name;
    int birth_year;
    int birth_month;
    int birth_day;
    double salary;

public:
    
    User(const std::string& n, int year, int month, int day, double sal)
        : name(n), birth_year(year), birth_month(month), birth_day(day), salary(sal) {}

    
    int operator==(const User& other) const {
        if (birth_year == other.birth_year) {
            if (birth_month == other.birth_month) {
                return birth_day == other.birth_day ? 0 : (birth_day > other.birth_day ? 1 : -1);
            }
            return birth_month > other.birth_month ? 1 : -1;
        }
        return birth_year > other.birth_year ? 1 : -1;
    }

   
    double operator+(const User& other) const {
        return (salary + other.salary) / 2.0;
    }

    void operator+(int percent_increment) {
        salary += salary * (percent_increment / 100.0);
    }

    
    void displayDetails() const {
        std::cout << "Name: " << name << "\nBirth Year: " << birth_year << "\nBirth Month: " << birth_month
                  << "\nBirth Day: " << birth_day << "\nSalary: " << salary << "\n";
    }
};

int main() {
    
    std::string name1;
    int year1, month1, day1;
    double salary1;

    std::cout << "Enter details for the User 1:))\n";
    std::cout << "Name:) ";
    std::cin >> name1;
    std::cout << "Birth Year:) ";
    std::cin >> year1;
    std::cout << "Birth Month:) ";
    std::cin >> month1;
    std::cout << "Birth Day:) ";
    std::cin >> day1;
    std::cout << "Salary:)) ";
    std::cin >> salary1;

    User user1(name1, year1, month1, day1, salary1);

    
    std::string name2;
    int year2, month2, day2;
    double salary2;

    std::cout << "Enter details for User 2:))\n";
    std::cout << "Name:) ";
    std::cin >> name2;
    std::cout << "Birth Year:)";
    std::cin >> year2;
    std::cout << "Birth Month:) ";
    std::cin >> month2;
    std::cout << "Birth Day:) ";
    std::cin >> day2;
    std::cout << "Salary:) ";
    std::cin >> salary2;

    User user2(name2, year2, month2, day2, salary2);

    int result = user1 == user2;
    double average_sal = user1 + user2;

    user1.displayDetails();
    user2.displayDetails();

    std::cout << "Comparison result:) " << result << "\nAverage Salary:)" << average_sal << "\n";

   
    user1 + 5;
    user1.displayDetails();

   
    user2 + 10;
    user2.displayDetails();

    return 0;
}