#include <cmath>
#include <string>

class DollarAmount
{
public:
    explicit DollarAmount(int64_t value);

    void add(DollarAmount right);

    void subtract(DollarAmount right);

    void addInterest(int rate, int divisor);

    std::string toString();

    int pennyCount(int dollarN, int centN);


private:
    int64_t amount{0};
};