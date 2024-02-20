/*
 * Copyright (C) 2024 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TNT_ASTRICT_GLSLTYPES_H
#define TNT_ASTRICT_GLSLTYPES_H

#include <astrict/CommonTypes.h>
#include <vector>

namespace astrict {

struct PackFromGlsl {
    int version;
    IdStore<TypeId, Type> types;
    IdStore<LValueId, LValue> lValues;
    IdStore<RValueId, RValue> rValues;
    IdStore<FunctionId, std::string_view> functionNames;
    IdStore<StatementBlockId, std::vector<Statement>> statementBlocks;
    std::vector<FunctionDefinition> functionDefinitions;
};

};

#endif  // TNT_ASTRICT_GLSLTYPES_H
