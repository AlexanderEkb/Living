int BlocksCount = 0x8B;

const char Block0x00[]={0x08, 0x03,
     0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 
     0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 
     0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8};

const char Block0x01[]={0x04, 0x04,
     0xB3, 0xB3, 0xA9, 0xA8, 
     0xAA, 0xAB, 0xAB, 0xB2, 
     0x01, 0x06, 0x02, 0x00, 
     0x04, 0x03, 0x00, 0x00};

const char Block0x02[]={0x04, 0x02,
     0x15, 0x16, 0x17, 0x18, 
     0x19, 0x1A, 0x1B, 0x1C};

const char Block0x03[]={0x03, 0x03,
     0x2C, 0x8A, 0x8A, 
     0xEF, 0x2C, 0x8A, 
     0xEE, 0xEF, 0x2C};

const char Block0x04[]={0x08, 0x04,
     0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 
     0xAA, 0xAA, 0xAB, 0xAA, 0xAB, 0xAA, 0xAB, 0xAB, 
     0x01, 0x06, 0x06, 0x01, 0x06, 0x01, 0x06, 0x01, 
     0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04};

const char Block0x05[]={0x04, 0x06,
     0xEE, 0xEF, 0xEF, 0xEE, 
     0xEF, 0xEE, 0xEE, 0xEF, 
     0xEE, 0xEF, 0xEF, 0xEE, 
     0xEF, 0xEE, 0xEF, 0xEF, 
     0xEE, 0xEF, 0xEE, 0xEF, 
     0xEF, 0xEE, 0xEF, 0xEE};

const char Block0x06[]={0x03, 0x03,
     0x8A, 0x8A, 0xF0, 
     0x8A, 0xF0, 0xEE, 
     0xF0, 0xEE, 0xEF};

const char Block0x07[]={0x04, 0x04,
     0xB0, 0xB1, 0xB3, 0xB3, 
     0xAF, 0xAA, 0xAB, 0xAA, 
     0x00, 0x07, 0x06, 0x01, 
     0x00, 0x00, 0x08, 0x04};

const char Block0x08[]={0x03, 0x03,
     0xEE, 0xEF, 0xEF, 
     0xEF, 0xEE, 0xEE, 
     0xEE, 0xEF, 0xEF};

const char Block0x09[]={0x0A, 0x01,
     0xDE, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0x84};

const char Block0x0A[]={0x07, 0x07,
     0x0A, 0x0B, 0x0D, 0x0E, 0x0F, 0x11, 0x12, 
     0x00, 0x0C, 0x00, 0x14, 0x10, 0x13, 0x00, 
     0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 
     0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 
     0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 
     0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 
     0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00};

const char Block0x0B[]={0x08, 0x0C,
     0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x27, 0x20, 0x00, 
     0x2E, 0x2F, 0x2D, 0x2E, 0x2F, 0x8A, 0x1F, 0x29, 
     0x3C, 0x3C, 0x3C, 0x3D, 0x3E, 0x1F, 0x1F, 0x1F, 
     0x3F, 0x40, 0x3F, 0x40, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F, 
     0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x1F};

const char Block0x0C[]={0x08, 0x02,
     0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 
     0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A};

const char Block0x0D[]={0x01, 0x01,
     0x26};

const char Block0x0E[]={0x01, 0x01,
     0x28};

const char Block0x0F[]={0x08, 0x03,
     0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 0x8A, 
     0x8A, 0x8A, 0x8A, 0xF2, 0xF3, 0x8A, 0x8A, 0x8A, 
     0xF2, 0xF3, 0xF2, 0x3C, 0x44, 0xF3, 0xF2, 0xF3};

const char Block0x10[]={0x02, 0x01,
     0x5B, 0x5C};

const char Block0x11[]={0x05, 0x05,
     0xEE, 0xEF, 0xEE, 0xEF, 0x03, 
     0xEE, 0xEF, 0xEE, 0x03, 0x00, 
     0xEF, 0xEF, 0x03, 0x00, 0x00, 
     0xEF, 0x03, 0x00, 0x00, 0x00, 
     0x03, 0x00, 0x00, 0x00, 0x00};

const char Block0x12[]={0x02, 0x01,
     0xEE, 0xEF};

const char Block0x13[]={0x02, 0x04,
     0xEE, 0xBF, 
     0xEE, 0xEF, 
     0xEF, 0x03, 
     0x03, 0x00};

const char Block0x14[]={0x10, 0x02,
     0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 
     0xAA, 0xAA, 0xAB, 0xAA, 0xAB, 0xAA, 0xAB, 0xAB, 0xAA, 0xAA, 0xAB, 0xAA, 0xAA, 0xAA, 0xAB, 0xAA};

const char Block0x15[]={0x05, 0x04,
     0x08, 0xEF, 0xEE, 0xEF, 0xEE, 
     0x00, 0x08, 0xEE, 0xEE, 0xEF, 
     0x00, 0x00, 0x08, 0xEF, 0xEE, 
     0x00, 0x00, 0x00, 0xEE, 0xEF};

const char Block0x16[]={0x08, 0x01,
     0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89};

const char Block0x17[]={0x07, 0x02,
     0x0A, 0x0B, 0x0D, 0x0E, 0x0F, 0x11, 0x12, 
     0x00, 0x0C, 0x00, 0x14, 0x10, 0x13, 0x00};

const char Block0x18[]={0x01, 0x08,
     0x1E, 
     0x1D, 
     0x5D, 
     0x1D, 
     0x1E, 
     0x1D, 
     0x5D, 
     0x1D};

const char Block0x19[]={0x06, 0x04,
     0x00, 0x00, 0x61, 0x60, 0x00, 0x00, 
     0x00, 0x61, 0x3B, 0x3A, 0x60, 0x00, 
     0x61, 0x3B, 0x3A, 0x3B, 0x3A, 0x60, 
     0x5E, 0x3A, 0x3B, 0x3B, 0x3A, 0x5F};

const char Block0x1A[]={0x06, 0x01,
     0x62, 0x63, 0x00, 0x00, 0x62, 0x63};

const char Block0x1B[]={0x08, 0x02,
     0x21, 0x3A, 0x3B, 0x3A, 0x3B, 0x3A, 0x05, 0x22, 
     0x00, 0x21, 0x05, 0x21, 0x05, 0x22, 0x00, 0x00};

const char Block0x1C[]={0x08, 0x04,
     0x5E, 0x45, 0x3A, 0x43, 0x3A, 0x3B, 0x3A, 0x5F, 
     0x21, 0x05, 0x3B, 0x3A, 0x3B, 0x43, 0x3A, 0x22, 
     0x00, 0x00, 0x21, 0x05, 0x45, 0x3A, 0x5F, 0x00, 
     0x00, 0x00, 0x00, 0x00, 0x21, 0x22, 0x00, 0x00};

const char Block0x1D[]={0x08, 0x03,
     0x21, 0x05, 0x3B, 0x45, 0x3B, 0x3A, 0x3B, 0x22, 
     0x00, 0x00, 0x21, 0x3B, 0x43, 0x05, 0x22, 0x00, 
     0x00, 0x00, 0x00, 0x21, 0x22, 0x00, 0x00, 0x00};

const char Block0x1E[]={0x01, 0x01,
     0x3B};

const char Block0x1F[]={0x08, 0x02,
     0xCB, 0xCC, 0xCB, 0xCC, 0xCB, 0xCC, 0xCB, 0xCC, 
     0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA};

const char Block0x20[]={0x07, 0x01,
     0x82, 0x00, 0x00, 0x83, 0x00, 0x00, 0x82};

const char Block0x21[]={0x01, 0x05,
     0xEE, 
     0xEF, 
     0xEE, 
     0xEF, 
     0x03};

const char Block0x22[]={0x08, 0x03,
     0xE7, 0xF1, 0xE7, 0xF1, 0xE8, 0xE7, 0xF1, 0xE8, 
     0xE8, 0xE1, 0x00, 0xE2, 0xE1, 0x00, 0x00, 0xE2, 
     0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

const char Block0x23[]={0x08, 0x02,
     0xF1, 0xE7, 0xE8, 0xE7, 0xE8, 0xE7, 0xE8, 0xE8, 
     0xE7, 0xE8, 0xF1, 0xE8, 0xF1, 0xE7, 0xE8, 0xE7};

const char Block0x24[]={0x03, 0x03,
     0xE2, 0xE7, 0xE1, 
     0x00, 0xE8, 0x00, 
     0x00, 0xE2, 0x00};

const char Block0x25[]={0x08, 0x02,
     0xB4, 0xB4, 0xB4, 0xB4, 0xB4, 0xB4, 0xB4, 0xB4, 
     0xB8, 0xB8, 0xB8, 0xB8, 0xB8, 0xB8, 0xB8, 0xB8};

const char Block0x26[]={0x04, 0x04,
     0xAD, 0xAE, 0xB4, 0xB4, 
     0xAC, 0xB8, 0xB8, 0xB8, 
     0x00, 0xE3, 0xE7, 0xE8, 
     0x00, 0x00, 0xE3, 0xE8};

const char Block0x27[]={0x03, 0x03,
     0x00, 0x00, 0xDF, 
     0x00, 0xDF, 0xF1, 
     0xDF, 0xE8, 0xE7};

const char Block0x28[]={0x05, 0x05,
     0xE8, 0xF1, 0xE8, 0xE7, 0xE8, 
     0xF1, 0xE7, 0xE8, 0xE8, 0xF1, 
     0xE7, 0xE8, 0xE7, 0xE8, 0xE7, 
     0xE8, 0xE7, 0xF1, 0xE7, 0xF1, 
     0xE7, 0xE8, 0xE7, 0xE7, 0xE8};

const char Block0x29[]={0x04, 0x04,
     0xB4, 0xB4, 0xB7, 0xB6, 
     0xB8, 0xB8, 0xB8, 0xB5, 
     0xE7, 0xF1, 0xE1, 0x00, 
     0xE8, 0xE1, 0x00, 0x00};

const char Block0x2A[]={0x02, 0x02,
     0x8E, 0x8F, 
     0x90, 0x91};

const char Block0x2B[]={0x08, 0x02,
     0xF1, 0xE7, 0xE8, 0xE7, 0xE8, 0xE7, 0xE8, 0xE8, 
     0xE2, 0xE1, 0xE2, 0xE1, 0xE2, 0xE1, 0xE2, 0xE1};

const char Block0x2C[]={0x03, 0x03,
     0xE0, 0x00, 0x00, 
     0xF1, 0xE0, 0x00, 
     0xE7, 0xE8, 0xE0};

const char Block0x2D[]={0x05, 0x03,
     0xE2, 0xF1, 0xE8, 0xE7, 0xE8, 
     0x00, 0xE2, 0xF1, 0xE8, 0xE8, 
     0x00, 0x00, 0xE2, 0xE8, 0xE7};

const char Block0x2E[]={0x02, 0x01,
     0x4E, 0x4F};

const char Block0x2F[]={0x05, 0x03,
     0xE7, 0xF1, 0xE8, 0xE7, 0xE1, 
     0xF1, 0xE7, 0xF1, 0xE1, 0x00, 
     0xE8, 0xF1, 0xE1, 0x00, 0x00};

const char Block0x30[]={0x08, 0x01,
     0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF};

const char Block0x31[]={0x03, 0x03,
     0xDD, 0x8A, 0x8A, 
     0xE7, 0xDD, 0x8A, 
     0xE8, 0xF1, 0xDD};

const char Block0x32[]={0x03, 0x03,
     0x8A, 0x8A, 0xDC, 
     0x8A, 0xDC, 0xE7, 
     0xDC, 0xF1, 0xE8};

const char Block0x33[]={0x02, 0x02,
     0xDF, 0xE0, 
     0xE8, 0xE0};

const char Block0x34[]={0x04, 0x07,
     0x1F, 0x1F, 0x1F, 0x1F, 
     0x1F, 0x1F, 0x1F, 0x1F, 
     0x1F, 0x1F, 0x1F, 0x1F, 
     0x1F, 0x1F, 0x1F, 0x1F, 
     0x1F, 0x1F, 0x1F, 0x1F, 
     0x1F, 0x1F, 0x1F, 0x1F, 
     0x1F, 0x1F, 0x1F, 0x1F};

const char Block0x35[]={0x05, 0x04,
     0x00, 0x00, 0xDF, 0xE0, 0x00, 
     0x00, 0xDF, 0xE8, 0xE8, 0x00, 
     0x00, 0xE8, 0xE7, 0xE8, 0xE0, 
     0xDF, 0xE7, 0xF1, 0xE8, 0xE8};

const char Block0x36[]={0x03, 0x03,
     0xE7, 0xE8, 0xF1, 
     0xF1, 0xE7, 0xE8, 
     0xE7, 0xE8, 0xE7};

const char Block0x37[]={0x02, 0x01,
     0xEA, 0xEB};

const char Block0x38[]={0x08, 0x01,
     0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9};

const char Block0x39[]={0x03, 0x08,
     0x6A, 0x68, 0x69, 
     0x00, 0x68, 0x00, 
     0x00, 0x68, 0x00, 
     0x00, 0x68, 0x00, 
     0x00, 0x68, 0x00, 
     0x00, 0x68, 0x00, 
     0x00, 0x68, 0x00, 
     0x00, 0x68, 0x00};

const char Block0x3A[]={0x08, 0x02,
     0xDB, 0xDA, 0xDB, 0xDA, 0xDB, 0xDA, 0xDB, 0xDA, 
     0xE7, 0xE8, 0xF1, 0xE7, 0xE8, 0xE7, 0xF1, 0xE8};

const char Block0x3B[]={0x01, 0x08,
     0x68, 
     0x68, 
     0x68, 
     0x68, 
     0x68, 
     0x68, 
     0x68, 
     0x68};

const char Block0x3C[]={0x02, 0x02,
     0x2B, 0x23, 
     0x6B, 0x6C};

const char Block0x3D[]={0x08, 0x03,
     0xD8, 0xD7, 0xD8, 0xD7, 0xD8, 0xD7, 0xD8, 0xD7, 
     0xE8, 0xF1, 0xE7, 0xE8, 0xE8, 0xE7, 0xE8, 0xE7, 
     0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9};

const char Block0x3E[]={0x05, 0x05,
     0x00, 0x00, 0x00, 0x00, 0x24, 
     0x00, 0x00, 0x00, 0x24, 0x25, 
     0x00, 0x00, 0x24, 0x25, 0x25, 
     0x00, 0x24, 0x25, 0x25, 0x25, 
     0x24, 0x25, 0x25, 0x25, 0x25};

const char Block0x3F[]={0x04, 0x04,
     0x2A, 0x00, 0x00, 0x00, 
     0x25, 0x2A, 0x00, 0x00, 
     0x25, 0x25, 0x2A, 0x00, 
     0x25, 0x25, 0x25, 0x2A};

const char Block0x40[]={0x02, 0x03,
     0x6D, 0x6E, 
     0x6F, 0x70, 
     0x71, 0x00};

const char Block0x41[]={0x06, 0x03,
     0x51, 0x51, 0x00, 0x00, 0x52, 0x52, 
     0x51, 0x53, 0x53, 0x53, 0x53, 0x52, 
     0x51, 0x51, 0x00, 0x00, 0x52, 0x52};

const char Block0x42[]={0x08, 0x07,
     0x00, 0x00, 0x73, 0x72, 0x74, 0x75, 0x00, 0x00, 
     0x73, 0x72, 0x59, 0x59, 0x59, 0x59, 0x74, 0x75, 
     0x00, 0x00, 0x54, 0x54, 0x54, 0x54, 0x00, 0x00, 
     0x00, 0x55, 0x54, 0x54, 0x54, 0x54, 0x58, 0x00, 
     0x00, 0x54, 0x54, 0x5A, 0x5A, 0x54, 0x54, 0x00, 
     0x00, 0x56, 0x54, 0x5A, 0x5A, 0x54, 0x57, 0x00, 
     0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6};

const char Block0x43[]={0x04, 0x03,
     0xE4, 0xE5, 0xE5, 0xE6, 
     0xC4, 0xC4, 0xC4, 0xC2, 
     0xC8, 0xC7, 0xC6, 0xC5};

const char Block0x44[]={0x04, 0x06,
     0x79, 0x79, 0x79, 0x79, 
     0x7A, 0x7B, 0x7B, 0x7A, 
     0x79, 0x79, 0x79, 0x79, 
     0x7A, 0x7B, 0x7B, 0x7A, 
     0x79, 0x79, 0x79, 0x79, 
     0x7A, 0x7B, 0x7B, 0x7A};

const char Block0x45[]={0x02, 0x03,
     0x71, 0x00, 
     0x65, 0x66, 
     0x71, 0x00};

const char Block0x46[]={0x01, 0x01,
     0x50};

const char Block0x47[]={0x03, 0x02,
     0xEE, 0xA8, 0x00, 
     0xEF, 0xEF, 0xA8};

const char Block0x48[]={0x06, 0x06,
     0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 
     0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 
     0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 
     0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 
     0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 
     0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4};

const char Block0x49[]={0x09, 0x02,
     0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 
     0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3};

const char Block0x4A[]={0x05, 0x02,
     0x00, 0x00, 0xD3, 0xD3, 0xD3, 
     0xD3, 0xD3, 0xD3, 0xD3, 0xD3};

const char Block0x4B[]={0x04, 0x01,
     0x49, 0x4A, 0x4A, 0x4B};

const char Block0x4C[]={0x02, 0x08,
     0x4C, 0x4D, 
     0x4C, 0x4D, 
     0x4C, 0x4D, 
     0x4C, 0x4D, 
     0x4C, 0x4D, 
     0x4C, 0x4D, 
     0x4C, 0x4D, 
     0x4C, 0x4D};

const char Block0x4D[]={0x0E, 0x02,
     0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 
     0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2};

const char Block0x4E[]={0x0C, 0x01,
     0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4};

const char Block0x4F[]={0x06, 0x05,
     0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 
     0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 0x00, 
     0xD5, 0xD5, 0xD5, 0x00, 0x00, 0x00, 
     0xD4, 0xD4, 0x00, 0x00, 0x00, 0x00, 
     0xD5, 0x00, 0x00, 0x00, 0x00, 0x00};

const char Block0x50[]={0x06, 0x05,
     0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 0xD5, 
     0x00, 0xD4, 0xD4, 0xD4, 0xD4, 0xD4, 
     0x00, 0x00, 0x00, 0xD5, 0xD5, 0xD5, 
     0x00, 0x00, 0x00, 0x00, 0xD4, 0xD4, 
     0x00, 0x00, 0x00, 0x00, 0x00, 0xD5};

const char Block0x51[]={0x08, 0x02,
     0xCF, 0xCE, 0xCF, 0xCE, 0xCF, 0xCE, 0xCF, 0xCE, 
     0xCE, 0xCF, 0xCE, 0xCF, 0xCE, 0xCF, 0xCE, 0xCF};

const char Block0x52[]={0x08, 0x01,
     0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0, 0xD0};

const char Block0x53[]={0x03, 0x03,
     0x00, 0x8D, 0x00, 
     0xC3, 0x8C, 0x8B, 
     0x46, 0x47, 0x48};

const char Block0x54[]={0x04, 0x02,
     0xD3, 0xD3, 0x00, 0x00, 
     0xD3, 0xD3, 0xD3, 0xD3};

const char Block0x55[]={0x04, 0x01,
     0xC0, 0xC1, 0xC0, 0xC1};

const char Block0x56[]={0x09, 0x02,
     0x92, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x92, 
     0x93, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x93};

const char Block0x57[]={0x02, 0x06,
     0xFC, 0xFD, 
     0xFE, 0xFB, 
     0xFC, 0xFD, 
     0xFE, 0xFB, 
     0xFC, 0xFD, 
     0xFE, 0xFB};

const char Block0x58[]={0x06, 0x01,
     0xD3, 0xD3, 0xD3, 0xD3, 0xD3, 0xD3};

const char Block0x59[]={0x05, 0x06,
     0x00, 0x96, 0x95, 0xCF, 0xCE, 
     0x96, 0x95, 0xCF, 0xCE, 0xCF, 
     0x00, 0x96, 0x95, 0xCF, 0xCE, 
     0x96, 0x95, 0xCF, 0xCE, 0xCF, 
     0x00, 0x96, 0x95, 0xCF, 0xCE, 
     0x96, 0x95, 0xCF, 0xCE, 0xCF};

const char Block0x5A[]={0x05, 0x06,
     0xCF, 0xCE, 0x94, 0x97, 0x00, 
     0xCE, 0xCF, 0xCE, 0x94, 0x97, 
     0xCF, 0xCE, 0x94, 0x97, 0x00, 
     0xCE, 0xCF, 0xCE, 0x94, 0x97, 
     0xCF, 0xCE, 0x94, 0x97, 0x00, 
     0xCE, 0xCF, 0xCE, 0x94, 0x97};

const char Block0x5B[]={0x08, 0x01,
     0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD};

const char Block0x5C[]={0x03, 0x02,
     0xCF, 0xCE, 0xCF, 
     0xCE, 0xCF, 0xCE};

const char Block0x5D[]={0x03, 0x02,
     0xD2, 0xD1, 0xD2, 
     0xD1, 0xD2, 0xD1};

const char Block0x5E[]={0x09, 0x02,
     0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 
     0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1, 0xD2, 0xD1};

const char Block0x5F[]={0x08, 0x02,
     0x8D, 0x8B, 0x8D, 0x00, 0x8D, 0x8B, 0x8D, 0x00, 
     0x8C, 0xC3, 0x8C, 0x8B, 0x8C, 0xC3, 0x8C, 0x8B};

const char Block0x60[]={0x04, 0x03,
     0x39, 0x41, 0x42, 0x30, 
     0xA6, 0xA6, 0xA6, 0xA6, 
     0xA7, 0xA2, 0xA2, 0xA2};

const char Block0x61[]={0x04, 0x04,
     0x34, 0x30, 0x35, 0x30, 
     0x00, 0x34, 0x30, 0x35, 
     0x00, 0x00, 0x34, 0x30, 
     0x00, 0x00, 0x00, 0x34};

const char Block0x62[]={0x04, 0x04,
     0x00, 0x00, 0x00, 0x37, 
     0x00, 0x00, 0x37, 0x30, 
     0x00, 0x37, 0x30, 0x35, 
     0x37, 0x35, 0x30, 0x35};

const char Block0x63[]={0x08, 0x03,
     0x35, 0x35, 0x30, 0x35, 0x30, 0x35, 0x30, 0x35, 
     0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 
     0xA2, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2, 0xA2};

const char Block0x64[]={0x06, 0x06,
     0x30, 0x35, 0x30, 0x35, 0x30, 0x35, 
     0x30, 0x30, 0x35, 0x30, 0x35, 0x30, 
     0x35, 0x30, 0x30, 0x35, 0x30, 0x35, 
     0x30, 0x35, 0x30, 0x35, 0x35, 0x30, 
     0x35, 0x30, 0x35, 0x30, 0x35, 0x30, 
     0x35, 0x35, 0x30, 0x35, 0x30, 0x35};

const char Block0x65[]={0x03, 0x03,
     0x35, 0x30, 0x35, 
     0x30, 0x35, 0x30, 
     0x35, 0x30, 0x30};

const char Block0x66[]={0x04, 0x03,
     0x30, 0x31, 0x32, 0x33, 
     0xA6, 0xA6, 0xA6, 0xA6, 
     0xA2, 0xA2, 0xA2, 0xA5};

const char Block0x67[]={0x04, 0x04,
     0x36, 0x00, 0x00, 0x00, 
     0x30, 0x36, 0x00, 0x00, 
     0x35, 0x30, 0x36, 0x00, 
     0x30, 0x35, 0x30, 0x36};

const char Block0x68[]={0x04, 0x04,
     0x35, 0x30, 0x35, 0x38, 
     0x30, 0x35, 0x38, 0x00, 
     0x35, 0x38, 0x00, 0x00, 
     0x38, 0x00, 0x00, 0x00};

const char Block0x69[]={0x08, 0x03,
     0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 
     0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 
     0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4};

const char Block0x6A[]={0x01, 0x02,
     0x77, 
     0x77};

const char Block0x6B[]={0x01, 0x02,
     0x78, 
     0x78};

const char Block0x6C[]={0x01, 0x02,
     0x36, 
     0x30};

const char Block0x6D[]={0x01, 0x02,
     0x37, 
     0x30};

const char Block0x6E[]={0x08, 0x02,
     0xF5, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF7, 
     0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE};

const char Block0x6F[]={0x07, 0x05,
     0xF1, 0xE7, 0xBD, 0xBE, 0xBD, 0xE8, 0xBD, 
     0xE8, 0xE7, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 
     0xE7, 0xF1, 0xBD, 0xBE, 0xBD, 0xF1, 0xBD, 
     0xE8, 0xE7, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 
     0xF1, 0xE8, 0xF1, 0xBE, 0xBD, 0xBE, 0xBD};

const char Block0x70[]={0x07, 0x05,
     0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xE8, 0xF1, 
     0xBE, 0xBD, 0xBE, 0xE8, 0xBE, 0xE7, 0xF1, 
     0xBD, 0xBE, 0xBD, 0xBE, 0xF1, 0xE7, 0xE8, 
     0xBE, 0xE7, 0xBE, 0xBD, 0xBE, 0xF1, 0xE7, 
     0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xE7, 0xE8};

const char Block0x71[]={0x09, 0x03,
     0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 
     0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 
     0x7F, 0xE2, 0x7F, 0xE2, 0x7F, 0x7F, 0xE2, 0x7F, 0x7F};

const char Block0x72[]={0x03, 0x04,
     0x9D, 0x00, 0x00, 
     0x9E, 0x80, 0x00, 
     0x9F, 0xA0, 0xA1, 
     0xBE, 0xBD, 0xBE};

const char Block0x73[]={0x07, 0x02,
     0xF9, 0xF9, 0xF9, 0xF9, 0xF9, 0xF9, 0xF9, 
     0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA};

const char Block0x74[]={0x03, 0x04,
     0x00, 0x00, 0x98, 
     0x00, 0x81, 0x99, 
     0x9C, 0x9B, 0x9A, 
     0xBD, 0xBE, 0xBD};

const char Block0x75[]={0x08, 0x01,
     0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE};

const char Block0x76[]={0x0A, 0x01,
     0x7F, 0xE2, 0x7F, 0x7F, 0x7F, 0x7F, 0xE2, 0x7F, 0xE2, 0x7F};

const char Block0x77[]={0x08, 0x05,
     0xF1, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 
     0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 
     0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xF1, 0xBD, 0xBE, 
     0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 
     0xBD, 0xE8, 0xBD, 0xBE, 0xBD, 0xBE, 0xBD, 0xBE};

const char Block0x78[]={0x04, 0x02,
     0x8A, 0x8A, 0x8A, 0x8A, 
     0x8A, 0x8A, 0x8A, 0x8A};

const char Block0x79[]={0x10, 0x02,
     0xAA, 0xAA, 0xAB, 0xAA, 0xAB, 0xAB, 0xAB, 0xAB, 0xAA, 0xAA, 0xAB, 0xAA, 0xAA, 0xAA, 0xAB, 0xAA, 
     0xE7, 0xF1, 0xF1, 0xE8, 0xE7, 0xF1, 0xE8, 0xE8, 0xE7, 0xF1, 0xF1, 0xE7, 0xE8, 0xE7, 0xE8, 0xF1};

const char Block0x7A[]={0x08, 0x02,
     0xCB, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCA, 0xCB, 
     0xCA, 0xCB, 0x00, 0x00, 0x00, 0x00, 0xCB, 0xCA};

const char Block0x7B[]={0x02, 0x05,
     0xF9, 0xF9, 
     0xFA, 0xFA, 
     0xFA, 0xFA, 
     0xFA, 0xFA, 
     0xFA, 0xFA};

const char Block0x7C[]={0x05, 0x01,
     0x86, 0x88, 0x88, 0x88, 0x87};

const char Block0x7D[]={0x06, 0x01,
     0xBA, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9};

const char Block0x7E[]={0x06, 0x04,
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB};

const char Block0x7F[]={0x08, 0x01,
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB};

const char Block0x80[]={0x08, 0x01,
     0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9};

const char Block0x81[]={0x06, 0x05,
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0x00, 
     0xBC, 0xBB, 0xBC, 0x00, 0x00, 0x00, 
     0xBC, 0xBB, 0x00, 0x00, 0x00, 0x00, 
     0xBC, 0x00, 0x00, 0x00, 0x00, 0x00};

const char Block0x82[]={0x06, 0x05,
     0xBC, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 
     0x00, 0xBB, 0xBC, 0xBB, 0xBC, 0xBB, 
     0x00, 0x00, 0x00, 0xBB, 0xBC, 0xBB, 
     0x00, 0x00, 0x00, 0x00, 0xBC, 0xBB, 
     0x00, 0x00, 0x00, 0x00, 0x00, 0xBB};

const char Block0x83[]={0x02, 0x03,
     0xFE, 0xFB, 
     0xFC, 0xFD, 
     0xFC, 0xFD};

const char Block0x84[]={0x04, 0x02,
     0xED, 0xED, 0xED, 0xED, 
     0xED, 0xED, 0xED, 0xED};

const char Block0x85[]={0x07, 0x01,
     0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xEC};

const char Block0x86[]={0x04, 0x02,
     0x00, 0x00, 0x73, 0x72, 
     0x73, 0x72, 0x59, 0x59};

const char Block0x87[]={0x04, 0x02,
     0x74, 0x75, 0x00, 0x00, 
     0x59, 0x59, 0x74, 0x75};

const char Block0x88[]={0x08, 0x02,
     0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 
     0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59};

const char Block0x89[]={0x08, 0x01,
     0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6};

const char Block0x8A[]={0x26, 0x04,
     0x09, 0x00, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x7E, 0x09, 0x09, 0x00, 0x7E, 0x09, 0x09, 0x00, 0x7E, 0x09, 0x09, 0x00, 0x09, 0x09, 0x09, 0x00, 0x7E, 0x09, 0x09, 0x00, 0x7E, 0x09, 0x09, 0x00, 0x7E, 0x09, 0x09, 
     0x09, 0x00, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x00, 0x00, 0x7D, 0xC9, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x00, 
     0x09, 0x00, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x00, 0x7D, 0xC9, 0x00, 0x00, 0x09, 0x00, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x7C, 0x00, 
     0x09, 0x09, 0x00, 0x09, 0x00, 0x7D, 0x09, 0x7C, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x09, 0x7C, 0x00, 0x09, 0x09, 0x7C, 0x00, 0x00, 0x09, 0x00, 0x00, 0x09, 0x09, 0x7C, 0x00, 0x09, 0x00, 0x09, 0x00, 0x09, 0x09, 0x7C};

const char* BlocksIndex[]={
    Block0x00,
    Block0x01,
    Block0x02,
    Block0x03,
    Block0x04,
    Block0x05,
    Block0x06,
    Block0x07,
    Block0x08,
    Block0x09,
    Block0x0A,
    Block0x0B,
    Block0x0C,
    Block0x0D,
    Block0x0E,
    Block0x0F,
    Block0x10,
    Block0x11,
    Block0x12,
    Block0x13,
    Block0x14,
    Block0x15,
    Block0x16,
    Block0x17,
    Block0x18,
    Block0x19,
    Block0x1A,
    Block0x1B,
    Block0x1C,
    Block0x1D,
    Block0x1E,
    Block0x1F,
    Block0x20,
    Block0x21,
    Block0x22,
    Block0x23,
    Block0x24,
    Block0x25,
    Block0x26,
    Block0x27,
    Block0x28,
    Block0x29,
    Block0x2A,
    Block0x2B,
    Block0x2C,
    Block0x2D,
    Block0x2E,
    Block0x2F,
    Block0x30,
    Block0x31,
    Block0x32,
    Block0x33,
    Block0x34,
    Block0x35,
    Block0x36,
    Block0x37,
    Block0x38,
    Block0x39,
    Block0x3A,
    Block0x3B,
    Block0x3C,
    Block0x3D,
    Block0x3E,
    Block0x3F,
    Block0x40,
    Block0x41,
    Block0x42,
    Block0x43,
    Block0x44,
    Block0x45,
    Block0x46,
    Block0x47,
    Block0x48,
    Block0x49,
    Block0x4A,
    Block0x4B,
    Block0x4C,
    Block0x4D,
    Block0x4E,
    Block0x4F,
    Block0x50,
    Block0x51,
    Block0x52,
    Block0x53,
    Block0x54,
    Block0x55,
    Block0x56,
    Block0x57,
    Block0x58,
    Block0x59,
    Block0x5A,
    Block0x5B,
    Block0x5C,
    Block0x5D,
    Block0x5E,
    Block0x5F,
    Block0x60,
    Block0x61,
    Block0x62,
    Block0x63,
    Block0x64,
    Block0x65,
    Block0x66,
    Block0x67,
    Block0x68,
    Block0x69,
    Block0x6A,
    Block0x6B,
    Block0x6C,
    Block0x6D,
    Block0x6E,
    Block0x6F,
    Block0x70,
    Block0x71,
    Block0x72,
    Block0x73,
    Block0x74,
    Block0x75,
    Block0x76,
    Block0x77,
    Block0x78,
    Block0x79,
    Block0x7A,
    Block0x7B,
    Block0x7C,
    Block0x7D,
    Block0x7E,
    Block0x7F,
    Block0x80,
    Block0x81,
    Block0x82,
    Block0x83,
    Block0x84,
    Block0x85,
    Block0x86,
    Block0x87,
    Block0x88,
    Block0x89,
    Block0x8A};
