/**
 *	See template.php -> mborg_preprocess_views_view() + tpl files!
 *
 *	JS to generate hovers for the blocked menu.
 */

 jQuery(function(){
 	jQuery('#block-views-frontpage-nodes-block,'+
 		   '#block-views-latest-entries-block,'+
 		   '#block-views-random-nodes-block').each(function(num,item){
 		item = jQuery(item);
 		var rows = jQuery('.views-row',item);
 		console.log( rows );
 		rows.each(function(rowNum, row){
 			
 		});
 		// var item_anchor = jQuery('a',item);
 		// var img_css_url = 'url(\'' + content.data('block-preview-image-src') + '\')';
 		// // hover states
 		// content.hover(function(){
 		// 	item_anchor.css({
 		// 		'background-image':img_css_url
 		// 	});
 		// },function(){
 		// 	item_anchor.css({
 		// 		'background-image':'none'
 		// 	});
 		// });
 		// // preload image(s)
 		// var tmpImg = new Image();
 		// tmpImg.src = content.data('block-preview-image-src');
 	});
 });