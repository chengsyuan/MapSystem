//
// Created by 派星星 on 2019/11/11.
//

#ifndef CPP_BACKEND_RECORD_H
#define CPP_BACKEND_RECORD_H

#endif //CPP_BACKEND_RECORD_H

#include "global.h"

class Record{
    uint32_t _id;
    uint16_t _name_size;
    uint32_t _info;
    char *_name;
};

int readDat();

void endianChange(struct _struct_record &t);

struct _struct_record {
    uint16_t _struct_size;
    uint32_t _id;
    uint16_t _name_size;
    uint32_t _info;
} __attribute__((packed)); // disable alignment


//#define byte unsigned char
//struct _struct_record{
//    byte _struct_size[2];
//    byte _id[4];
//    byte _name_size[2];
//    byte _info[4];
//};

//class Record{
//    _struct_record _record;
//    char * _name;
//
//
//};