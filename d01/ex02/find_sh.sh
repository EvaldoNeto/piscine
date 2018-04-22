#!/bin/bash
find * | grep .sh | rev | cut -d '/' -f 1 | rev