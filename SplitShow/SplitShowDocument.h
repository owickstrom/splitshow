//
//  SplitShowDocument.h
//  SplitShow
//
//  Created by Moritz Pflanzer on 30/09/2015.
//  Copyright © 2015-2016 Moritz Pflanzer. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class PDFDocument;
@class CustomLayoutController;

typedef enum : NSInteger {
    SplitShowSlideModeNormal,
    SplitShowSlideModeSplit,
} SplitShowSlideMode;

typedef enum : NSInteger {
    SplitShowInterleaveGroupContent,
    SplitShowInterleaveGroupNotes,
} SplitShowInterleaveGroup;

typedef enum : NSInteger {
    SplitShowInterleaveModeInside,
    SplitShowInterleaveModeOutside,
} SplitShowInterleaveMode;

typedef enum : NSInteger {
    SplitShowSplitModeBoth,
    SplitShowSplitModeLeft,
    SplitShowSplitModeRight,
} SplitShowSplitMode;

@interface SplitShowDocument : NSDocument

@property NSMutableArray<NSMutableDictionary*> *customLayouts;
@property SplitShowSlideMode customLayoutMode;

@property (readonly) NSString *name;
@property (readonly) NSSize pageSize;

@property (readonly) BOOL hasInterleavedInsideDocument;
@property (readonly) BOOL hasInterleavedOutsideDocument;

- (PDFDocument*)createMirroredDocument;
- (PDFDocument*)createInterleavedDocumentForGroup:(SplitShowInterleaveGroup)mode inMode:(SplitShowInterleaveMode)mode;
- (PDFDocument*)createSplitDocumentForMode:(SplitShowSplitMode)mode;
- (PDFDocument*)createDocumentFromIndices:(NSArray*)indices forMode:(SplitShowSlideMode)mode;

@end

