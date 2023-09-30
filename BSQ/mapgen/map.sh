#!/bin/bash

if [ "$#" -ne 1 ]; then
	echo -e "${RED}Utilisation : $0 nom_de_votre_script_perl.${NO}"
	exit 1
fi

RED='\033[0;31m'
GREEN='\033[0;32m'
NO='\033[0m'

echo "

"

echo -e "${RED}"
cat << "EOF"
 _ __ ___   __ _ _ __     __ _  ___ _ __
| '_ ` _ \ / _` | '_ \   / _` |/ _ \ '_ \
| | | | | | (_| | |_) | | (_| |  __/ | | |
|_| |_| |_|\__,_| .__/   \__, |\___|_| |_|
                |_|      |___/  by trvukano
EOF
echo -e "${NO}"

echo -e "${GREEN}map generator and checker with perl for bsq project 42 by cedmuller && trvukano.${NO}"

echo "

"

script="$1"

num_maps=10

output_dir="maps"

mkdir -p "$output_dir"

for ((i=1; i<=$num_maps; i++)); do
    x=$((1 + RANDOM % 100))
	y=$((1 + RANDOM % 100))
	density=$((RANDOM % 10))
	fichier="$output_dir/map$i.txt"
    ./"$script" "$x" "$y" "$density" > "$fichier"
	echo "===================================="
    echo -e "${GREEN} - Map $i générée :${NO} $fichier" && wc -l ${fichier} 
done
echo "===================================="
echo "


"
echo -e "${RED} :::::::::::::::::::::::::::${NO}"
echo -e "${RED} :: ${GREEN} Génération terminée  ${RED}::${NO}"
echo -e "${RED} :::::::::::::::::::::::::::${NO}"
echo "


"
