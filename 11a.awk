BEGIN{
	FS="|"
	print "-----------BOOK DETAILS---------------"
	print "\nSLNO\t\tDEPARTMENT\t\t\tTOTAL BOOKS"
	print "--------------------------------------"
}
{
	book[$1]+=$2
	total+=$2
}
END{
	for(i in book){
		SN++
		printf ("\n%d\t\t%-20s\t\t%d",SN,i,book[i])
	}
	print "\n--------------------------------------"
	print "\nTOTAL BOOKS SOLD:",total
	print "\n--------------------------------------"
}

