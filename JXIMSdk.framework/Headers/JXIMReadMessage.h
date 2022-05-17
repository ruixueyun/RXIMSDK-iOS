//
//  JXIMReadMessage.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/27.
//

#import <Foundation/Foundation.h>
#import "JXIMMessage.h"

@interface JXReadMessagesRespGroup : NSObject

@property(nonatomic, assign) NSInteger msgId;

@property(nonatomic, copy) NSString *openId;

@end

@interface JXIMReadMessage : NSObject

/** 消息id数组 */
@property(nonatomic, copy) NSArray *msgIdAry;

/** 群聊at */
@property (nonatomic, strong) JXReadMessagesRespGroup *at;

/** 会话类型 */
@property(nonatomic, assign) JXIMSessionType targetType;

/** 用户或群 OpenID */
@property(nonatomic, copy) NSString *target;


@end


