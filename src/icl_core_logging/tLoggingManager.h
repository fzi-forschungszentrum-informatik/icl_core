// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE in the top
// directory of the source code.
//
// © Copyright 2018 FZI Forschungszentrum Informatik, Karlsruhe, Germany
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Klaus Uhl <uhl@fzi.de>
 * \date    2007-10-02
 *
 * \brief   Contains icl_logging::tLoggingManager
 *
 * \b icl_logging::tLoggingManager
 *
 */
//----------------------------------------------------------------------
#ifndef ICL_CORE_LOGGING_T_LOGGING_MANAGER_H_INCLUDED
#define ICL_CORE_LOGGING_T_LOGGING_MANAGER_H_INCLUDED

#include "icl_core/Deprecate.h"
#include "icl_core_logging/LoggingManager.h"

namespace icl_core {
namespace logging {

typedef ICL_CORE_VC_DEPRECATE LoggingManager tLoggingManager ICL_CORE_GCC_DEPRECATE;

}
}

#endif
