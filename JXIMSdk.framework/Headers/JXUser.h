//
//  JXUser.h
//  JXIMSdk
//
//  Created by weiyongjian on 2022/1/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** 用户信息 */
@interface JXUser : NSObject

/** 用户 OpenID */
@property(nonatomic, copy) NSString *userOpenId;

/** 最后登录时间戳 */
@property(nonatomic, assign) NSInteger lastLoginTime;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

@end

NS_ASSUME_NONNULL_END
