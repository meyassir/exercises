#include <iostream>
#include <joueur.h>
#include <international.h>


using namespace std;

int main()
{
    international* player = new international("MEHDI Benatia", 30, "Defender", 0, true);

    cout<< *player<<player->prime(2, 3);

    return 0;
}
