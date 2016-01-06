#!/bin/bash

# Execute flow pre tasks.
for file in ./flow/$1/tasks/pre/*.sh
do
  if [ -e "$file" ]; then
    echo "[Execute $1 pre task: $file...]"
    . $file
  fi
done

# Execute flow command pre tasks.
for file in ./flow/$1/commands/$2/tasks/pre/*.sh
do
  if [ -e "$file" ]; then
    echo "[Execute $1 $2 pre task: $file...]"
    . $file
  fi
done

# Execute flow.
. ./flow/$1/commands/$2/$2.sh

# Execute flow command post tasks.
for file in ./flow/$1/commands/$2/tasks/post/*.sh
do
  if [ -e "$file" ]; then
    echo "[Execute $1 $2 post task: $file...]"
    . $file
  fi
done

# Execute flow post tasks.
for file in ./flow/$1/tasks/post/*.sh
do
  if [ -e "$file" ]; then
    echo "[Execute $1 post task: $file...]"
    . $file
  fi
done
