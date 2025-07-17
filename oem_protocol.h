#ifndef OEM_PROTOCOL_H
#define OEM_PROTOCOL_H

#pragma pack(1)

typedef struct
{
    uint8_t FCU_WRITE;
    uint8_t DCF_WRITE;
    uint8_t HSCS_WRITE;
    uint8_t FCCB_WRITE;
    uint8_t RESERVE1;
    uint8_t RESERVE2;
    uint8_t RESERVE3;
    uint8_t OEM_SIZE;
}Check_Module;

typedef struct
{
    uint8_t FCU_READ;
    uint8_t DCF_READ;
    uint8_t HSCS_READ;
    uint8_t FCCB_READ;
    uint8_t OEM_SIZE;
    uint8_t RESERVE1;
    uint8_t RESERVE2;
    uint8_t RESERVE3;
}Read_Module;

#pragma pack()

#endif // OEM_PROTOCOL_H
