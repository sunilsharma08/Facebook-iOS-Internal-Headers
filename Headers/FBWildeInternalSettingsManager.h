//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class FBSessionController, NSString, NSURLCache, UIWindow;

@interface FBWildeInternalSettingsManager : NSObject <UIAlertViewDelegate>
{
    FBSessionController *_sessionController;
    UIWindow *_window;
    NSURLCache *_defaultNSURLCache;
    UIWindow *_FIGGridOverlayWindow;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_showMemoryProfiler;
- (void)_allocationTrackerOffWithButton:(int)arg1;
- (void)_allocationTrackerOnWithButton:(int)arg1;
- (void)_handleSettingsMultiValueChangeNotification:(id)arg1;
- (void)_handleSettingsToggleChangeNotification:(id)arg1;
- (void)_setupReachabilityQualityListeners;
- (void)_setupFPSWindowListeners;
- (void)_addChambrayGridOverlayWindow;
- (void)dealloc;
- (id)initWithSessionController:(id)arg1 applicationWindow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

