//
//  RKMacOSXAppDelegate.h
//  RKMacOSX
//
//  Created by Blake Watters on 4/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface RKMacOSXAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
