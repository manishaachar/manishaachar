BEGIN{
	print "Delete duplicate lines"
	print "=========================="
}
{
	array[++i]=$0
}
END{
	for(r=1;r<i;r++){
		flag=0
		for(j=0;j<r;j++){
			if(array[r]==array[j]){
				flag=1

			}
		}
		if(flag==0){
			print array[r]
		}
	}
}
