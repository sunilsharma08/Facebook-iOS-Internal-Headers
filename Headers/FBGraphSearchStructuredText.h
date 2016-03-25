//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBGraphSearchStructuredText : NSObject <NSCopying>
{
    BOOL _fromSingleState;
    NSString *_semantic;
    unsigned int _resultType;
    NSArray *_fragments;
    NSString *_string;
}

+ (id)emptyText;
@property(nonatomic) BOOL fromSingleState; // @synthesize fromSingleState=_fromSingleState;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(readonly, copy, nonatomic) NSArray *fragments; // @synthesize fragments=_fragments;
@property(readonly, nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(readonly, copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)length;
- (id)description;
- (id)initWithFragments:(id)arg1 semantic:(id)arg2 resultType:(unsigned int)arg3;

@end

