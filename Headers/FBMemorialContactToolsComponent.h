//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class NSString;
@protocol FBIntentHandler;

@interface FBMemorialContactToolsComponent : CKCompositeComponent
{
    NSString *_FBID;
    id <FBIntentHandler> _intentHandler;
}

+ (id)newWithFBID:(id)arg1 memorializedPersonFirstName:(id)arg2 gender:(id)arg3 intentHandler:(id)arg4;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(readonly, copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
- (void).cxx_destruct;
- (void)didTapLearnMore:(id)arg1;
- (void)didTapContinueProfileButton:(id)arg1;

@end

