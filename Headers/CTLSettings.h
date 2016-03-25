//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CTLSettings : NSObject
{
    NSMutableDictionary *_cachedBundleURLs;
}

+ (id)sharedSettings;
- (void).cxx_destruct;
@property(nonatomic) BOOL enableMinification;
@property(nonatomic) BOOL enableDev;
@property(nonatomic) BOOL liveReload;
@property(copy, nonatomic) NSString *appName;
@property(copy, nonatomic) NSString *JSLocation;
- (id)jsBundleURLForBundleRoot:(id)arg1;
- (void)resetToDefaults;
- (void)setDefaults;
- (id)defaults;
- (void)settingsUpdated;
- (id)defaultJSLocation;
- (id)init;

@end

