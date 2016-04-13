#!/bin/bash 

echo "tr came , tr saw , tr cinquered." | tr 'a-zA-Z' 'n-za-mN-ZA-M'

echo "ge pnze , ge fnj , ge pbadhrerq." | tr 'a-zA-Z' 'n-za-mN-ZA-M'

#tr '\t' ' ' < xxx.txt



echo "Hello 123 World 12324756834" | tr -d '0-9'


echo "fefsef1 124 gtpkgp2 42tfg " | tr -d -c '0-9\n'


#compress the same signal
echo "d1de1            1231fr       frf" | tr -s ' '


#cat xxx.txt | echo $[ $(tr '\n' '+' ) 0 ]
