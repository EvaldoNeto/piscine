#!/bin/bash
cat /etc/passwd | cut -d '#' -f1 | sed '/^$/d' | awk 'NR > 1' | cut -d ':' -f1 | rev | sort -r | awk "NR >= $FT_LINE1  && NR <= $FT_LINE2" | tr -s '\n' , | sed 's/, */, /g' | sed 's/, $/./'