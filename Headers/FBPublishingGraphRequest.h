//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface FBPublishingGraphRequest : FBValueObject <NSCopying>
{
    NSString *_path;
    NSDictionary *_parameters;
    NSString *_requestName;
    NSString *_overrideActorFBID;
}

@property(readonly, copy, nonatomic) NSString *overrideActorFBID; // @synthesize overrideActorFBID=_overrideActorFBID;
@property(readonly, copy, nonatomic) NSString *requestName; // @synthesize requestName=_requestName;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 parameters:(id)arg2 requestName:(id)arg3 overrideActorFBID:(id)arg4;

@end

