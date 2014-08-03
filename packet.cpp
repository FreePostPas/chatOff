#include "packet.h"

Packet::Packet()
{
}

Packet::Packet(int opCode, int size, QString content) : m_opCode(opCode), m_size(size), m_content(content)
{
}
