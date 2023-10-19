#include "Song.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;


// define constructors
Song::Song() : trackName(""), bitrate(0), genre(""){}
Song::Song(string name, int bitrate, string genre) : trackName(name), bitrate(bitrate), genre(genre)
{

}

    //member functions

    //getters and setters
string Song::getTrackName()
{
    return trackName;
}
int Song::getBitrate()
{
    return bitrate;
}
string Song::getGenre()
{
    return genre;
}

void Song::setTrackName(string aName)
{
    trackName = aName;
}
void Song::setBitrate(int aBitrate)
{
    bitrate = aBitrate;
}
void Song::setGenre(int aGenre)
{
    genre = aGenre;
}

void Song::print()
{
    cout << "|" << setw(30) << trackName << "|" << setw(15) << genre << "|" <<
        setw(10) << bitrate << "bps |" << setw(10) << (bitrate/1000) << "|" << "Kbps |" << endl;
}