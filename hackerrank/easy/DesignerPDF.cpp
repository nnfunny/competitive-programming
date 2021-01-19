// link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
int designerPdfViewer(vector<int> h, string word) {
    int n = word.length();
    int max_h = 1;
    for(char i : word) {
        max_h = max(max_h, h[i-'a']);
        cout << max_h;
    }
    return max_h * n;
}