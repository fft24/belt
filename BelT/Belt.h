// This file contains implementation of BelT Algorithm
// with 256 bit key length
// Copyright 2011 http://plaintext.su

#ifndef BELT_H
#define BELT_H

#include <inttypes.h>

#if defined(__cplusplus)
extern "C" 
{
#endif

void belt_init(uint8_t* k, int kLen, uint8_t* ks);
void belt_encrypt(uint8_t* ks, uint8_t* inBlock, uint8_t* outBlock);
void belt_decrypt(uint8_t* ks, uint8_t* inBlock, uint8_t* outBlock);

#if defined(__cplusplus)
}
#endif

#endif