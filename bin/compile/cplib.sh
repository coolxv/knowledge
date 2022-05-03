#!/bin/bash

LibDir=$PWD"/lib"
Target=$1
lib_array=`ldd $Target | grep -o "/.*" | grep -o "/.*/[^[:space:]]*"`
mkdir -p $LibDir
for Variable in ${lib_array}
do
    cp -f "$Variable" $LibDir
done
