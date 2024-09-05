unsigned char reverse_bits(unsigned char octet)
{
    octet = ((octet >> 1) & 0x55) | ((octet << 1) & 0xAA);
    octet = ((octet >> 2) & 0x33) | ((octet << 2) & 0xCC);
    octet = (octet >> 4) | (octet << 4);
    
    return octet;
}

