//SHA3

bool compute( bool k1, bool k2, bool k3, bool r1, bool r2, bool r3, bool r4){


  bool n01;
  bool n02;
  bool n03;
  bool n04;
  bool n05;
  bool n06;
  bool n07;
  bool n08;
  bool n09;
  bool n10;
  bool n11;
  bool n12;
  bool n13;
  bool n14;
  bool n15;
  bool n16;
  bool n17;
  bool t1;
  bool t2;
  bool t3;
  bool t4;
  bool t5;
  bool t6;


  n01 = ~r2;
  t1 = n01 & r3;


  n04 = k3 ^ r3;
  t2 = r2 & n04;

  t3 = r1 ^ 0; 

  t4 = k1 ^ r1;

  n07 = k2 ^ r2;
  n08 = ~n07;
  n09 = k3 ^ r3;
  t5 = n08 & n09;

  n12 = k2 ^ r2;
  t6 = n12 & r3;

  n14 = t2 ^ t6;
  n03 = n14 ^ r4;

  n15 = t1 ^ t5;
  n11 = n03 ^ n15;
  n16 = n11 ^ t4;

  n17 = n16 ^ t3;

return(n17);
} 
