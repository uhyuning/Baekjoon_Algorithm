#include <string>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

struct WordInfo {
    string text;
    int start;
    int end;
    bool in_spoiler;
};

int solution(string message, vector<vector<int>> spoiler_ranges) {
    vector<WordInfo> all_words;
    stringstream ss(message);
    string word;
    int current_pos = 0;

    // 1. 모든 단어의 위치와 스포일러 포함 여부를 먼저 전수조사
    while (ss >> word) {
        int s_idx = message.find(word, current_pos);
        int e_idx = s_idx + word.length() - 1;
        current_pos = e_idx + 1;

        bool is_in = false;
        for (const auto& r : spoiler_ranges) {
            if (!(e_idx < r[0] || s_idx > r[1])) {
                is_in = true;
                break;
            }
        }
        all_words.push_back({word, s_idx, e_idx, is_in});
    }

    // 2. "중요한 단어" 판정 로직 적용
    set<string> important_candidates; // 스포일러 영역에 등장한 단어들
    set<string> common_words;         // 스포일러 영역 밖(완전 노출)에 등장한 단어들

    for (const auto& w : all_words) {
        if (w.in_spoiler) {
            important_candidates.insert(w.text);
        } else {
            common_words.insert(w.text);
        }
    }

    int answer = 0;
    // 3. 스포일러 영역에 있으면서, 영역 밖에는 단 한 번도 안 나온 단어만 카운트
    for (const string& cand : important_candidates) {
        if (common_words.find(cand) == common_words.end()) {
            answer++;
        }
    }

    return answer;
}