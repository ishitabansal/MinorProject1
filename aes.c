char key[16]={"AAAAAA111111qqqq"};
char hex[32];

unsigned char s[256] =
{
	0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5, 0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
	0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0, 0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0,
	0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC, 0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15,
	0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A, 0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75,
	0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0, 0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84,
	0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B, 0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF,
	0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85, 0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8,
	0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5, 0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2,
	0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17, 0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73,
	0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88, 0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB,



void xor(char *text,char *key1);



void xor(char *text,char *key1)
{
	for (int i=0,m=0; i<16;i++,m+=2)
	{	text[i]=text[i] ^key1[i];
	    
	
	}
}




	
void rowshift(unsigned char * cipher)
{
   unsigned char temp[16];


  temp[0]=cipher[0];                                           //according to row shifting, in first row there would be no shifting.
  temp[1]=cipher[5];                                           //in second row, one element will be shifted towards left.
  temp[2]=cipher[10];                                          //in third row, two elements will be dhifted towards left.
  temp[3]=cipher[15];                                          //in fourth row, three elements would be shifted towards left.


  temp[4]=cipher[4];
  temp[5]=cipher[9];
  temp[6]=cipher[14];
  temp[7]=cipher[3];
  

  temp[8]=cipher[8];
  temp[9]=cipher[13];
  temp[10]=cipher[2];
  temp[11]=cipher[7];


   temp[12]=cipher[12];
   temp[13]=cipher[1];
   temp[14]=cipher[6];
   temp[15]=cipher[11];

for (int i=0; i<16; i++)
{
    cipher[i]=temp[i];
}
}





void AES()
{xor(cipher,key);



}


