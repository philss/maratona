#!/bin/env python
#-*-encoding: utf-8 -*-
count = {}
winner = 0
i = 0
winner_points = 0
size = int(input())
if size > 0 and size <= 100000:
		while i < size:
				vote = int(input())
				if vote > 0 and vote <= 1000000000:
						if not count.has_key(vote):
								count[vote] = 1
						else:
								count[vote] += 1
						if count[vote] > winner_points:
								winner = vote
								winner_points = count[vote]
				i += 1
print winner
