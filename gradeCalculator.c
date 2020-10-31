{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red200\green20\blue201;\red180\green36\blue25;\red0\green0\blue0;
\red47\green180\blue29;\red64\green11\blue217;\red193\green101\blue28;}
{\*\expandedcolortbl;;\cssrgb\c83396\c23075\c82664;\cssrgb\c76409\c21698\c12524;\csgray\c0;
\cssrgb\c20238\c73898\c14947;\cssrgb\c32308\c18668\c88227;\cssrgb\c80553\c47366\c13835;}
\margl1440\margr1440\vieww10800\viewh14220\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <stdio.h>\cf4 \
  \
\cf5 int\cf4  main()\
\{\
        \cf5 int\cf4  numberOfGrades;\
        \cf5 int\cf4  failingGrades = \cf3 0\cf4 ;\
        \cf5 float\cf4  value;\
        \cf6 //using an array as hinted to in class\cf4 \
        \cf5 float\cf4  arr[\cf3 15\cf4 ];\
        \cf5 float\cf4  SumOfGrades = \cf3 0\cf4 ;\
        \cf5 float\cf4  grades;\
        \cf5 float\cf4  average;\
\
        \cf6 //prompting the user enter how many grades they have    \cf4 \
        printf(\cf3 "Please enter the number of grades you have: "\cf4 );\
        scanf(\cf3 "\cf2 %d\cf3 "\cf4 , &numberOfGrades);\
        \cf6 //prompting the user enter their grades\cf4 \
        printf(\cf3 "Please enter your grades: "\cf4 );\
        \cf7 for\cf4 (grades=\cf3 0\cf4 ;grades<numberOfGrades;grades++) \{\
                scanf(\cf3 "\cf2 %f\cf3 "\cf4 , &value);\
                SumOfGrades = SumOfGrades + value;\
                \cf7 if\cf4 (value < \cf3 70\cf4 )\{\
                        ++failingGrades;\
                \}\
        \}\
        \cf6 //calculating average grade\cf4 \
        average = SumOfGrades / grades;\
        \cf6 //printing the numerical grade average with \cf3 2\cf6  decimal precision\cf4 \
        printf(\cf3 "The average of the grades you entered is: \cf2 %0.2f\\n\cf3 "\cf4 , average);\
        \cf6 //printing the number of failing grades (grade less than \cf3 70\cf6 )\cf4 \
        printf(\cf3 "You have \cf2 %d\cf3  failing grade(s).\cf2 \\n\cf3 "\cf4 , failingGrades);\
        \cf7 if\cf4  (average >= \cf3 90\cf4 )\{\
                printf(\cf3 "Your grade average is an A."\cf4 );\
        \}\
        \cf7 else\cf4  \cf7 if\cf4  (average >= \cf3 80\cf4 )\{\
                printf(\cf3 "Your grade average is a B."\cf4 );\
        \}\
        \cf7 else\cf4  \cf7 if\cf4  (average >= \cf3 70\cf4 )\{\
                printf(\cf3 "Your grade average is a C."\cf4 );\
        \}\
        \cf7 else\cf4  \cf7 if\cf4  (average >= \cf3 60\cf4 )\{\
                printf(\cf3 "Your grade average is a D."\cf4 );\
        \}\
        \cf7 else\cf4 \{\
                printf(\cf3 "Your grade average is an F."\cf4 );\
        \}\
    \cf7 return\cf4  (\cf3 0\cf4 );\
\}}