#include "Song.h"
#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::setw;
using std::string;



int main()
{
    Song ourSong("Our Song", 32000, "Pop");

    ourSong.print();
    Song catalog[100];
    int numSongs = 0;
    int choice;

    do{
        // my main menu
        cout << "==================" << endl;
        cout << "1) Add Song" << endl;
        cout << "2) Print Songs" << endl;
        cout << "99) Exit" << endl;
        cout << "==================" <<  endl;
        cout << "Enter Option: ";
        cin >> choice;



        string trackName;
        string genre;
        int bitrate;
        switch (choice)
        {
            case (1):
                //declare the variables i need to get for my Song constructor

                //get input
                cout << "Please input song name: " << endl;
                cin.ignore();
                getline(cin,trackName);
                //cin >> trackName;
                cout << "Please input the genre of the song: " << endl;
                cin >> genre;

                cout << "please input the bitrate of the song" << endl;
                cin >> bitrate;
                catalog[numSongs++] = Song(trackName, bitrate, genre);
                //numSongs++
                break;
            case (2):
                //print out the songs
                //pring out header
                cout << "|" << setw(30) << "Track" << "|" << setw(15) << "Genre" << "|" <<
                setw(10) << "Bitrate" << setw(10) << "|" << "Kbps. |" << endl;
                for (int i=0; i <numSongs; i++)
                {
                    catalog[i].print();
                }
                break;
            default:
            cout << "Invalid option. Try Again" << endl;

        }
    }while (choice != 99);

    cout << "Ending Program. Goodbye." << endl;
}