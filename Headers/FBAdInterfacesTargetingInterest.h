//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBAdInterfacesTargetingInterest : FBValueObject <NSCopying>
{
    NSString *_name;
    NSString *_id;
}

@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 id:(id)arg2;

@end

