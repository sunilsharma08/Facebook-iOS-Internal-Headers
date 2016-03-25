//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class NSMutableDictionary;

@interface FBBarButtonItem : UIBarButtonItem
{
    NSMutableDictionary *_appearanceCollection;
}

+ (id)appearance;
@property(retain, nonatomic) NSMutableDictionary *appearanceCollection; // @synthesize appearanceCollection=_appearanceCollection;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 style:(int)arg3 barMetrics:(int)arg4;
- (void)setStyle:(int)arg1;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(int)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithCustomView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBarButtonSystemItem:(int)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)init;
- (void)_customizeStyleIfNeeded;
@property(readonly, nonatomic) BOOL needsCustomize;

@end

