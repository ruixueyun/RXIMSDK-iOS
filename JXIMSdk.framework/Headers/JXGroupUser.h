//
//  JXGroupUser.h
//  JXIMSdk
//
//  Created by weiyongjian on 2022/1/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXGroupUser : NSObject

/** 用户 OpenID */
@property(nonatomic, copy) NSString *openId;

/** 0 普通群成员 1 管理员 2 群主 */
@property(nonatomic, assign) int64_t auth;

/** 扩展信息 */
@property(nonatomic, copy) NSString *ext;

/** 选项 */
@property(nonatomic, assign) uint64_t option;

@end

NS_ASSUME_NONNULL_END
