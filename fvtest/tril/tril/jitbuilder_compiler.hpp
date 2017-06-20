/*******************************************************************************
 *
 * (c) Copyright IBM Corp. 2017, 2017
 *
 *  This program and the accompanying materials are made available
 *  under the terms of the Eclipse Public License v1.0 and
 *  Apache License v2.0 which accompanies this distribution.
 *
 *      The Eclipse Public License is available at
 *      http://www.eclipse.org/legal/epl-v10.html
 *
 *      The Apache License v2.0 is available at
 *      http://www.opensource.org/licenses/apache2.0.php
 *
 * Contributors:
 *    Multiple authors (IBM Corp.) - initial implementation and documentation
 ******************************************************************************/

#ifndef JITBUILDER_COMPILER_HPP
#define JITBUILDER_COMPILER_HPP

#include "method_compiler.hpp"

class JitBuilderCompiler : public MethodCompiler {
    public:
        explicit JitBuilderCompiler(const ASTNode* methodNode)
            : MethodCompiler{methodNode} {}

        int32_t compile() override;
};

#endif // JITBUILDER_COMPILER_HPP
