#!/bin/sh

for example in `ls`
do
	if [ -d $example ]; then
		if [ -d "$example" ]; then
			echo "Cleaning example ${example}"
			cd ${example} && make clean 1> /dev/null || echo "[ ERROR ] Compilation failed!"
			cd ..
		fi
	fi
done
