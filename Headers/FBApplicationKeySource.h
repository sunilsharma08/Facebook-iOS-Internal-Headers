//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBApplicationKeySource : FBValueObject <NSCopying>
{
    NSString *_appSecret;
    NSString *_appGroup;
    NSString *_publicAppName;
    NSString *_pushTransmitterID;
}

@property(readonly, copy, nonatomic) NSString *pushTransmitterID; // @synthesize pushTransmitterID=_pushTransmitterID;
@property(readonly, copy, nonatomic) NSString *publicAppName; // @synthesize publicAppName=_publicAppName;
@property(readonly, copy, nonatomic) NSString *appGroup; // @synthesize appGroup=_appGroup;
@property(readonly, copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
- (void).cxx_destruct;
- (id)initWithAppSecret:(id)arg1 appGroup:(id)arg2 publicAppName:(id)arg3 pushTransmitterID:(id)arg4;

@end

