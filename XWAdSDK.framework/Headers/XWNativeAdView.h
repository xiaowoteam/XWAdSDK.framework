//
//  XWNativeAdView.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/21.
//

#import <UIKit/UIKit.h>
#import "XWNativeAdDataObject.h"

NS_ASSUME_NONNULL_BEGIN

@class XWNativeAdView;

@protocol XWNativeAdViewDelegate <NSObject>
@optional
- (void)xw_nativeAdViewDidExpose:(XWNativeAdView *)nativeAdView;
- (void)xw_nativeAdViewDidClick:(XWNativeAdView *)nativeAdView;
- (void)xw_nativeAdViewDidCloseOtherController:(XWNativeAdView *)nativeAdView;
- (void)xw_nativeAdViewMediaDidPlayFinish:(XWNativeAdView *)nativeAdView;
- (void)xw_nativeAdViewDislike:(XWNativeAdView *)nativeAdView;
@end

@interface XWNativeAdView : UIView
@property (nonatomic, weak) UIViewController *viewController;
@property (nonatomic, weak, nullable) id<XWNativeAdViewDelegate> delegate;
@property (nonatomic, strong, readonly) UIView *mediaView;
@property (nonatomic, strong, readonly) UIImageView *logoView;
@property (nonatomic, strong, readonly) UIImageView *logoADView;

@property (nonatomic, assign, readonly) CGFloat logoImageViewDefaultWidth;
@property (nonatomic, assign, readonly) CGFloat logoImageViewDefaultHeight;

@property (nonatomic, assign, readonly) CGFloat logoADImageViewDefaultWidth;
@property (nonatomic, assign, readonly) CGFloat logoADImageViewDefaultHeight;

- (void)refreshData:(XWNativeAdDataObject *)nativeAdDataObject;
- (void)registerDataObjectWithClickableViews:(NSArray<UIView *> *)clickableViews;

- (CGFloat)mediaVideoDuration;
- (CGFloat)mediaVideoPlayTime;
- (void)mediaVideoPlay;
- (void)mediaVideoPause;
- (void)mediaVideoStop;
- (void)mediaVideoMuteEnable:(BOOL)flag;
- (void)setMediaVideoPlayButtonImage:(UIImage *)image size:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
