//
//  JXIMSDK.h
//  JXIMSdk
//
//  Created by 陈汉 on 2021/8/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMSDKManager : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

/**
 * 登陆IM
 */
- (void)loginJXIMSDKWithAppId:(NSString *)appId
                       openId:(NSString *)openId
                   loginToken:(NSString *)loginToken
                     complete:(void(^)(NSError *error))complete;

/**
 * 退出登录IM
 */
- (void)logout;

@end

NS_ASSUME_NONNULL_END
