//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBPageCTAButtonExperimentContext : FBExperimentContext
{
    NSString *_styleVariant;
    NSString *_positionVariant;
    BOOL _buttonEnabled;
    unsigned int _buttonColor;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) unsigned int buttonColor; // @synthesize buttonColor=_buttonColor;
@property(readonly, nonatomic) BOOL buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int buttonPosition;
@property(readonly, nonatomic) unsigned int buttonStyle;

@end

