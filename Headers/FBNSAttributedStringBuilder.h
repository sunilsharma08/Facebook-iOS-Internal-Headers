//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableAttributedString;

@interface FBNSAttributedStringBuilder : NSObject
{
    NSMutableAttributedString *_attributedStringBeingBuilt;
}

+ (id)anAttributedStringWithText:(id)arg1;
- (void).cxx_destruct;
- (id)withAttribute:(id)arg1 forValue:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)build;
- (id)initWithText:(id)arg1;

@end

