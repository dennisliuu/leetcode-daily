#/bin/sh
mkdir "$1"
touch "$1"/main.cpp
touch "$1"/README.md
cd "$1/"
code .
