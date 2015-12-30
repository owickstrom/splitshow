//
//  PreviewController.h
//  SplitShow
//
//  Created by Moritz Pflanzer on 24/10/2015.
//  Copyright © 2015 Moritz Pflanzer. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@class DisplayController;

#define kSplitShowNotificationChangeSlide @"kSplitShowNotificationChangeSlide"
#define kSplitShowNotificationChangeSlideAction @"kSplitShowNotificationChangeSlideAction"
#define kSplitShowChangeSlideActionGoToIndex @"kSplitShowChangeSlideActionGoToIndex"

typedef enum : NSUInteger
{
    SplitShowPresentationModeInterleave,
    SplitShowPresentationModeSplit,
    SplitShowPresentationModeInverseSplit,
    SplitShowPresentationModeMirror,
    SplitShowPresentationModeCustom,
} SplitShowPresentationMode;

typedef enum : NSUInteger
{
    SplitShowChangeSlideActionRestart,
    SplitShowChangeSlideActionPrevious,
    SplitShowChangeSlideActionNext,
    SplitShowChangeSlideActionGoTo,
} SplitShowChangeSlideAction;

@interface PreviewController : NSWindowController <NSWindowDelegate>

@property IBOutlet NSToolbarItem *mainDisplayItem;
@property IBOutlet NSToolbarItem *helperDisplayItem;

@property IBOutlet NSPopUpButton *mainDisplayButton;
@property IBOutlet NSPopUpButton *helperDisplayButton;

@property IBOutlet DisplayController *mainPreview;
@property IBOutlet DisplayController *helperPreview;

- (void)setupViews;

- (IBAction)toggleCustomFullScreen:(id)sender;
- (IBAction)swapDisplays:(id)sender;
- (IBAction)openAdvancedLayout:(id)sender;

@end
