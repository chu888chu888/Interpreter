//
//  NLBinding.h
//  NodelikeDemo
//
//  Created by Sam Rijs on 10/13/13.
//  Copyright (c) 2013 Sam Rijs. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol NLBinding

- (id)binding;

@end

@interface NLBinding : NSObject

+ (id) bindingForIdentifier:(NSString *)identifier;

@end
