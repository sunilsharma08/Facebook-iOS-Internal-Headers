//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBEventPrivacySetting : NSObject
{
    BOOL _canGuestsInvite;
    NSString *_iconPath;
    NSString *_type;
    NSString *_title;
    NSString *_summary;
    NSString *_graphMLType;
    NSString *_objectID;
}

@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *graphMLType; // @synthesize graphMLType=_graphMLType;
@property(readonly, nonatomic) BOOL canGuestsInvite; // @synthesize canGuestsInvite=_canGuestsInvite;
@property(readonly, copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 summary:(id)arg2 iconPath:(id)arg3 type:(id)arg4 canGuestsInvite:(BOOL)arg5 graphMLType:(id)arg6;

@end

