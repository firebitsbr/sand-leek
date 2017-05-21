int check_base32(char *);
void onion_base32(char [16], unsigned char (*));

#ifdef SSSE3_ONION_BASE32
void onion_base32_ssse3(char [16], unsigned char (*));
#endif
