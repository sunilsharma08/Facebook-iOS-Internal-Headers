//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBPagesManagerDeepLinkingContext : FBExperimentContext
{
    BOOL _canRedirectToPagesManagerApp;
    BOOL _canRedirectWhenLoggedOut;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) BOOL canRedirectWhenLoggedOut; // @synthesize canRedirectWhenLoggedOut=_canRedirectWhenLoggedOut;
@property(nonatomic) BOOL canRedirectToPagesManagerApp; // @synthesize canRedirectToPagesManagerApp=_canRedirectToPagesManagerApp;

@end

