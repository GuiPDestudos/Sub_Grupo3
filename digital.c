#include "digital.h"

double b_kb(double byte){
    return byte / 1024;
};

double b_mb(double byte){
    return byte / 1048576;
};

double kb_b(double kilo_byte){
    return kilo_byte * 1024;
};

double kb_mb(double kilo_byte){
    return kilo_byte / 1024;
};

double mb_b(double mega_byte){
    return mega_byte * 1048576;
};

double mb_kb(double mega_byte){
    return mega_byte * 1024;
};