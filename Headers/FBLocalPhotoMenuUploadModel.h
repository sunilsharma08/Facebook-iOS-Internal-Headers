//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMultiPickerPhotoAttachment, NSString;

@interface FBLocalPhotoMenuUploadModel : NSObject
{
    int _order;
    NSString *_photoDescription;
    FBMultiPickerPhotoAttachment *_attachment;
}

@property(readonly, nonatomic) FBMultiPickerPhotoAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, copy, nonatomic) NSString *photoDescription; // @synthesize photoDescription=_photoDescription;
@property(readonly, nonatomic) int order; // @synthesize order=_order;
- (void).cxx_destruct;
- (id)initWithOrder:(int)arg1 photoDescription:(id)arg2 attachment:(id)arg3;

@end

