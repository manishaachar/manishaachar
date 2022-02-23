echo -n "Enter first filename:"
read file1
if [ -e $file1 ]
then
set -- `ls -ld $file1`
file1perm=$1
else
echo "File doesnt exit"
exit
fi
echo -n "Enter Second filename:"
read file2
if [ -e $file2 ]
then
set -- `ls -ld $file2`
file2perm=$1
else
echo "File doesnt exit"
exit
fi
if [ $file1perm = $file2perm ]
then
echo "File Permission are identical"
echo "Permission is $file1perm"
else
echo "File Permission are not identical"
echo "$file1 Permission is $file1perm"
echo "$file2 Permission is $file2perm"
fi
