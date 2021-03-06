//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBAdInterfacesTargetingLocation : FBValueObject <NSCopying>
{
    NSString *_name;
    NSString *_type;
    NSString *_key;
    NSString *_countryCode;
    NSString *_regionID;
}

@property(readonly, copy, nonatomic) NSString *regionID; // @synthesize regionID=_regionID;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 type:(id)arg2 key:(id)arg3 countryCode:(id)arg4 regionID:(id)arg5;

@end

