//
//  XWFullScreenVideoAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/6/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWFullScreenVideoAd;

@protocol XWFullScreenVideoAdDelegate <NSObject>

@optional

- (void)xw_fullScreenVideoAdDidLoad:(XWFullScreenVideoAd *)fullScreenVideoAd;
- (void)xw_fullScreenVideoAdDidFailToLoad:(XWFullScreenVideoAd *)fullScreenVideoAd error:(NSError *)error;
- (void)xw_fullScreenVideoAdDidCache:(XWFullScreenVideoAd *)fullScreenVideoAd;
- (void)xw_fullScreenVideoAdDidExpose:(XWFullScreenVideoAd *)fullScreenVideoAd;
- (void)xw_fullScreenVideoAdDidClick:(XWFullScreenVideoAd *)fullScreenVideoAd;
- (void)xw_fullScreenVideoAdDidClose:(XWFullScreenVideoAd *)fullScreenVideoAd;
- (void)xw_fullScreenVideoAdDidPlayFinish:(XWFullScreenVideoAd *)fullScreenVideoAd;
- (void)xw_fullScreenVideoAdDidClickSkip:(XWFullScreenVideoAd *)fullScreenVideoAd;

@end

@interface XWFullScreenVideoAd : NSObject
@property (nonatomic, weak, nullable) id<XWFullScreenVideoAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
- (instancetype)initWithSlotId:(NSString *) slotId;
- (void)loadAd;
- (void)showAdFromRootViewController:(UIViewController *) viewController;
@end

NS_ASSUME_NONNULL_END
