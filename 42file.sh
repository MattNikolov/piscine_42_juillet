#!bin/bash

readonly FILE_NAME="EXO"

number=$1
file=$2

mkdir $file

for (( i=0; i <= $1 ; i++ ));
do
NOM_DOSS="$file/$FILE_NAME-0$i"
mkdir $NOM_DOSS
date=$(date +"%m-%d-%Y")
touch "$NOM_DOSS/$FILE_NAME-0$i.c"
echo "/* pointeur = variable contenant l'adresse d'une autre variable" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo " %p -> affiche une adresse de variable ou pointeur " >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "[variable]" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "maVariable : valeur de la variable" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "&maVaruable : adresse de la variable" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "[POINTEUR]" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "*monPointeur = NULL ou *monPointeur = &maVariable (déclaration" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "monPointeur : adresse de la variable pointée" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "*monPointeur : valeur de la variable pointée" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "&monPointeur : adresse du pointeur" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo " */" >>$NOM_DOSS/$FILE_NAME-0$i.c
echo "#include <stdlib.h>" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "#include <stdio.h>" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "#include <unistd.h>" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "\n" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "\n" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "int main (){" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "return 0;" >> $NOM_DOSS/$FILE_NAME-0$i.c
echo "}" >> $NOM_DOSS/$FILE_NAME-0$i.c

done
