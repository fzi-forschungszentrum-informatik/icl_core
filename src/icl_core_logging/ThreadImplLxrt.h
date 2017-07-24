// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE in the top
// directory of the source code.
//
// © Copyright 2017 FZI Forschungszentrum Informatik, Karlsruhe, Germany
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2009-03-02
 *
 * \brief   Defines icl_core::logging::ThreadImplLxrt
 *
 * \b icl_core::logging::ThreadImplLxrt
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_LOGGING_THREAD_IMPL_LXRT_H_INCLUDED
#define ICL_CORE_LOGGING_THREAD_IMPL_LXRT_H_INCLUDED

#include <icl_core/os_lxrt.h>

#if defined(_SYSTEM_LXRT_33_)
# include "ThreadImplLxrt33.h"
#elif defined(_SYSTEM_LXRT_35_)
# include "ThreadImplLxrt35.h"
#elif defined(_SYSTEM_LXRT_38_)
# include "ThreadImplLxrt38.h"
#else
# error "Unsupported RTAI version!"
#endif

namespace icl_core {
namespace logging {

#if defined(_SYSTEM_LXRT_33_)
typedef ThreadImplLxrt33 ThreadImplLxrt;
#elif defined(_SYSTEM_LXRT_35_)
typedef ThreadImplLxrt35 ThreadImplLxrt;
#elif defined(_SYSTEM_LXRT_38_)
typedef ThreadImplLxrt38 ThreadImplLxrt;
#endif

}
}

#endif
