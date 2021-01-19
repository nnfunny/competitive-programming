// Problem link: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    int n_ranks = int(ranked.size());
    int n_scores = int(player.size());
    stack<unsigned long> scores;
    vector<int> ranks(n_scores);
    
    for(int i = 0; i < n_ranks; i++) {
        unsigned long current_score = ranked[i];
        if(scores.empty() || scores.top() != current_score)
            scores.push(current_score);
    }
    
    for(int i = 0; i < n_scores; i++) {
       unsigned long current_score = player[i];
       while(!scores.empty() && current_score >= scores.top())
            scores.pop();
        ranks[i] = scores.size() + 1;
    }
    
    return ranks; 
}