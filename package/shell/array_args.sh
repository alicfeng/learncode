#!/bin/bash
show(){
	array=$1
	for item in ${array[*]};
	do
		echo $item
	done
}

arr=(
aa
bb
cc
)
show "${arr[*]}"
