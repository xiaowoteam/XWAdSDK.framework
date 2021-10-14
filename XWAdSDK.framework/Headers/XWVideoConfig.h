//
//  XWVideoConfig.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XWVideoAutoPlayPolicy) {
    XWVideoAutoPlayPolicyWIFI = 0, // WIFI 下自动播放
    XWVideoAutoPlayPolicyAlways = 1, // 总是自动播放，无论网络条件
    XWVideoAutoPlayPolicyNever = 2, // 从不自动播放，无论网络条件
};

@interface XWVideoConfig : NSObject
@property (nonatomic, assign) XWVideoAutoPlayPolicy autoPlayPolicy;

@property (nonatomic, assign) BOOL videoMuted;

@property (nonatomic, assign) BOOL detailPageVideoMuted;

@property (nonatomic, assign) BOOL autoResumeEnable;

@property (nonatomic, assign) BOOL detailPageEnable;

@property (nonatomic, assign) BOOL userControlEnable;

@property (nonatomic, assign) BOOL progressViewEnable;

@property (nonatomic, assign) BOOL coverImageEnable;
@end

NS_ASSUME_NONNULL_END
