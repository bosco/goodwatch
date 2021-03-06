/*! \file bcd.c
  \brief Functions for converting decimal to BCD.
  
  This uses a 60-byte ROM table to convert decimal to BCD.  It is not
  guaranteed outside that range, and it does not use the hardware BCD
  engine of the CC430F6147.
*/


//! ROM table for conversion to BCD.
const char bcdtable[60]={
     0,    1,    2,    3,    4,    5,    6,    7,    8,    9,
  0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19,
  0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29,
  0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39,
  0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
  0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59
};

