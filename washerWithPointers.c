{\rtf1\ansi\ansicpg1252\cocoartf2511
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red200\green20\blue201;\red180\green36\blue25;\red0\green0\blue0;
\red64\green11\blue217;\red47\green180\blue29;\red193\green101\blue28;}
{\*\expandedcolortbl;;\cssrgb\c83396\c23075\c82664;\cssrgb\c76409\c21698\c12524;\csgray\c0;
\cssrgb\c32308\c18668\c88227;\cssrgb\c20238\c73898\c14947;\cssrgb\c80553\c47366\c13835;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx560\tx1120\tx1680\tx2240\tx2800\tx3360\tx3920\tx4480\tx5040\tx5600\tx6160\tx6720\pardirnatural\partightenfactor0

\f0\fs22 \cf2 \CocoaLigature0 #include \cf3 <stdio.h>\cf4 \
\cf2 #include \cf3 <stdlib.h>\cf4 \
\
\cf2 #define PI \cf3 3.14159\cf2  \cf5 /* pi is the ratio of the diameter and circumference of a circle*/\cf4 \
\
\cf6 int\cf4  main()\
\{\
  \cf5 /*printf(\cf3 "%5f\cf2 \\n\cf3 "\cf5 ,PI);*/\cf4 \
        \cf5 //gives me memory\cf4 \
  \cf6 float\cf4  *innerD = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 float\cf4  *outerD = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 float\cf4  *thickness = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 float\cf4  *density = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 float\cf4  *rim = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 float\cf4  *weight = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 float\cf4  *batchweight = malloc(\cf7 sizeof\cf4 (\cf6 float\cf4 ));\
  \cf6 int\cf4  *numwashers = malloc(\cf7 sizeof\cf4 (\cf6 int\cf4 ));\
  \cf5 //** rimPointer;\cf4 \
  \cf5 //** weightPointer;\cf4 \
  \cf5 //** batchweightPointer;\cf4 \
  \cf6 float\cf4  ** rimPointer = &rim;\
  \cf6 float\cf4  ** weightPointer = &weight;\
  \cf6 float\cf4  ** batchweightPointer = &batchweight;\
  \cf5 /* innerD = inner diameter in cm */\cf4 \
  \cf5 /* outerD = outer diameter in cm */\cf4 \
  \cf5 /* comment out the rest of variables */\cf4 \
\
  \cf5 //prompting user for inner diameter of the washer in centimeters\cf4 \
  printf(\cf3 "Enter the inner diameter of the washer in centimeters: "\cf4 );\
  \cf5 //don't need & because innerD is a pointer / holds an address\cf4 \
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,innerD);\
\
  \cf5 //prompting the user for the outer diameter of the washer in centimeters\cf4 \
  printf(\cf3 "Enter the outer diameter of the washer in centimeters: "\cf4 );\
  \cf5 //don't need & because outerD is a pointer / holds an address\cf4 \
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,outerD);\
\
  \cf5 //prompting the user for the width/thickness of the washer in centimeters\cf4 \
  printf(\cf3 "Enter the width/thickness of the washer in centimeters: "\cf4 );\
  \cf5 //don't need & because thickness is a pointer / holds an address\cf4 \
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,thickness);\
\
  \cf5 //prompting the user for the density of the washer\\'s material in grams per cubic centimeter\cf4 \
  printf(\cf3 "Enter the density of the washer\cf2 \\'\cf3 s material in grams per cubic centimeter: "\cf4 );\
  \cf5 //don't need & because density is a pointer / holds an address\cf4 \
  scanf(\cf3 "\cf2 %f\cf3 "\cf4 ,density);\
\
  \cf5 //prompting the user for the number of washers\cf4 \
  printf(\cf3 "How many washers do you have: "\cf4 );\
  \cf5 //don't need & because numwashers is a pointer / holds an address\cf4 \
  scanf(\cf3 "\cf2 %i\cf3 "\cf4 ,numwashers);\
\
  *rim = ((*outerD/\cf3 2\cf4 )*(*outerD/\cf3 2\cf4 )*PI-(*innerD/\cf3 2\cf4 )*(*innerD/\cf3 2\cf4 )*PI);\
\
  *weight = (*rim)*(*thickness)*(*density);\
\
  *batchweight = *weight*(*numwashers);\
\
  printf(\cf3 "\cf2 \\n\cf3 "\cf4 );\
  printf(\cf3 "rim area=\cf2 %-10.5f\cf3  square centimeters \cf2 \\n\cf3 "\cf4 , *rim);\
  printf(\cf3 "weight of washer=\cf2 %-10.5f\cf3  grams \cf2 \\n\cf3 "\cf4 , *weight);\
  printf(\cf3 "weight of all washer=\cf2 %-10.5f\cf3  grams \cf2 \\n\cf3 "\cf4 , *batchweight);\
\}}