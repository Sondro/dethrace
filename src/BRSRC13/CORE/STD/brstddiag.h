#ifndef _STDDIAG_H_
#define _STDDIAG_H_

#include "br_types.h"

extern br_diaghandler BrStdioDiagHandler;
extern br_diaghandler* _BrDefaultDiagHandler;

// Offset: 15
// Size: 78
void BrStdioWarning(char* message);

// Offset: 108
// Size: 93
void BrStdioFailure(char* message);

#endif