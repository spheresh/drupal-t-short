#!/bin/bash

# This script calls from ci_scripts/flow.sh.

. ./configs/database.sh
. ./configs/site.sh
. ./configs/flow/profile.sh

echo "[Installing site...]"
drush site-install $reinstall_profile_name --account-mail=$account_mail --account-name=$account_name --account-pass=$account_pass --site-mail=$site_mail --site-name="$site_name" --db-url=$db_driver://$db_login:$db_pass@$db_ip:$db_port/$db_name -y
