//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBIntermediatePositionDescriptor : NSObject <NSCopying>
{
    NSString *_anchor;
    NSString *_comparator;
    NSString *_dependentElementID;
    NSString *_dependentAnchor;
    float _offset;
    NSString *_offsetOperator;
    NSString *_offsetUnits;
}

@property(copy, nonatomic) NSString *offsetUnits; // @synthesize offsetUnits=_offsetUnits;
@property(copy, nonatomic) NSString *offsetOperator; // @synthesize offsetOperator=_offsetOperator;
@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *dependentAnchor; // @synthesize dependentAnchor=_dependentAnchor;
@property(copy, nonatomic) NSString *dependentElementID; // @synthesize dependentElementID=_dependentElementID;
@property(copy, nonatomic) NSString *comparator; // @synthesize comparator=_comparator;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

