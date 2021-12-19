#include <stdio.h>

char in[1000];

int main() {
	freopen("article.txt", "r", stdin);
	while (scanf("%[^\n]s", in) > 0) {
		printf("%s\n", in);
	}
	return 0;
}

