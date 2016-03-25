//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBPresenceBuiltInPlace : FBValueObject <NSCopying>
{
    NSString *_displayName;
    unsigned int _placeType;
}

@property(readonly, nonatomic) unsigned int placeType; // @synthesize placeType=_placeType;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)arg1 placeType:(unsigned int)arg2;

@end

