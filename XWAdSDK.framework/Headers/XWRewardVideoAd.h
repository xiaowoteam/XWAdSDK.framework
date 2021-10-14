//
//  XWRewardVideoAd.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <XWAdSDK/XWAdSDKConfig.h>

NS_ASSUME_NONNULL_BEGIN

@class XWRewardVideoAd;

@protocol XWRewardVideoAdDelegate <NSObject>

@optional

- (void)xw_rewardVideoAdDidLoad:(XWRewardVideoAd *)rewardVideoAd;
- (void)xw_rewardVideoAdDidFailToLoad:(XWRewardVideoAd *)rewardVideoAd error:(NSError *)error;
- (void)xw_rewardVideoAdDidCache:(XWRewardVideoAd *)rewardVideoAd;
- (void)xw_rewardVideoAdDidExpose:(XWRewardVideoAd *)rewardVideoAd;
- (void)xw_rewardVideoAdDidClick:(XWRewardVideoAd *)rewardVideoAd;
- (void)xw_rewardVideoAdDidClose:(XWRewardVideoAd *)rewardVideoAd;
- (void)xw_rewardVideoAdDidPlayFinish:(XWRewardVideoAd *)rewardVideoAd;
- (void)xw_rewardVideoAdDidRewardEffective:(XWRewardVideoAd *)rewardVideoAd trackUid:(NSString *) trackUid;

@end

@interface XWRewardVideoAd : NSObject
@property (nonatomic, weak, nullable) id<XWRewardVideoAdDelegate> delegate;
@property (nonatomic, assign, readonly) XWAdSdkUnionType unionType;
- (instancetype)initWithSlotId:(NSString *) slotId;
- (instancetype)initWithSlotId:(NSString *) slotId extra:(NSString * _Nullable)extra;
- (void)loadAd;
- (void)showAdFromRootViewController:(UIViewController *) viewController;
@end

NS_ASSUME_NONNULL_END
