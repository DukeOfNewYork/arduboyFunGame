const byte PROGMEM cube[] = 
{16,16,
0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x0f, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x0f, 
0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x03, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x03, 
0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 
0xe0, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 
0xf8, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0xf8, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 
0xe0, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0xa5, 0xa1, 
0xa1, 0xa5, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x03, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0xf0, 
0xf0, 0x80, 0x80, 0xff, 0x00, 0x00, 0x00, 0x03, 

};


const byte PROGMEM QuestMaker[] = {
  5,8,
0x20, 0x60, 0xff, 0x60, 0x20, 0x00, 0x60, 0xff, 
0x60, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 
0x60, 0xff, 0x60, 0x00, 
};

const byte PROGMEM player[] = {
  11,16,

0x60, 0x90, 0xf8, 0xff, 0xbf, 0xff, 0xf8, 0xf0, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x0f, 0x0e, 
0x0f, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x30, 
0xf8, 0xff, 0xbf, 0xff, 0xf8, 0x10, 0x10, 0x10, 
0x10, 0x00, 0x20, 0x3f, 0x0f, 0x0e, 0x0f, 0x7f, 
0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0xf8, 0xff, 
0xbf, 0xff, 0xf8, 0x10, 0x10, 0x10, 0x10, 0x00, 
0x00, 0x7f, 0x0f, 0x0e, 0x2f, 0x3f, 0x00, 0x00, 
0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0xf8, 0xff, 
0xbf, 0xff, 0xf8, 0x30, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x7f, 0x0f, 0x0e, 0x0f, 0x3f, 0x20, 0x00, 
0x10, 0x10, 0x10, 0x10, 0xf8, 0xff, 0xbf, 0xff, 
0xf8, 0x10, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3f, 
0x2f, 0x0e, 0x0f, 0x7f, 0x00, 0x00, 

};
