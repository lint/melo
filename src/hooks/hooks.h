
#import <objc/runtime.h>
#import "substrate.h"

// initializer methods for %group blocks in various files
extern "C" void InitLayout();
extern "C" void InitWiggleMode();
extern "C" void InitRecentlyAdded();
extern "C" void InitTheming();
extern "C" void InitBackport();
extern "C" void InitLibrary();