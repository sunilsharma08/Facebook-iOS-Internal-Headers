//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBLocalPhotoMenuUploadModel, NSString;

@interface FBLocalPhotoMenuUploadEditContext : NSObject
{
    NSString *_updatedPhotoDescription;
    FBLocalPhotoMenuUploadModel *_oldModel;
}

@property(readonly, nonatomic) FBLocalPhotoMenuUploadModel *oldModel; // @synthesize oldModel=_oldModel;
@property(readonly, copy, nonatomic) NSString *updatedPhotoDescription; // @synthesize updatedPhotoDescription=_updatedPhotoDescription;
- (void).cxx_destruct;
- (id)initWithUpdatedDescription:(id)arg1 oldModel:(id)arg2;

@end

