#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAP(x) (((x) <= 'Z') ? ((x) - 'A') : ((x) - 'a'))
//#define DEBUG 

struct trienode {
	char v;
	int stat;
	struct trienode* child[26];
};
struct trienode root;

void init_node(struct trienode* cnt) {
#ifdef DEBUG
	printf("init_node\n");
#endif
	cnt->v = 0; cnt->stat = 0;
	memset(cnt->child, 0, sizeof(cnt->child));
	return;
}

void add_node(struct trienode* parent, char c) {
#ifdef DEBUG
	printf("add_node\n");
#endif
	c = MAP(c);
	if (parent->child[c] != NULL) return;
	struct trienode* p = malloc(sizeof(struct trienode));
	init_node(p);
	p->v = c + 'a';
	parent->child[c] = p;
	return;
}

void add_word(char* word, struct trienode* cnt) {
#ifdef DEBUG
	printf("add_word: %s\n", word);
#endif
	if (word[0] == '\0') {
		++cnt->stat;
		return;
	}
	char c = MAP(word[0]);
	if (cnt->child[c] == NULL)
		add_node(cnt, word[0]);
	add_word(word + 1, cnt->child[c]);
	return;
}

char path[1000]; int p = 0;
void print(struct trienode* cnt) {
#ifdef DEBUG
	printf("print\n");
#endif
	int i;
	if (cnt->stat != 0) {
		path[p] = '\0';
#ifdef DEBUG
		printf("%d ", p);
#endif
		printf("%s %d\n", path, cnt->stat);
	}
	for (i = 0; i < 26; ++i) {
		if (cnt->child[i] == NULL) continue;
		path[p++] = cnt->child[i]->v;
		print(cnt->child[i]);
	}
	--p;
	return;
}

char in[1000];
int getword() {
	int i = 0;
	//memset(in, 0, sizeof(in));
	while ((scanf("%c", &in[i])) > 0 && isalpha(in[i])) ++i;
	in[i] = '\0';
#ifdef DEBUG
	printf("getword: %s\n", in);
#endif
	if (feof(stdin)) return -1;
	return strlen(in);
}

int main() {
	freopen("article.txt", "r", stdin);
	init_node(&root);
	int ret;
	while ((ret = getword()) >= 0) {
		if (ret == 0) continue;
#ifdef DEBUG
		printf("input: %s\n", in);
#endif
		add_word(in, &root);
		//getchar(); // reject a single char
	}
	print(&root);
	return 0;
}

