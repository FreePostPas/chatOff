#ifndef PACKET_H
#define PACKET_H

#include <QString>

enum designationCode    // Use to identify packet's type
{
    E_CONNECT_USER,
    E_DISCONNECT_USER,
    E_MESSAGE,
    E_NEW_CONTACT,
};

class Packet
{
public:
    Packet();
    Packet(int opCode, int size, QString content);

private:
    int m_opCode;
    int m_size;
    QString m_content;
};

#endif // PACKET_H
