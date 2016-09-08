class l_zes {
      int re, im ;
public:
      l_zes (int i=0; int j=0);
      l_zes (const l_zes &);
      l_zes & operator =(const l_zes &);
      friend l_zes operator +(const l_zes & a, const l_zes & b);
      friend l_zes operator -(const l_zes & a, const l_zes & b);
      l_zes & operator +=(const l_zes & a);
