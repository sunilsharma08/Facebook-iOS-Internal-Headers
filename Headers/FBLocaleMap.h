//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FBLocaleMap : NSObject
{
    NSString *_preferredFBLocale;
    NSArray *_fb_preferredLanguages;
}

+ (id)sharedMap;
@property(copy, nonatomic) NSArray *fb_preferredLanguages; // @synthesize fb_preferredLanguages=_fb_preferredLanguages;
@property(copy, nonatomic) NSString *preferredFBLocale; // @synthesize preferredFBLocale=_preferredFBLocale;
- (void).cxx_destruct;

@end

