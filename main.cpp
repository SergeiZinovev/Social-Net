#include <iostream>
#include "socialnet.h"

int main(char* ar[], int count)
{
    SocialNetwork sn;

    sn.addnewMan("Oleg");
    sn.addnewMan("Nikita");
    sn.addnewMan("Nastya");
    sn.addnewMan("Vanya");
    sn.addnewMan("Zhenya");

    sn.delMan("Vanya");
    sn.addnewMan("Anya");

    sn.addFriendship("Oleg", "Nikita");
    sn.addFriendship("Nikita", "Nastya");
    sn.addFriendship("Nastya", "Anya");
    sn.addFriendship("Anya", "Zhenya");

    sn.showThreeHandshakes();

    return 0;
}