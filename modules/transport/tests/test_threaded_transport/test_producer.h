/** Arynga CarSync(TM)
 * 2014 Copyrights by Arynga Inc. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * Proprietary and confidential.
 */

#ifndef TEST_PRODUCER_H
#define TEST_PRODUCER_H

#include "threaded_producer.h"

void test_producer_init(int (*func)(const transport_config_ConnectionConfig* config));

void test_producer_cleanup(void (*func)());

void test_producer_sendNext(void (*func)());

void test_producer_pushMsg(int (*func)(const void* msg, int size));

#endif
