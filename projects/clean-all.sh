#!/bin/sh

for project in `ls`
do
	if [ -d $project ]; then
		if [ -d "$project" ]; then
			echo "Cleaning project ${project}"
			cd ${project} && make clean 1> /dev/null || echo "[ ERROR ] Compilation failed!"
			cd ..
		fi
	fi
done
