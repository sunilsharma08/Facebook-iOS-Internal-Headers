//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, UINavigationController;

@interface FBFeedAwesomizerCardToolbox : NSObject
{
    FBUserSession *_session;
    SEL _learnMoreWillOpenAction;
    SEL _learnMoreWillCloseAction;
    UINavigationController *_navigationController;
    SEL _dismissAction;
}

+ (id)newWithSession:(id)arg1 navigationController:(id)arg2 learnMoreWillOpenAction:(SEL)arg3 learnMoreWillCloseAction:(SEL)arg4 dismissAction:(SEL)arg5;
@property(readonly, nonatomic) SEL dismissAction; // @synthesize dismissAction=_dismissAction;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SEL learnMoreWillCloseAction; // @synthesize learnMoreWillCloseAction=_learnMoreWillCloseAction;
@property(readonly, nonatomic) SEL learnMoreWillOpenAction; // @synthesize learnMoreWillOpenAction=_learnMoreWillOpenAction;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (id)initWithSession:(id)arg1 navigationController:(id)arg2 learnMoreWillOpenAction:(SEL)arg3 learnMoreWillCloseAction:(SEL)arg4 dismissAction:(SEL)arg5;

@end

