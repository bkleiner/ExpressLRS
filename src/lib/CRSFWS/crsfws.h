#pragma once

#include <cstdint>
#include "FIFO.h"

class CRSFWS
{
public:
    FIFO<2048> FIFOin;
    FIFO<2048> FIFOout;
};

extern CRSFWS crsfWS;
