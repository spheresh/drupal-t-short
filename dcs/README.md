# Drupal CI Script

## Simple and extendable implementation of CI development approach.
Script for drupal developers to make they development process easier. It support two flow types: profile and sql.

The main concept is that we have `flow` and `flow commands`. Also there is exists two level `tasks`:
```
1. Tasks for flow - *.sh files that executes when you execute concrete flow.
  1. Pre tasks for flow.
  2. Post tasks for flow.
2. Tasks for flow commands - *.sh files that executes when you execute concrete flow command.
  1. Pre tasks for flow commands.
  2. Post tasks for flow commands.
```

### Configuring
All configuration files are in the `configs` directory.
* `configs/database.sh` - database settings.
* `configs/site.sh` - site settings.
* `configs/flow/profile.sh` - settings for `profile` flow.
* `configs/flow/sql.sh` - settings for `sql` flow.

### Usage
#### For profile type by default exists only one command - reinstall.
`Reinstall` command allow to reinstall site with configured profile.
```
sh flow.sh profile reinstall
```

#### For sql type by default exists two commands - backup and reinstall.
`Reinstall` command allow to reinstall site with configured `*.sql` file.
```
sh flow.sh sql reinstall
```

`Backup` command allow to make database backup into configured `*.sql` file for further use in `reinstall` command.
```
sh flow.sh sql backup
```

#### Defining tasks for flow commands
If you want to execute some actions before/after flow command you need to define task. Task it is just *.sh file with sh commands. All that you need is create *.sh file and place it into `pre` or `post` subdirectory of `tasks` directory for flow command.

#### Defining tasks for flow types
Just like above you need to create *.sh file and place it into `pre` or `post` subdirectory of `tasks` directory for flow type.

#### Defining commands for flow types
If you want extend flow type with extra commands you need to define it. First, create subdirectory in `flow/[flowtype]/commands/[your_command]`. Then place [your_command].sh file with command definition into this directory. You also can define tasks for this new command just like above.
