//
//  ViewController.h
//  SplitShow
//
//  Created by Moritz Pflanzer on 05/05/2015.
//
//

#import <Cocoa/Cocoa.h>
#import "BeamerViewController.h"
#import "BeamerDocument.h"

@interface PreviewController : NSViewController

@property IBOutlet NSView *contentPreview;
@property IBOutlet NSView *notesPreview;

- (void)setDocuments:(BeamerDocument*)document;

@end

