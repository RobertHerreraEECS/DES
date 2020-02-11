#ifndef BITPERMUTATIONFUNCTIONS_H
#define BITPERMUTATIONFUNCTIONS_H

void initialPermutation(char* key,char*pk);
void splitCharByte(char* input,char* side1,char* side2);
void initialKeyPermutation(char* key,char*pk);
void keyBlock(char* cn,char* dn, char (*cs)[4],char (*ds)[4]);
void leftShift(char* message);
void concatSubBlocks(char (*cs)[4],char (*ds)[4], char (*subKey)[8]);

void PC2Permutation(char(*key)[8], char(*pk)[8]);
void reverseSubKeys(char(*key)[8], char(*reverse)[8]);// DECRYPTION

void Round(char* L0,char* R0, char (*subKey)[8],char (*R)[4],char (*L)[4], int index);

void sBoxLookup(char* sOutput, char* b);
void StraightPermutation(char* message, char* pk);
void shiftPBoxOutput(char* message);

void finalPermutation(char* message,char* ip);
void flipSplitBytes(char* output,char* R,char* L);
#endif
