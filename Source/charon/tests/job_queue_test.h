/**
 * @file job_queue_test.h
 * 
 * @brief Tests to test the Job-Queue type job_queue_t
 * 
 */

/*
 * Copyright (C) 2005 Jan Hutter, Martin Willi
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef JOB_QUEUE_TEST_H_
#define JOB_QUEUE_TEST_H_

/**
 * @brief Test function used to test the job_queue functionality
 *
 * @param tester associated tester object
 */
void test_job_queue(tester_t *tester);

test_t job_queue_test1 = {test_job_queue,"Job-Queue Test1"};

#endif /*JOB_QUEUE_TEST_H_*/
