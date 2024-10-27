// masked chi
bool mchi( bool i1, bool i2, bool i3, bool r1, bool r2, bool r3){
    bool b1;
    bool b2;
    bool b3;
    bool n1;
    bool n2;
    bool n3;
    bool n4;
    bool n5;
    bool n6;
    bool n7;
    bool n8;
    bool n9;

    // Masked inputs
    b1 = i1 ^ r1;
    b2 = i2 ^ r2;
    b3 = i3 ^ r3;

    // Operations
    n9 = b3 & r2;
    n8 = r3 & r2;
    n7 = r3 | b2;
    n6 = r1 ^ n9;
    n5 = n7 ^ n8;
    n4 = b2 | b3;
    n3 = n5 ^ n6;
    n2 = n4 ^ b1;
    n1 = n2 ^ n3;

    // Return the masked output
    return( n1);
}
