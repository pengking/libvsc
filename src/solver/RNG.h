
/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * RNG.h
 *
 *  Created on: Jul 5, 2020
 *      Author: ballance
 */

#ifndef SRC_SOLVER_RNG_H_
#define SRC_SOLVER_RNG_H_
#include <stdint.h>
#include <random>

namespace vsc {

class RNG {
public:
	RNG(uint32_t seed);

	virtual ~RNG();

	uint32_t next();

	uint32_t randint_u(
			uint32_t	min,
			uint32_t	max);

private:
//	uint16_t			m_next[16];
	std::mt19937		m_gen;
	uint64_t			m_next;
	uint64_t			m_c;
	uint64_t			m_a;

};

} /* namespace vsc */

#endif /* SRC_SOLVER_RNG_H_ */
