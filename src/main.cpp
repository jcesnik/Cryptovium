
////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 Lightfactor, LLC. All rights reserved.
//
// Author:		  Jeff Cesnik <jcesnik@lightfactor.co>
// Last Modified: 02/12/2017
//
////////////////////////////////////////////////////////////////////////////////

#include "compare_ct.h"
#include "cryptovium.h"
#include "cryptovium_tests.h"
#include <stdio.h>


////////////////////////////////////////////////////////////////////////////////
int main()
{
	printf("\nCryptovium v1.0\n\n");

	cvm_init();

	// execute unit tests
	cvm_ut_all();

	return 0;
}