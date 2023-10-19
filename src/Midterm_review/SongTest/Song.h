#include <string>

using std::string;

class Song
    //define my member attributes
{
private:
    string trackName;
    int bitrate;
    string genre;

public:
    //define constructors
    Song();
    explicit Song(string name, int bitrate, string genre);

    //member functions

    //getters and setters
    string getTrackName();
    int getBitrate();
    string getGenre();

    void setTrackName(string aName);
    void setBitrate(int aBitrate);
    void setGenre(int aGenre);

    void print();
};