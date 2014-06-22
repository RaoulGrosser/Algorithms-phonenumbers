string pattern[] = {"0",".,!","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
ofstream keyout("keypad.txt");
void print_keypad(char* str, int k, vector<char> patt, int i){
if(str[k] != '\0')
{
    int x = str[k] - '0';
    for(int l = 0; l < pattern[x].length(); l++)
    {
        patt[i] = pattern[x][l];
        print_keypad(str, k+1, patt, i+1);
    }
    keyout << endl;
}
else if(i == k)
{
    string st(patt.data());
    keyout << st << endl;
    return;
}
}
