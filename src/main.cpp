#include <iostream>
    using std::cout;
    using std::endl;

#include <array>
    using std::array;

int main()
{
    const int ROWS{8};
    const int COLS{8};

    array<      array<int, COLS>,    ROWS> image{
        {
            {1,1,0,0,0,0,1,1},
            {1,0,1,1,1,1,0,1},
            {0,1,0,1,1,0,1,0},
            {0,1,1,1,1,1,1,0},
            {0,1,0,1,1,0,1,0},
            {0,1,1,0,0,1,1,0},
            {1,0,1,1,1,1,0,1},
            {1,1,0,0,0,0,1,1}
        }
    };

    for(int row_i{0}; row_i < image.size(); row_i++)
    {
        array<int, COLS> row = image[row_i];

        for(int col_i{0}; col_i < row.size(); col_i++)
        {
            if (row[col_i] == 0 )
            {
                cout << "0";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;


    }


    for(  array<int, COLS> row : image)
    {
        //row represents one row.
        for(int pixel : row)
        {
            if (pixel == 0 )
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }


}