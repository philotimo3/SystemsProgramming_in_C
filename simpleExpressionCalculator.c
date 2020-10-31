{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red200\green20\blue201;\red180\green36\blue25;\red0\green0\blue0;
\red47\green180\blue29;\red64\green11\blue217;\red193\green101\blue28;}
{\*\expandedcolortbl;;\cssrgb\c83396\c23075\c82664;\cssrgb\c76409\c21698\c12524;\csgray\c0;
\cssrgb\c20238\c73898\c14947;\cssrgb\c32308\c18668\c88227;\cssrgb\c80553\c47366\c13835;}
\margl1440\margr1440\vieww23920\viewh12400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <stdio.h>\cf4 \
\cf2 #include \cf3 <math.h>\cf4 \
\
\cf5 int\cf4  main() \{\
    \cf5 char\cf4  operator;\
    \cf5 float\cf4  value_1;\
    \cf5 float\cf4  value_2;\
    \cf6 //prompting the user to input the operator for the expression\cf4 \
    printf(\cf3 "Please enter the operator (options:(+, -, *, /, %, =) that you will go inbetween the two values for your simple expression:"\cf4 );\
    scanf(\cf3 " \cf2 %c\cf3 "\cf4 , &operator);\
    printf(\cf3 "Please enter the two values:"\cf4 );\
    \cf6 //storing the two values as floats so it is precise\cf4 \
    scanf(\cf3 "\cf2 %f\cf3 "\cf4 , &value_1);\
    scanf(\cf3 "\cf2 %f\cf3 "\cf4 , &value_2);\
\
    \cf7 switch\cf4  (operator) \{\
        \cf7 case\cf4  \cf3 '+'\cf4 :\
                printf(\cf3 "\cf2 %f\cf3  + \cf2 %f\cf3  = \cf2 %f\cf3 "\cf4 , value_1, value_2, value_1 + value_2);\
                \cf7 break\cf4 ;\
        \cf7 case\cf4  \cf3 '-'\cf4 :\
                printf(\cf3 "\cf2 %f\cf3  - \cf2 %f\cf3  = \cf2 %f\cf3 "\cf4 , value_1, value_2, value_1 - value_2);\
                \cf7 break\cf4 ;\
        \cf7 case\cf4  \cf3 '*'\cf4 :\
                printf(\cf3 "\cf2 %f\cf3  * \cf2 %f\cf3  = \cf2 %f\cf3 "\cf4 , value_1, value_2, value_1 * value_2);\
                \cf7 break\cf4 ;\
        \cf7 case\cf4  \cf3 '/'\cf4 :\
                printf(\cf3 "\cf2 %f\cf3  / \cf2 %f\cf3  = \cf2 %f\cf3 "\cf4 , value_1, value_2, value_1 / value_2);\
                \cf7 break\cf4 ;\
        \cf7 case\cf4  \cf3 '%'\cf4 :\
                \cf6 //floats do not work for mod, used int and had to cast in order for it to work properly (otherwise got that double error)\cf4 \
                printf(\cf3 "\cf2 %i\cf3  mod \cf2 %i\cf3  = \cf2 %i\cf3 "\cf4 , value_1, value_2, (\cf5 int\cf4 )value_1 % (\cf5 int\cf4 )value_2);\
                \cf7 break\cf4 ;\
        \cf6 // treating as == since it will not accept as character\cf4 \
        \cf7 case\cf4  \cf3 '='\cf4 :\
                printf(\cf3 "\cf2 %f\cf3  == \cf2 %f\cf3 "\cf4 , value_1, value_2);\
                \cf7 if\cf4 (value_1 == value_2)\
                        printf(\cf3 " are equal.\cf2 \\n\\n\cf3 "\cf4 );\
                \cf7 else\cf4 \
                        printf(\cf3 " are not equal.\cf2 \\n\\n\cf3 "\cf4 );\
                \cf7 break\cf4 ;\
\
        \cf6 // default for if user enters an unknown operator\cf4 \
        \cf7 default\cf4 :\
                printf(\cf3 "That operation is not currently recognized. Please use one of these operators (+, -, *, /, %, =):"\cf4 );\
    \}\
    \cf7 return\cf4 (\cf3 0\cf4 );\
\}}