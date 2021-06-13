# include machine IPs list conf
. ${0%/*}/machines.txt

## Loop through all Win machines
i=1;
while [ $i -le ${#winname[@]} ]; 
do
	# Check if builds complete file exist
        echo ${winname[i]}
	
	# Update number of all tests in TestResults.xml
	sed -i "s/tests=\"0\"/tests=\"Win${winname[i]}\"/g" TestResults.xml
done
