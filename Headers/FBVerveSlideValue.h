//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveNode.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBVerveSlideValue : FBVerveNode <NSCopying>
{
    NSString *_name;
}

+ (id)decodeJSONSlideValueArray:(id)arg1;
+ (id)decodeJSONSlideValue:(id)arg1;
+ (id)slideValueType;
+ (Class)FBVerve_getProperties:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)JSONDictionary;
- (id)copyNodeWithFlags:(unsigned int)arg1;
- (id)applyToView:(id)arg1;
- (BOOL)canBeApplied;

// Remaining properties
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end

