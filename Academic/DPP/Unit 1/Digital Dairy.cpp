#include <iostream>
using namespace std;

class DigitalDiary {
private:
    int hours, minutes, days, months, years;

public:
    void setDateTime(int h, int m, int d, int mo, int y) {
        hours = h;
        minutes = m;
        days = d;
        months = mo;
        years = y;
    }

    bool isValidDateTime() {
        return (days > 0 && days <= 31 && months > 0 && months <= 12 && years > 0 && years < 9999 &&
                hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60);
    }

    void displayFormattedDateTime() {
        if (isValidDateTime()) {
            cout << "Date:" << days << "-" << months << "-" << years << endl;
            cout << "Time:" << hours << " hrs " << minutes << " mins" << endl;
            cout << "Total mins:" << (days * 24 * 60) + (hours * 60) + minutes << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
};

int main() {
    int h, m, d, mo, y;
    cin >> h >> m >> d >> mo >> y;

    DigitalDiary diary;
    diary.setDateTime(h, m, d, mo, y);
    diary.displayFormattedDateTime();

    return 0;
}









#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    if (n >= 2)
    {
        std::cout << "Second Smallest Element: " << arr[1] << std::endl;
    }
    else
    {
        std::cout << "Array size should be at least 2." << std::endl;
    }
    return 0;
}












#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int position;
    std::cin >> position;

    if (position >= 1 && position <= n) {
        std::cout << "Original array: ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        arr.erase(arr.begin() + position - 1);

        std::cout << "Updated array: ";
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid position!" << std::endl;
    }

    return 0;
}