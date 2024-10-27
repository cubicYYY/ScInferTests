bool chi( bool i1, bool i2, bool i3){
    bool n1;
    bool n2;
    bool n3;

    n3 = ~ i2;
    n2 = n3 & i3;
    n1 = n2 ^ i1;

    return( n1);
}
