//
//  XWBannerAdView.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/15.
//

#import <UIKit/UIKit.h>
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWBannerAdView;

@protocol XWBannerAdViewDelegate <NSObject>

@optional

- (void)xw_bannerAdViewDidLoad:(XWBannerAdView *)bannerAd;
- (void)xw_bannerAdViewDidFailToLoad:(XWBannerAdView *)bannerAd error:(NSError *)error;
- (void)xw_bannerAdViewDidExpose:(XWBannerAdView *)bannerAd;
- (void)xw_bannerAdViewDidClick:(XWBannerAdView *)bannerAd;
- (void)xw_bannerAdViewDidClose:(XWBannerAdView *)bannerAd;

@end

@interface XWBannerAdView : UIView

@property (nonatomic, weak, nullable) id<XWBannerAdViewDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;

- (instancetype)initWithFrame:(CGRect) frame slotId:(NSString *) slotId viewController:(UIViewController *) viewController;

- (void)loadAd;
@end

NS_ASSUME_NONNULL_END
