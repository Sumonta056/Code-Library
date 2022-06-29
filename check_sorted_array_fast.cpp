       bool ok = is_sorted(a, a + n);
        if(ok) {
        	cout << "YES\n";
        	continue;
        }
 
        if(neg == n || neg == 0) {
        	if(!ok) cout << "NO\n";
        	continue;
        }