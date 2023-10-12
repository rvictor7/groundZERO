#include <string>
// This is the header file of the ordered pair class


class orderedPair
{
private:
    int xValue{};
    int yValue{};

public:
    orderedPair(int x, int y);

    // x+ = b x ---- singular value
    void addXY(int x, int y);
    // adds y2 to y1 and x2 to x1 to create new ordered pair ---- ordered pair
    void addOrderedPairs();

    void subXY(int x, int y);

    void subOrderedPairs();

    // x * y
    int multiply();
    // x ^ y
    int exp();

    void printOP();


};