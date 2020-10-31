{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red200\green20\blue201;\red180\green36\blue25;\red0\green0\blue0;
\red64\green11\blue217;\red47\green180\blue29;}
{\*\expandedcolortbl;;\cssrgb\c83396\c23075\c82664;\cssrgb\c76409\c21698\c12524;\csgray\c0;
\cssrgb\c32308\c18668\c88227;\cssrgb\c20238\c73898\c14947;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <stdio.h>\cf4 \
\
\cf2 #define PI \cf3 3.14159\cf2  \cf5 /* pi is the ratio of the diameter and circumference of a circle*/\cf4 \
\
\cf6 int\cf4  main()\
\{\
  \cf5 /*printf(\cf3 "%5f\cf2 \\n\cf3 "\cf5 ,PI);*/\cf4 \
  \cf6 float\cf4  innerD, outerD, thickness, density;\
  \cf6 float\cf4  rim, weight, batchweight;\
  \cf6 int\cf4  numwashers;\
  \cf5 /* innerD = inner diameter in cm */\cf4 \
  \cf5 /* outerD = outer diameter in cm */\cf4 \
  \cf5 /* comment out the rest of variables */\cf4 \
\
  printf(\cf3 "Enter the inner diameter of the washer in centimeters: "\cf4 );\
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,&innerD);\
\
  printf(\cf3 "Enter the outer diameter of the washer in centimeters: "\cf4 );\
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,&outerD);\
\
  printf(\cf3 "Enter the width/thickness of the washer in centimeters: "\cf4 );\
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,&thickness);\
\
  printf(\cf3 "Enter the density of the washer\cf2 \\'\cf3 s material in grams per cubic centimeter: "\cf4 );\
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,&density);\
\
  printf(\cf3 "How many washers do you have: "\cf4 );\
  scanf(\cf3 "\cf2 %i\cf3 "\cf4 ,&numwashers);\
\
  rim = ((outerD/\cf3 2\cf4 )*(outerD/\cf3 2\cf4 )*PI-(innerD/\cf3 2\cf4 )*(innerD/\cf3 2\cf4 )*PI);\
\
  weight = rim*thickness*density;\
\
  batchweight = weight*numwashers;\
\
  printf(\cf3 "\cf2 \\n\cf3 "\cf4 );\
  printf(\cf3 "rim area=\cf2 %-10.5f\cf3  square centimeters \cf2 \\n\cf3 "\cf4 , rim);\
  printf(\cf3 "weight of washer=\cf2 %-10.5f\cf3  grams \cf2 \\n\cf3 "\cf4 , weight);\
  printf(\cf3 "weight of all washer=\cf2 %-10.5f\cf3  grams \cf2 \\n\cf3 "\cf4 , batchweight);\
\}}