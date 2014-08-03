#ifndef USER_H
#define USER_H

#include "packet.h"

class User
{
public:
    User();

    void send(Packet* packet);
};

#endif // USER_H
