//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBEventRelationshipBarViewModel : FBValueObject <NSCopying>
{
    BOOL _canShow;
    BOOL _isInterestedConnectionStyle;
    NSString *_titleText;
    NSString *_invitedByFBID;
    NSString *_joinButtonText;
    NSString *_maybeButtonText;
    NSString *_declineButtonText;
    NSString *_messageButtonText;
}

@property(readonly, nonatomic) BOOL isInterestedConnectionStyle; // @synthesize isInterestedConnectionStyle=_isInterestedConnectionStyle;
@property(readonly, copy, nonatomic) NSString *messageButtonText; // @synthesize messageButtonText=_messageButtonText;
@property(readonly, copy, nonatomic) NSString *declineButtonText; // @synthesize declineButtonText=_declineButtonText;
@property(readonly, copy, nonatomic) NSString *maybeButtonText; // @synthesize maybeButtonText=_maybeButtonText;
@property(readonly, copy, nonatomic) NSString *joinButtonText; // @synthesize joinButtonText=_joinButtonText;
@property(readonly, copy, nonatomic) NSString *invitedByFBID; // @synthesize invitedByFBID=_invitedByFBID;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) BOOL canShow; // @synthesize canShow=_canShow;
- (void).cxx_destruct;
- (id)initWithCanShow:(BOOL)arg1 titleText:(id)arg2 invitedByFBID:(id)arg3 joinButtonText:(id)arg4 maybeButtonText:(id)arg5 declineButtonText:(id)arg6 messageButtonText:(id)arg7 isInterestedConnectionStyle:(BOOL)arg8;

@end

