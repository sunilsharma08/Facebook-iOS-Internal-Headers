//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBVerveCardPageValue : NSObject
{
    int _type;
    NSString *_name;
    id _value;
    struct CGPoint _focusPoint;
}

+ (id)pageValueWithType:(int)arg1 focusPoint:(struct CGPoint)arg2 name:(id)arg3 value:(id)arg4;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

