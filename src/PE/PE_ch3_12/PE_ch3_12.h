// Class Date that has 3 pieces of info: a month (type int), a day (type int)
// and a year (type int)

class Date
{
private:
    int month{};
    int day{};
    int year{};

public:
    // Class constructor
    Date(int aMonth, int aDay, int aYear);
    int getMonth();
    int getDay();
    int getYear();

    void setMonth(int aMonth);
    void setDay(int aDay);
    void setYear(int aYear);
    void displayDate();

};