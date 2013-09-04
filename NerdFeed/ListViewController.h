//
//  ListViewController.h
//  NerdFeed
//
//  Created by Admin on 9/2/13.
//  Copyright (c) 2013 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>
@class RSSChannel;

@interface ListViewController : UITableViewController <NSXMLParserDelegate>
{
    NSURLConnection *connection;
    NSMutableData *xmlData;
    
    RSSChannel *channel;
}

-(void)fetchEntries;

@end
