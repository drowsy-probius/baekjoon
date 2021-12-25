#!/bin/bash

MESSAGE_ARRAY=("8^8" ">_<" "*^*" "T^T")
LENGTH=4
INDEX="$RANDOM % $LENGTH"

git config --global credential.helper store
git add .
git commit -m ${MESSAGE_ARRAY[$INDEX]}
git push