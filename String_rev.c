{\rtf1\ansi\ansicpg1252\cocoartf1643\cocoasubrtf100
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
#include <string.h>\
int main()\{\
	char s[1000],rev[1000];\
	scanf("%s", s);              			\
	int i=0;\
	int len;\
	len=strlen(s)-1;\
	while(s[i]!='\\0')\
	\{\
	   rev[len--]=s[i++]; \
	\}\
	if(strcmp(s,rev)==0)\
	\{\
	    printf("YES");\
	\}\
	else\
	\{\
	    printf("NO");\
	\}\
\}}