bool compute(bool k0, bool k1, bool k2, bool r0, bool r1, bool r2, bool x0, bool x1, bool x2){


bool n011;
bool n021;
bool n031;

bool n012;
bool n022;
bool n032;




n011 = k0 ^ x0;
n012 = n011 ^ r0;
n021 = k1 ^ x1;
n022 = n021 ^ r1;
n031 = k2 ^ x2;
n032 = n031 ^ r2;


return(n012 - n022 - n032);

}
