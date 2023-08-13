#include <iostream>
#include <string>
using namespace std;

class Event{
    private:
    int participantID;
    string participantName;
    public:
    
    static int totalParticipants;
    
    void setParticipant(int ID, const string& name)
    {
        participantID = ID;
        participantName = name;
        totalParticipants++;
    }
    
    static int getTotalParticipants()
    {
        return totalParticipants;
    }
    
};
int Event::totalParticipants = 0;
int main()
{
    int N;
    cin >> N;
    for(int i = 0; i <N; i++)
    {
        int ID;
        string name;
        cin >> ID;
        cin.ignore();
    getline(cin, name);
    
    Event event;
    event.setParticipant(ID, name);
}
cout << "Total Participants: "<<Event::getTotalParticipants()<<endl;

return 0;
}



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
        int totalMins = (days * 24 * 60) + (hours * 60) + minutes;
        cout << "Total mins:" << totalMins << endl;
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
