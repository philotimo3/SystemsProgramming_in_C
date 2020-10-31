{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red200\green20\blue201;\red180\green36\blue25;\red0\green0\blue0;
\red64\green11\blue217;\red47\green180\blue29;\red193\green101\blue28;}
{\*\expandedcolortbl;;\cssrgb\c83396\c23075\c82664;\cssrgb\c76409\c21698\c12524;\csgray\c0;
\cssrgb\c32308\c18668\c88227;\cssrgb\c20238\c73898\c14947;\cssrgb\c80553\c47366\c13835;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <stdio.h>\cf4 \
\cf5 //reversing the order of the digits entered\cf4 \
\cf6 int\cf4  reverseOrder(\cf6 int\cf4  userNum) \{\
        \cf5 //did it this way because the otherway the last \cf3 0\cf5  wasn't printing\cf4 \
        \cf7 if\cf4 (userNum == \cf3 0\cf4 )\
                \cf7 return\cf4 (\cf3 0\cf4 );\
        \cf5 //mod gives us the last digit\cf4 \
        printf(\cf3 "\cf2 %d\cf3 "\cf4 , userNum % \cf3 10\cf4 );\
        \cf5 //cutting off last digit with integer division \cf4 \
        reverseOrder(userNum / \cf3 10\cf4 );\
\}\
\
main() \{\
        \cf6 int\cf4  numberEntered;\
        \cf5 //prompting the user to enter a number between \cf3 100\cf5  and \cf3 10\cf5 ,\cf2 0\cf3 00\cf4 \
        printf(\cf3 "Please enter a number between 100 and 10,000: \cf2 \\n\cf3 "\cf4 );\
        scanf(\cf3 "\cf2 %d\cf3 "\cf4 , &numberEntered);\
\
        \cf5 //Checking if the user has complied\cf4 \
        \cf7 while\cf4 (numberEntered < \cf3 100\cf4  || numberEntered > \cf3 10000\cf4 ) \{\
                \cf5 //Keeps asking the user for a number between \cf3 100\cf5  and \cf3 10\cf5 ,\cf2 0\cf3 00\cf5  until the user complies\cf4 \
                printf(\cf3 "Please enter a number between 100 and 10,000: \cf2 \\n\cf3 "\cf4 );\
                scanf(\cf3 "\cf2 %d\cf3 "\cf4 , &numberEntered);\
        \}\
                reverseOrder(numberEntered);\
\}}