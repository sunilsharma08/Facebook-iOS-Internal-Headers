//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBAppSessionController;

@protocol FBAppSessionControllerDelegate <NSObject>
- (void)appSessionControllerDidBeginSession:(id <FBAppSessionController>)arg1 isBackgroundStartup:(BOOL)arg2;
- (void)appSessionControllerDidEndSession:(id <FBAppSessionController>)arg1 wasShowingSpinner:(BOOL)arg2;
@end

