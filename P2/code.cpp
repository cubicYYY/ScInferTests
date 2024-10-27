//SHA3 from P8, generated with LLM, without example learning

bool compute( bool k1, bool k2, bool k3, bool r1, bool r2, bool r3, bool r4){

  bool m_t1;
  bool m_t2;
  bool m_t3;
  bool m_t4;
  bool m_t5;
  bool m_t6;
  bool m_t7;
  bool m_t8;
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
  bool temp1;
  bool temp2;
  bool temp3;
  bool temp4;
  bool temp5;
  bool temp6;



  n01 = ~r2;
  m_t1 = n01 & r3;
  t1 = m_t1 ^ r4;


  n04 = k3 ^ r3;
  m_t2 = r2 & n04;
  t2 = m_t2 ^ r4;

  m_t3 = r1 ^ r4;
  t3 = m_t3;

  m_t4 = k1 ^ r1;
  t4 = m_t4 ^ r4;

  n07 = k2 ^ r2;
  n08 = ~n07;
  n09 = k3 ^ r3;
  m_t5 = n08 & n09;
  t5 = m_t5 ^ r4;

  n12 = k2 ^ r2;
  m_t6 = n12 & r3;
  t6 = m_t6 ^ r4;

  temp1 = t2 ^ t6;
  n14 = temp1 ^ r4;

  temp2 = t1 ^ t5;
  n15 = temp2 ^ r4;

  temp3 = n14 ^ n15;
  n11 = temp3 ^ r4;

  temp4 = n11 ^ r4;
  n03 = temp4;

  temp5 = n03 ^ t4;
  n16 = temp5 ^ r4;

  temp6 = n16 ^ t3;
  n17 = temp6 ^ r4;

return(n17);
}
