#!/bin/bash

# This script calls from ci_scripts/reinstall.sh.

. ./configs/flow/sql.sh

echo "[Dropping database...]"
drush sql-drop -y

echo "[Importing database...]"
gunzip $reinstall_database_file -c | drush sql-cli

echo "[Updating database...]"
drush updb -y

echo "[Clearing cache...]"
drush cc all
