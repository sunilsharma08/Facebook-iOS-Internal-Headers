//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPrivacyOption, FBMemPrivacyOptionsLocationConnection, NSURL;
@protocol FBFNNowNUXStep;

@protocol FBFNNowNUXStepDelegate <NSObject>
- (void)openURLAtStep:(id <FBFNNowNUXStep>)arg1 url:(NSURL *)arg2;
- (void)openPrivacySelectorViewAtStep:(id <FBFNNowNUXStep>)arg1 privacyOptions:(FBMemPrivacyOptionsLocationConnection *)arg2 selectedOption:(FBMemPrivacyOption *)arg3;
@end

