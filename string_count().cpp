int numJewelsInStones(string jewels, string stones) {
    int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
}

jewls = aA ;
stontes = aaaaaAAA;

how it works

loop 1 : search and count for a in stones
         find count value = 5 ;

loop 2 : search and count for A in stones
         find count value = 3 ;