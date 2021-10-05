ll power(ll base, ll powr)
{
  ll res = 1;
  while(powr)
  {
    if(powr%2==0) base*=base,powr/=2;
    else res*=base,powr--;    
  }
  return res;
}