//
//  DetailViewController.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 23/3/12.
//  Copyright (c) 2012 Korec s.r.l. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSJSONRPC.h"
#import "jsonDataCell.h"
#import "ShowInfoViewController.h"
#import "UIImageView+WebCache.h"
#import <MediaPlayer/MediaPlayer.h>
#import "mainMenu.h"
#import "WebViewController.h"


@class NowPlaying;
@class PlayFileViewController;
//@class DetailViewController;

@interface DetailViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,UIActionSheetDelegate, UIWebViewDelegate, UIScrollViewDelegate, UISearchBarDelegate>{
    IBOutlet UITableView *dataList;
    IBOutlet jsonDataCell *jsonCell;
    DSJSONRPC *jsonRPC;
    NSMutableArray *richResults;
    NSMutableArray	*filteredListContent;
    IBOutlet UIActivityIndicatorView *activityIndicatorView;
    NSMutableDictionary *sections;  
    SDWebImageManager *manager;
    IBOutlet UILongPressGestureRecognizer *lpgr;
    BOOL alreadyPush;
    IBOutlet UIWebView *webPlayView;
    MPMoviePlayerController *playerViewController;
    int choosedTab;
    int numTabs;
    UILabel *topNavigationLabel;
    IBOutlet UIButton *button1;
    IBOutlet UIButton *button2;
    IBOutlet UIButton *button3;
    IBOutlet UIButton *button4;
    IBOutlet UIButton *button5;
    IBOutlet UIView *buttonsView;
    int numResults;
    int numFilteredResults;
    NSString *defaultThumb;
    int cellHeight;
    int thumbWidth;
    IBOutlet UIView *noFoundView;
    int viewWidth;
}
@property (nonatomic, retain) NSMutableArray *richResults;
@property (nonatomic, retain) NSMutableArray *filteredListContent;

@property (strong, nonatomic) id detailItem;
@property(nonatomic,readonly) UIActivityIndicatorView *activityIndicatorView;
@property (strong, nonatomic) ShowInfoViewController *showInfoViewController;

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) NowPlaying *nowPlaying;
@property (strong, nonatomic) PlayFileViewController *playFileViewController;
@property (strong, nonatomic) WebViewController *webViewController;


@property (nonatomic,retain) NSMutableDictionary *sections;

@end
