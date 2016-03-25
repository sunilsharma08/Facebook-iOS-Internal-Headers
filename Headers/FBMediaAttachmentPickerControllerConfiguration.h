//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIButton, UIColor;
@protocol FBMediaPickerTaggingSearchProvider;

@interface FBMediaAttachmentPickerControllerConfiguration : NSObject
{
    BOOL _imagePickerEditPhotoEnabled;
    BOOL _allowsIPadSimplePicker;
    int _preferredPickerStyle;
    unsigned int _preferredMediaPickerStyle;
    int _selectionCapability;
    NSString *_sessionID;
    unsigned int _maxPhotosSelected;
    unsigned int _maxVideoLength;
    id <FBMediaPickerTaggingSearchProvider> _taggingSearchProvider;
    UIButton *_actionButton;
    NSString *_actionTitle;
    UIColor *_previewVCBackgrounColor;
}

@property(nonatomic) UIColor *previewVCBackgrounColor; // @synthesize previewVCBackgrounColor=_previewVCBackgrounColor;
@property(nonatomic) BOOL allowsIPadSimplePicker; // @synthesize allowsIPadSimplePicker=_allowsIPadSimplePicker;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) id <FBMediaPickerTaggingSearchProvider> taggingSearchProvider; // @synthesize taggingSearchProvider=_taggingSearchProvider;
@property(nonatomic) BOOL imagePickerEditPhotoEnabled; // @synthesize imagePickerEditPhotoEnabled=_imagePickerEditPhotoEnabled;
@property(nonatomic) unsigned int maxVideoLength; // @synthesize maxVideoLength=_maxVideoLength;
@property(nonatomic) unsigned int maxPhotosSelected; // @synthesize maxPhotosSelected=_maxPhotosSelected;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) int selectionCapability; // @synthesize selectionCapability=_selectionCapability;
@property(nonatomic) unsigned int preferredMediaPickerStyle; // @synthesize preferredMediaPickerStyle=_preferredMediaPickerStyle;
@property(nonatomic) int preferredPickerStyle; // @synthesize preferredPickerStyle=_preferredPickerStyle;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSession:(id)arg1;

@end

