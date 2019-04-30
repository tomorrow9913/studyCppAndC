#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string one[] = { "", "ÀÏ", "ÀÌ", "»ï", "»ç", "¿À", "À°", "Ä¥", "ÆÈ", "±¸" };
string length[] = { "", "½Ê","¹é", "Ãµ" };
string rr[] = { "", "¸¸ ", "¾ï ", "Á¶ ", "°æ ", "ÇØ " };

int main() {
	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		string input;
		cin >> input;

		reverse(input.begin(), input.end());

		string p;
		for (int r = 0; r < 6; r++) {
			if (input.size() > 0) {
				bool flag = false;
				for (int t = 0; t < (input.size() < 4 ? input.size() : 4); t++) {
					flag = input[t] > '0' ? true : flag;
				}
				p = flag ? rr[r] + p : p;
			}
			for (int l = 0; l < 4; l++) {
				if (input.size() > 0) {
					if (input[0] == '1') {
						bool flag = false;
						for (int t = 1; t < (input.size() < 4 ? input.size() : 4); t++) {
							flag = input[t] > '0' ? true : flag;
						}

						if (l == 0) {
							p = r == 1 && !flag ? p : one[input[0] - '0'] + p;
						}
						else {
							p = length[l] + p;
						}
					}
					else if (input[0] != '0') {
						p = one[input[0] - '0'] + (length[l]) + p;
					}
					input.erase(0, 1);
				}
			}
		}

		if (p[p.size() - 1] == ' ') {
			p.erase(p.end() - 1, p.end());
		}
		cout << p << '\n';
	}
}