if [ -e $1 ]
then
set -- `ls -ld $1`
echo "Permission are $1"
echo "File link counts $2:"
echo "File Modification is done on $6 $7 and $8"
else
echo "File does not exits"
fi
