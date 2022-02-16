#pragma once
#include"pch.h"
#include"member.h"


#define MAXDATA		(100000)

#define NONE		(0)

#define PRINT_OFF	(0)
#define PRINT_ON	(1)

#define FULL_NAME	(0)
#define FIRST_NAME	(1)
#define LAST_NAME	(2)

#define	FULL_PHONENUM	(0)
#define MIDDLE_PHONENUM (1)
#define LAST_PHONENUM	(2)

#define FULL_BIRTHDAY	(0)
#define YEAR_BIRTHDAY	(1)
#define MONTH_BIRTHDAY	(2)
#define DAY_BIRTHDAY	(3)

enum condition {
	EMPLOYEENUM = 0,
	NAME,
	CL,
	PHONENUM,
	BIRTHDAY,
	CERTI,
	NUM_OF_CONDITION
};

int Delete(vector<member>& members, string condition, string str, string opt1, string opt2);