
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
 * ExprNumericLiteral.h
 *
 *  Created on: Jul 7, 2020
 *      Author: ballance
 */

#ifndef SRC_EXPR_EXPRNUMERICLITERAL_H_
#define SRC_EXPR_EXPRNUMERICLITERAL_H_
#include "expr/Expr.h"

namespace vsc {

class ExprNumericLiteral : public Expr {
public:
	ExprNumericLiteral(uint64_t	val);

	virtual ~ExprNumericLiteral();

	uint64_t val() const { return m_val; }

	virtual void accept(IVisitor *v) { v->visitExprNumericLiteral(this); }

private:
	uint64_t				m_val;

};

} /* namespace vsc */

#endif /* SRC_EXPR_EXPRNUMERICLITERAL_H_ */