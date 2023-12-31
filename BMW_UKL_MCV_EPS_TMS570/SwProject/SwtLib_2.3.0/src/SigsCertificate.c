
///* NEXTEER SWT */ - Nexteer added for uint8 defn
#include "Std_Types.h"


/* SigS certificate extracted from SigsCertificate.der. */
const uint8 sigsCert[] = 
{
    0x30, 0x82, 0x02, 0x9f, 0x30, 0x82, 0x01, 0x87, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x02, 0x03,
    0xf2, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x04, 0x05, 0x00,
    0x30, 0x69, 0x31, 0x13, 0x30, 0x11, 0x06, 0x0a, 0x09, 0x92, 0x26, 0x89, 0x93, 0xf2, 0x2c, 0x64,
    0x01, 0x19, 0x16, 0x03, 0x63, 0x6f, 0x6d, 0x31, 0x18, 0x30, 0x16, 0x06, 0x0a, 0x09, 0x92, 0x26,
    0x89, 0x93, 0xf2, 0x2c, 0x64, 0x01, 0x19, 0x16, 0x08, 0x62, 0x6d, 0x77, 0x67, 0x72, 0x6f, 0x75,
    0x70, 0x31, 0x0c, 0x30, 0x0a, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x03, 0x70, 0x6b, 0x69, 0x31,
    0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13, 0x0b, 0x62, 0x6d, 0x77, 0x2d, 0x66, 0x7a,
    0x67, 0x2d, 0x70, 0x6b, 0x69, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x0b,
    0x66, 0x7a, 0x67, 0x2d, 0x72, 0x6f, 0x6f, 0x74, 0x2d, 0x63, 0x61, 0x30, 0x1e, 0x17, 0x0d, 0x30,
    0x36, 0x30, 0x37, 0x31, 0x39, 0x31, 0x31, 0x33, 0x31, 0x32, 0x30, 0x5a, 0x17, 0x0d, 0x31, 0x31,
    0x30, 0x37, 0x32, 0x30, 0x31, 0x31, 0x33, 0x31, 0x32, 0x30, 0x5a, 0x30, 0x6a, 0x31, 0x13, 0x30,
    0x11, 0x06, 0x0a, 0x09, 0x92, 0x26, 0x89, 0x93, 0xf2, 0x2c, 0x64, 0x01, 0x19, 0x16, 0x03, 0x63,
    0x6f, 0x6d, 0x31, 0x18, 0x30, 0x16, 0x06, 0x0a, 0x09, 0x92, 0x26, 0x89, 0x93, 0xf2, 0x2c, 0x64,
    0x01, 0x19, 0x16, 0x08, 0x62, 0x6d, 0x77, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x31, 0x0c, 0x30, 0x0a,
    0x06, 0x03, 0x55, 0x04, 0x0a, 0x13, 0x03, 0x70, 0x6b, 0x69, 0x31, 0x14, 0x30, 0x12, 0x06, 0x03,
    0x55, 0x04, 0x0b, 0x13, 0x0b, 0x62, 0x6d, 0x77, 0x2d, 0x66, 0x7a, 0x67, 0x2d, 0x70, 0x6b, 0x69,
    0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x0c, 0x43, 0x43, 0x43, 0x2d, 0x53,
    0x69, 0x67, 0x53, 0x2d, 0x4b, 0x65, 0x79, 0x30, 0x5a, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
    0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x49, 0x00, 0x30, 0x46, 0x02, 0x41, 0x00,
    0x9f, 0x1d, 0xc9, 0xb8, 0x3d, 0x10, 0xc9, 0x13, 0xd3, 0x05, 0x3a, 0xe0, 0xe7, 0x0c, 0xaa, 0x0d,
    0xed, 0x4f, 0x13, 0x4e, 0x5a, 0xc1, 0x5b, 0x79, 0x47, 0x6b, 0x5c, 0xec, 0x4d, 0xe0, 0x86, 0xc7,
    0xa5, 0x3f, 0x71, 0x19, 0x75, 0x2a, 0xca, 0xda, 0xd5, 0xcb, 0x88, 0xa1, 0xfe, 0x0f, 0x3c, 0xf7,
    0xa6, 0xcc, 0x6d, 0xe0, 0xda, 0xc7, 0xb4, 0x88, 0x63, 0xe6, 0x3a, 0x55, 0x6f, 0x82, 0x16, 0x6b,
    0x02, 0x01, 0x07, 0xa3, 0x1a, 0x30, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x1d, 0x25, 0x01, 0x01,
    0xff, 0x04, 0x0c, 0x30, 0x0a, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x03, 0x30,
    0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x04, 0x05, 0x00, 0x03, 0x82,
    0x01, 0x01, 0x00, 0x4d, 0x39, 0xea, 0x14, 0xef, 0x79, 0xe8, 0xaa, 0xbb, 0x68, 0xc0, 0x28, 0xa2,
    0x4e, 0x73, 0xce, 0xa6, 0x11, 0x31, 0x03, 0x1b, 0x01, 0xf4, 0x96, 0xb6, 0x0d, 0x0d, 0xbc, 0x0e,
    0x63, 0x47, 0x94, 0xa0, 0x35, 0x97, 0x62, 0x3d, 0x36, 0x0d, 0x6d, 0x36, 0xd0, 0x79, 0x2d, 0x60,
    0x73, 0x58, 0x98, 0x66, 0x94, 0xcb, 0x3b, 0xd1, 0x57, 0x46, 0xb6, 0xb8, 0x06, 0x6b, 0xa1, 0x34,
    0x24, 0x20, 0x4d, 0xdb, 0x3a, 0xd4, 0x84, 0xb7, 0x1c, 0x0b, 0x21, 0x34, 0x3d, 0xfc, 0xcf, 0x0b,
    0xa0, 0x14, 0xc9, 0x5c, 0x34, 0xbe, 0x2c, 0x1a, 0x04, 0xa1, 0x74, 0x81, 0x61, 0x3b, 0x49, 0x97,
    0x05, 0x93, 0xd8, 0x47, 0xd9, 0xce, 0x3b, 0x77, 0x96, 0x36, 0x41, 0xec, 0x9f, 0xf9, 0x98, 0xd9,
    0x88, 0x7c, 0x78, 0xf4, 0xa7, 0xc8, 0x3f, 0x2e, 0x56, 0xa9, 0xb4, 0x13, 0xb0, 0x58, 0x74, 0xba,
    0x66, 0x8f, 0x6c, 0x57, 0xe9, 0x9e, 0xc3, 0xe4, 0xa2, 0xd4, 0x87, 0xfb, 0xb1, 0x4b, 0xe8, 0x9f,
    0x13, 0x8f, 0x0b, 0x51, 0xcd, 0x8d, 0x6b, 0x48, 0x29, 0xc1, 0x52, 0xa5, 0xbe, 0xa0, 0x57, 0xd5,
    0xeb, 0x0f, 0x49, 0x83, 0x98, 0x09, 0x6b, 0x62, 0xc7, 0xa2, 0x7d, 0xcf, 0x5f, 0xf7, 0x51, 0x22,
    0x16, 0xe0, 0x1d, 0x4c, 0xc1, 0x77, 0x34, 0xca, 0x67, 0x9e, 0xd8, 0xc3, 0xf5, 0x62, 0xda, 0xc7,
    0x34, 0x4f, 0x95, 0x5c, 0x54, 0x89, 0x94, 0xf9, 0x38, 0x42, 0xc7, 0x5b, 0x24, 0x61, 0x14, 0xa8,
    0xf9, 0xcd, 0xb0, 0x08, 0xef, 0xa1, 0xe9, 0x07, 0x17, 0x07, 0x3a, 0x87, 0x92, 0xd4, 0xe6, 0xd0,
    0x31, 0xce, 0x8a, 0x3a, 0xa8, 0xc5, 0xa9, 0x63, 0x67, 0x60, 0x39, 0x38, 0xad, 0xaf, 0x0e, 0x96,
    0x67, 0x78, 0x8a, 0x8c, 0x69, 0xbe, 0x3b, 0x1f, 0xda, 0xfe, 0x0e, 0xdc, 0x74, 0x65, 0x41, 0x8a,
    0xc6, 0x3a, 0x20
};
