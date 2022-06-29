 parity means shomota
 if 2 8 ar parity type 6 8
 
 if ((size & 1) == (n & 1))
        {
            cout << size << endl;
        }

        else
            cout << size - 1 << endl;


if ((a & 1) == (b & 1)) {} // this is clearer

if (((a ^ b) & 1) == 0) {} // this is faster

if (!((a ^ b) & 1)) {}     // this is as fast as faster