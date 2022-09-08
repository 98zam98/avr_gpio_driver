#ifndef MACROS
#define MACROS

#define setbit(reg,bit) reg|=1<<bit
#define clearbit(reg,bit) reg&=~(1<<bit)
#define togglebit(reg,bit) reg^=1<<bit
#define setbit_in_assign(reg,bit) (reg|(1<<bit))
#define clearbit_in_assign(reg,bit) (reg&(~(1<<bit)))
#define togglebit_in_assign(reg,bit) (reg^1<<bit)

#define bitWrite(reg, bit, value) reg=((value)?setbit_in_assign(reg,bit):clearbit_in_assign(reg,bit))
#define bitRead(value, bit) (((value) >> (bit)) & 0x01)

#endif