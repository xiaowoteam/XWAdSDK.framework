//
//  XWInterstitialAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWInterstitialAd;

@protocol XWInterstitialAdDelegate <NSObject>

@optional

- (void)xw_interstitialAdDidLoad:(XWInterstitialAd *)interstitialAd;
- (void)xw_interstitialAdDidFailToLoad:(XWInterstitialAd *)interstitialAd error:(NSError *)error;
- (void)xw_interstitialAdDidExpose:(XWInterstitialAd *)interstitialAd;
- (void)xw_interstitialAdDidClick:(XWInterstitialAd *)interstitialAd;
- (void)xw_interstitialAdDidClose:(XWInterstitialAd *)interstitialAd;

@end

@interface XWInterstitialAd : NSObject
@property (nonatomic, weak, nullable) id<XWInterstitialAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
- (instancetype)initWithSlotId:(NSString *) slotId adSize:(CGSize) adSize;
- (void)loadAd;
- (void)showAdFromRootViewController:(UIViewController *) viewController;
@end

NS_ASSUME_NONNULL_END
