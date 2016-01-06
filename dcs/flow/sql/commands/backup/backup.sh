#!/bin/bash

# This script calls from ci_scripts/reinstall.sh.

. ./configs/flow/sql.sh

echo "[Making backup...]"
drush sql-dump --gzip --result-file=$reinstall_database_file
