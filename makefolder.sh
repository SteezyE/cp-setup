#!/bin/bash

mkdir bits
cp stdc++.h.gch bits/

for f in A B C
do 
	mkdir $f
	cp t.cpp $f/${f}.cpp
	touch $f/in
done
