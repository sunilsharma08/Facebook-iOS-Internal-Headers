//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFeedViewControllerLifecycleListenerAnnouncer;

@interface FBFeedViewControllerLifecycleStatus : NSObject
{
    BOOL _feedHasAppeared;
    BOOL _isPresented;
    FBFeedViewControllerLifecycleListenerAnnouncer *_listenerAnnouncer;
}

@property(readonly, nonatomic) FBFeedViewControllerLifecycleListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void).cxx_destruct;
- (void)feedDidDisappear:(BOOL)arg1;
- (void)feedDidAppear:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isPresented;
- (id)init;

@end

