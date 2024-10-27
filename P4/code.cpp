//SHA3 synthesised 1 fixed with LLM
// It leaks more...
bool compute( bool k1, bool k2, bool k3, bool r1, bool r2, bool r3, bool r4){
bool n00;
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
bool n18;
bool n19;
bool n20;
bool n21;
bool n22;
bool n23;
bool n24;
bool n25;
bool n26;
bool n27;
bool n28;
bool n29;
bool n30;
bool n31;
bool n32;
bool masked_n06;
bool masked_n07;
bool masked_n04;


 n31 = r3 ^ k3 ;
 n29 = r1 ;
 n28 = r2 ^ k2 ;
 n27 = r3 ^ k3 ;
 n25 = r1 ;
 n24 = r2 ;
 n21 = r2 ^ k2 ;
 n20 = r3 ;
 n19 = r1 ^ k1 ;
 n18 = r3 ^ k3 ;
 n17 = r3 ;
 n16 = r2 ;
 n15 = 1 ^ n31 ;
 n14 = n28 ^ r1 ;
 n13 = 0 ^ n27 ;
 n12 = r2 ^ r1 ;
 n11 = ~ 0 ;
 n10 = r3 & n21 ;
 n09 = n18 ^ n19 ;
 n08 = r2 | r3 ;
 n07 = n14 | n15 ;
 n06 = n12 | n13 ;
 n05 = n10 & n11 ;
 n04 =  n08 ^  n09 ;

masked_n06 = n06 ^ r4;
masked_n07 = n07 ^ r4;
n03 = masked_n06 & masked_n07;

masked_n04 = n04 ^ r4;
n02 = masked_n04 ^ n03;

n01 = n02 ^ r4;
n00 = n01 ^ n05;
 return( n00) ;
}
