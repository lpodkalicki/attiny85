#!/bin/sh

for example in `ls`
do
	if [ -d $example ]; then
		if [ -d "$example" ]; then
			echo "Compiling example ${example}"
			cd ${example} && make 1> /dev/null || echo "[ ERROR ] Compilation failed!"
			cd ..
		fi
	fi
done
