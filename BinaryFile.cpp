
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream source("photo.jpg", ios::binary);
    ofstream destination("copy.jpg", ios::binary);

    if (!source)
    {
        cout << "Source file could not be opened.";
        return 1;
    }

    if (!destination)
    {
        cout << "Destination file could not be created.";
        return 1;
    }

    destination << source.rdbuf();

    source.close();
    destination.close();

    cout << "Binary file copied successfully.";

    return 0;
}
