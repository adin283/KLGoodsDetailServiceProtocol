//
//  KLGoodsDetailServiceProtocol.h
//  KLGoodsDetailServiceProtocol
//
//  Created by Kevin on 2016/12/29.
//  Copyright © 2016年 KevinLab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol KLGoodsDetailServiceProtocol <NSObject>

@required;

- (UIViewController *)goodsDetailViewControllerWithGoodsId:(NSString *)goodsId goodsName:(NSString *)goodsName;
@end
