//
//  XWSplashAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWSplashAd;

@protocol XWSplashAdDelegate <NSObject>

@optional
- (void)xw_splashAdDidLoad:(XWSplashAd *)splashAd;
- (void)xw_splashAdDidFailToLoad:(XWSplashAd *)splashAd error:(NSError *)error;
- (void)xw_splashAdDidPresent:(XWSplashAd *)splashAd;
- (void)xw_splashAdDidExpose:(XWSplashAd *)splashAd;
- (void)xw_splashAdDidClick:(XWSplashAd *)splashAd;
- (void)xw_splashAdWillClose:(XWSplashAd *)splashAd;
- (void)xw_splashAdDidClose:(XWSplashAd *)splashAd;
- (void)xw_splashAdLifeTime:(XWSplashAd *)splashAd time:(NSUInteger)time;
- (void)xw_splashAdDidCloseOtherController:(XWSplashAd *)splashAd;

@end

@interface XWSplashAd : NSObject
@property (nonatomic, weak, nullable) id<XWSplashAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
- (instancetype)initWithFrame:(CGRect) frame slotId:(NSString *) slotId;
- (instancetype)initWithFrame:(CGRect) frame slotId:(NSString *) slotId viewController:(UIViewController *) viewController;
- (void)loadAd;
- (void)showAdInWindow:(UIWindow *)window withBottomView:(UIView *_Nullable)bottomView;
- (void)showAdInWindow:(UIWindow *)window;
- (void)dismiss;
@end

NS_ASSUME_NONNULL_END
