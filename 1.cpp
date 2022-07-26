#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if (s[0] != ' ' && (s[0] >= 'a' && s[0] <= 'z')) s[0] -= 32;
    if (s.size() == 1) return s;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == ' ' && i + 1 <= s.size()) {
            i++;
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            else if (s[i] == ' ') {
                i--;
                continue;
                //연습 테스트입니다.
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    return s;
}
int main() {
    solution("for    the last week");
}