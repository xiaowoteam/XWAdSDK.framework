//
//  XWAdSDKConfig.h
//  XWAdSDK
//
//  Created by laole918 on 2021/4/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, XWAdSdkUnionType) {
    XWAdSdkUnionTypeUnknown = 0,
    XWAdSdkUnionTypeADX = 1,
    XWAdSdkUnionTypeGDT = 2,
    XWAdSdkUnionTypeCSJ = 3,
    XWAdSdkUnionTypeBaidu = 8,
    XWAdSdkUnionTypeKS = 10,
    XWAdSdkUnionTypeSIG = 12, //sig
    XWAdSdkUnionTypeIQY = 13, //爱奇艺
    XWAdSdkUnionTypeJD = 14, //京东
    XWAdSdkUnionTypeKLN = 17, //游可赢
    XWAdSdkUnionTypeLY = 18, //LY
};

@interface XWAdSDKConfig : NSObject
+ (void)initAppId:(NSString *)appId;
+ (NSString *)getAppId;
+ (BOOL)handleOpenUniversalLink:(NSUserActivity *)userActivity;
+ (void)setUserId:(NSString *)userId;
+ (NSString *)getUserId;
+ (NSString *)sdkVersion;
@end

NS_ASSUME_NONNULL_END
