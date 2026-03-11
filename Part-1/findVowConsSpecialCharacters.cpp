#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
        //char *ch=new char[10];
        char ch[] = "a 1bi";
        int vc = 0, cc = 0, dc = 0, spc = 0;
        // cin.ignore(1000,'\n');
        // cin.getline(ch,10);
        cout << "\n";
        for (int i = 0; i < sizeof(ch); i++)
        {
            char cur = ch[i];
            if (cur >= 'a' && cur <= 'z' || cur >= 'A' && cur <= 'Z')
            {
                if (cur == 'a' || cur == 'e' || cur == 'i' || cur == 'o' || cur == 'u')
                {
                    vc++;
                }
                else
                {
                    cc++;
                }
            }
            else if (ch[i] >= '0' && ch[i] <= '9')
            {
                dc++;
            }
            else if (ch[i] == ' ')
            {
                spc++;
            }
        }
        cout << vc << "vc " << cc << "cc " << dc << "dc " << spc << "spc" << endl;
}