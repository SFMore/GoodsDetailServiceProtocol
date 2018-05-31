//
//  GoodsDetailServiceProtocol.h
//  GoodsDetailServiceProtocol
//
//  Created by zsf on 2018/5/31.
//  Copyright © 2018年 zsf. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol GoodsDetailServiceProtocol <NSObject>
@required;

- (UIViewController *)goodsDetailViewControllerWithGoodsId:(NSString*)goodsId goodsName:(NSString *)goodsName;


@end
