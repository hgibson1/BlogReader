//
//  BlogPost.h
//  BlogReader
//
//  Created by Hannah Gibson on 10/25/14.
//  Copyright (c) 2014 Hannah Gibson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

//replaces setter and getter methods for varible
@property (strong, nonatomic)NSString *title;
@property (strong, nonatomic)NSString *author;
@property (strong, nonatomic)NSURL *postURL;
@property (strong, nonatomic)NSString *date;
@property (strong, nonatomic)NSString *thumbnail;
@property (nonatomic) int views; //primative type, don't need pointer or strong declaration
@property (nonatomic, getter = isUnread) BOOL unread;
//isUnread is a built in Boolean function

/*
Example of a designated initalizer: initializes instance of class
- (id)initWithTitle:(NSString *)title;
 
id=object bound at run time. * is implied.rly

Example of a method that preforms initalization + allocation and returns instance:
*/

@end
