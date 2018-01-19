#include <iostream>
#include <joueur.h>
#include <international.h>
#include <entraineur.h>


using namespace std;

int main()
{
    international* player = new international("MEHDI Benatia", 30, "Defender", 0, true);

    entraineur* A = new entraineur("some dude", 30000, 2019, 5);

    cout<< *player<<player->prime(2, 3);
    cout<<endl<<A->get_debutcontrat()<<endl;

    return 0;
}
