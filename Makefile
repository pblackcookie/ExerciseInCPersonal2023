CFLAGS := -Wall -Wextra -pedantic -Wvla -Wfloat-equal -std=c99 -O2
CC := gcc
final.txt: letter.txt
	cp letter.txt final.txt
	date >> final.txt

chap2_10: chap2_10.c
	$(CC) $(CFLAGS) chap2_10.c -o chap2_10

chap2_3: chap2_3.c
	$(CC) $(CFLAGS) chap2_3.c -o chap2_3


chap2_4: chap2_4.c
	$(CC) $(CFLAGS) chap2_4.c -o chap2_4


chap2_8: chap2_8.c
	$(CC) $(CFLAGS) chap2_8.c -o chap2_8

chap3_1-1 : chap3_1-1.c
	$(CC) $(CFLAGS) chap3_1-1.c -o chap3_1-1

chap3_1-2: chap3_1-2.c
	$(CC) $(CFLAGS) chap3_1-2.c -o chap3_1-2

chap3_1-3: chap3_1-3.c
	$(CC) $(CFLAGS) chap3_1-3.c -o chap3_1-3
