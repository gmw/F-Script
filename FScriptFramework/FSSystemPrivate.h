/*   FSSystemPrivate.h Copyright (c) 2002-2006 Philippe Mougin.  */
/*   This software is open source. See the license.       */  

#import "FSSystem.h"

@interface FSSystem (FSSystemPrivate)

- (FSInterpreter *)interpreter; // Will return nil if the associated interpreter no longer exists

@end