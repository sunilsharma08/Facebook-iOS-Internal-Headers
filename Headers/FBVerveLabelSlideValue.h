//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveSlideValue.h"

@class NSString;

@interface FBVerveLabelSlideValue : FBVerveSlideValue
{
    NSString *_text;
    NSString *_localizationDescription;
}

+ (Class)FBVerve_getProperties:(CDStruct_183601bc **)arg1 count:(unsigned int *)arg2;
+ (id)slideValueType;
- (void).cxx_destruct;
- (id)applyToView:(id)arg1;
- (BOOL)canBeApplied;

// Remaining properties
@property(copy, nonatomic) NSString *localizationDescription; // @dynamic localizationDescription;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

