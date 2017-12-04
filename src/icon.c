#include <GLFW/glfw3.h>

static unsigned char data[] = { 
0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb8, 0x94, 0x61, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x32, 0x43, 0xbf, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdf, 0xaf, 0x66, 0xff, 0xdf, 0xb0, 0x68, 0xff, 0xe0, 0xb1, 0x69, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdf, 0xb0, 0x68, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdd, 0xad, 0x63, 0xff, 0xdf, 0xaf, 0x67, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe1, 0xb3, 0x6d, 0xff, 0xe2, 0xb4, 0x6e, 0xff, 0xe2, 0xb4, 0x6e, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe0, 0xb1, 0x6a, 0xff, 0xdf, 0xaf, 0x66, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdc, 0xab, 0x61, 0xff, 0xde, 0xaf, 0x65, 0xff, 0xe0, 0xb1, 0x6a, 0xff, 0xe2, 0xb4, 0x6e, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe4, 0xb8, 0x74, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe3, 0xb6, 0x71, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xde, 0xae, 0x65, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x32, 0x43, 0xbf, 0xff, 0x32, 0x43, 0xbf, 0xff, 0x32, 0x43, 0xbf, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdb, 0xa9, 0x5d, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe3, 0xb6, 0x71, 0xff, 0xe4, 0xb9, 0x75, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe6, 0xbb, 0x78, 0xff, 0xe4, 0xb9, 0x75, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe1, 0xb2, 0x6b, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdd, 0xac, 0x61, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0x29, 0x39, 0xb1, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdd, 0xad, 0x63, 0xff, 0xdf, 0xb0, 0x68, 0xff, 0xe1, 0xb4, 0x6d, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe5, 0xba, 0x78, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe7, 0xbd, 0x7c, 0xff, 0xe5, 0xba, 0x77, 0xff, 0xe3, 0xb6, 0x71, 0xff, 0xe1, 0xb3, 0x6c, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdd, 0xac, 0x62, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdb, 0xa9, 0x5d, 0xff, 0xdd, 0xac, 0x62, 0xff, 0xdf, 0xb0, 0x68, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe3, 0xb6, 0x72, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe1, 0xb2, 0x6c, 0xff, 0xdf, 0xaf, 0x67, 0xff, 0xdd, 0xac, 0x62, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdb, 0xa9, 0x5c, 0xff, 0xdd, 0xac, 0x61, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe0, 0xb2, 0x6b, 0xff, 0xe2, 0xb5, 0x6f, 0xff, 0xe3, 0xb7, 0x73, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe4, 0xb8, 0x75, 0xff, 0xe3, 0xb7, 0x72, 0xff, 0xe2, 0xb4, 0x6e, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdc, 0xaa, 0x5f, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xdf, 0xb0, 0x68, 0xff, 0xe1, 0xb2, 0x6c, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe2, 0xb5, 0x70, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe2, 0xb4, 0x6e, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xe0, 0xb1, 0x6a, 0xff, 0xe0, 0xb2, 0x6b, 0xff, 0xe0, 0xb2, 0x6a, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd7, 0x9f, 0x48, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xbe, 0x94, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xd5, 0xb8, 0x42, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xc3, 0xa7, 0x35, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb0, 0x88, 0x4f, 0xff, 0xb1, 0x8d, 0x5a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xb3, 0x8b, 0x52, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff, 0xcf, 0xb1, 0x3a, 0xff
};

void set_icon(GLFWwindow *win) {
    GLFWimage img = { 32, 32, data };
	glfwSetWindowIcon(win, 1, &img);
}