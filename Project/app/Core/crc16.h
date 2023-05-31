
#ifndef CRC16_H
#define CRC16_H

#ifdef __cplusplus
extern "C" {
#endif

unsigned short pppfcs16(register unsigned short fcs, register unsigned char *cp, register int len);
int crc16_calc(unsigned short crc_init, register unsigned char *cp, register int len);


#ifdef __cplusplus
}
#endif

#endif
