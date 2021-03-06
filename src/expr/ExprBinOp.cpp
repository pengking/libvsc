
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
 * ExprBinOp.cpp
 *
 *  Created on: Jul 3, 2020
 *      Author: ballance
 */
#include "ExprBinOp.h"

namespace vsc {

const char *toString(ExprBinOp op) {
	switch (op) {
	case BinOp_Eq: return "==";
	case BinOp_Ne: return "!=";
	case BinOp_Gt: return ">";
	case BinOp_Ge: return ">=";
	case BinOp_Lt: return "<";
	case BinOp_Le: return "<=";
	case BinOp_Add: return "+";
	case BinOp_Sub: return "-";
	case BinOp_Div: return "/";
	case BinOp_Mul: return "*";
	case BinOp_Mod: return "%";
	case BinOp_And: return "&";
	case BinOp_Or: return "|";
	case BinOp_Sll: return "<<";
	case BinOp_Srl: return ">>";
	case BinOp_Xor: return "^";
	case BinOp_Not: return "~";
	}
	return "UNK_OP";
}

}



