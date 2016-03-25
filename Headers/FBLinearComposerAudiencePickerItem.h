//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBTypedNSArrayOfFBComposerPerson, NSString;

@interface FBLinearComposerAudiencePickerItem : FBValueObject <NSCopying>
{
    BOOL _shouldIndent;
    NSString *_title;
    NSString *_subtitle;
    unsigned int _iconType;
    NSString *_fallbackIconURL;
    FBTypedNSArrayOfFBComposerPerson *_highlightedPeople;
    unsigned int _state;
}

@property(readonly, nonatomic) BOOL shouldIndent; // @synthesize shouldIndent=_shouldIndent;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *highlightedPeople; // @synthesize highlightedPeople=_highlightedPeople;
@property(readonly, copy, nonatomic) NSString *fallbackIconURL; // @synthesize fallbackIconURL=_fallbackIconURL;
@property(readonly, nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconType:(unsigned int)arg3 fallbackIconURL:(id)arg4 highlightedPeople:(id)arg5 state:(unsigned int)arg6 shouldIndent:(BOOL)arg7;

@end

