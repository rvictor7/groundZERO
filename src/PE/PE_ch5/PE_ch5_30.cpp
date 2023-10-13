// Enchance class DollarAmount (fig.5.8) with a constructor
// that receives two parameters representing the
/* whole # of dollars and the whole # of cents.
Use these to calculate and store in the data member amount
the total number of pennies. Test the class with your
new constructor.*/

#include <cmath>
#include <string>
#include "PE_ch5_30.h"

DollarAmount::DollarAmount(int64_t value) : amount {value}
{

}

void DollarAmount::add(DollarAmount right) {
        amount += right.amount;
}

void DollarAmount::subtract(DollarAmount right) {

    amount -= right.amount;
}

void DollarAmount::addInterest(int rate, int divisor){

    DollarAmount interest{
        (amount * rate + divisor / 2) /divisor
    };
    add(interest);
}

std::string DollarAmount::toString(){
    std::string dollars{std::to_string(amount/100)};
    std::string cents{std::to_string(std::abs(amount%100))};
    return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
}

int DollarAmount::pennyCount(int dollarN, int centN)
{
    int pennyNDollars = dollarN * 100;
    int total = pennyNDollars + centN;
    return total;
}