printf "\033c\033[47;30m\n"
cat $1 | tr ',' '\n'
