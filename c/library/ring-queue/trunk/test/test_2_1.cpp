/**
 * @file test_1.cpp
 * @author richard <richard@taomee.com>
 * @date 2010-09-20
 */

#include <stdio.h>

#include <boost/test/minimal.hpp>

#include "i_ring_queue.h"

/**
 * 正确创建fixed_queue的实例，正确释放fixed_queue的实例
 */
int test_main(int argc, char **argv)
{
	i_ring_queue *p_ring_queue = NULL;

	BOOST_REQUIRE(create_fixed_queue_instance(&p_ring_queue, -1) == -1);
	BOOST_REQUIRE(create_fixed_queue_instance(&p_ring_queue, 0) == -1);
	BOOST_REQUIRE(create_fixed_queue_instance(&p_ring_queue, 1) == 0);
	BOOST_REQUIRE(p_ring_queue->release() == 0);

	return 0;
}

