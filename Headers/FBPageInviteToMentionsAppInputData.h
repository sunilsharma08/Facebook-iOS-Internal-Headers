//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBPageInviteToMentionsAppInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_inviteeName;
    NSString *_inviteeContactPoint;
    NSString *_inviteePageId;
}

@property(copy, nonatomic) NSString *inviteePageId; // @synthesize inviteePageId=_inviteePageId;
@property(copy, nonatomic) NSString *inviteeContactPoint; // @synthesize inviteeContactPoint=_inviteeContactPoint;
@property(copy, nonatomic) NSString *inviteeName; // @synthesize inviteeName=_inviteeName;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

