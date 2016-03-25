//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSDate, NSMutableSet, UIImage;
@protocol FBPresenceBadgerListener;

@interface FBPresenceBadger : NSObject
{
    UIImage *_iconImage;
    FBUserSession *_session;
    NSMutableSet *_friendsWithUnseenUpdates;
    NSDate *_mostRecentUnseenUpdateTime;
    BOOL _inForeground;
    BOOL _initialIconFetch;
    id <FBPresenceBadgerListener> _listener;
}

@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak id <FBPresenceBadgerListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)notifiedApplicationLostFocus:(id)arg1;
- (void)_notifyListenerWithIcon:(id)arg1;
- (void)_updateWithImage:(id)arg1;
- (void)_updateWithImageURL:(id)arg1;
- (void)updateIconForComposition:(id)arg1;
- (void)_reset;
- (void)friendModelsUpdated:(id)arg1;
@property(readonly, nonatomic) unsigned int presenceUnseenCount;
- (void)presenceViewDisappeared;
- (void)presenceViewAppeared;
- (BOOL)isFriendUpdateUnseen:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end

