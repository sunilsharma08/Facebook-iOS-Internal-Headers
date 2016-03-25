//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPNuxViewDelegate-Protocol.h"

@class NSString, NSTimer, SPNuxView;

@interface SPNuxManager : NSObject <SPNuxViewDelegate>
{
    BOOL _didShowLUXNUXThisSession;
    int _didShowLUXNUXCounter;
    SPNuxView *_luxNux;
    NSTimer *_luxNuxDisplayTimer;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *luxNuxDisplayTimer; // @synthesize luxNuxDisplayTimer=_luxNuxDisplayTimer;
@property(retain, nonatomic) SPNuxView *luxNux; // @synthesize luxNux=_luxNux;
@property(nonatomic) BOOL didShowLUXNUXThisSession; // @synthesize didShowLUXNUXThisSession=_didShowLUXNUXThisSession;
@property(nonatomic) int didShowLUXNUXCounter; // @synthesize didShowLUXNUXCounter=_didShowLUXNUXCounter;
- (void).cxx_destruct;
- (void)didTapToDismiss:(id)arg1;
- (void)didDismiss:(id)arg1;
- (void)fadeOutCurrentNUX;
- (void)_invalidateLuxNuxTimer;
- (void)markLUXNUXDone;
- (void)dismissLUXNUX;
- (void)fadeOutLUXNUX;
- (void)markLUXNUXDoneForCurrentMediapickerSession:(BOOL)arg1;
- (void)displayLUXNUXIfNeeded:(struct CGPoint)arg1 withView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

