#!/usr/bin/python3
for i in range(9):
    for m in range(i + 1, 10):
        if i < m:
            print("{:d}{:d}".format(i, m), end="\n"
                  if i == 8 and m == 9 else ", ")
