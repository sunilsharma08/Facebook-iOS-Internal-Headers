//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FBBugReportViewScreenshotOverlayView : UIView
{
    NSMutableArray *_lineSegments;
}

- (void).cxx_destruct;
- (id)imageByAnnotatingImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawLines:(struct CGSize)arg1;
- (void)addLineSegmentFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)init;

@end

