#!/bin/bash
cat /etc/passwd | sed '/^#/d' | awk 'NR%2==1' | awk -F ":" '{print $1}' | awk 'NR == '$FT_LINE1' , NR == '$FT_LINE2'' | rev | sort -r | tr "\n" "," | sed 's/,/, /g' |sed "s/..$//" | tr '\n' '.'
