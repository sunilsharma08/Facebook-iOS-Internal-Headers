//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSearchInternalSettingsItem : NSObject
{
    NSString *_title;
    CDUnknownBlockType _updateIsSelectedBlock;
    CDUnknownBlockType _changeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property(copy, nonatomic) CDUnknownBlockType updateIsSelectedBlock; // @synthesize updateIsSelectedBlock=_updateIsSelectedBlock;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 updateIsSelectedBlock:(CDUnknownBlockType)arg2 changeBlock:(CDUnknownBlockType)arg3;

@end

