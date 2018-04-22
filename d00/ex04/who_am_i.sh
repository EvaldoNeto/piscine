#!/bin/bash
ldapsearch -Q "(uid=test)" | grep dn | cut -f 1,3,5-7  -d ',' | cut -c 5-
