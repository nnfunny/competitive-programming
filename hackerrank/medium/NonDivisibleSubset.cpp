// Link: https://www.hackerrank.com/challenges/non-divisible-subset/problem
int nonDivisibleSubset(int k, vector<int> s) {
    int n = int(s.size());
    vector<int> counts(k);
    
    for(int number : s)
        counts[number % k]++;
    
    int count = min(counts[0], 1);
    for(int i = 1; i <= k / 2; i++) 
        if(i != k - i)
            count += max(counts[i], counts[k-i]);
            
    if(k % 2 == 0)
        count++;
    return count;
}