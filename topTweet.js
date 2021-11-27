const { execFile } = require('child_process');
const request = require('request');
const cheerio = require('cheerio');

const runcmd = "./app";
const args = [];

let url = "https://twitter.com/search?q=popular&src=typed_query&f=live";

request(url, (err, res, body) => {
	if (err) {
		console.log(err);
	} else {
		let $ = cheerio.load(body); //the html content is now here
		let noiseTweet = $('div.js-tweet-text-container').first().text();
		let tweet;

		if (noiseTweet.indexOf("pic.twitter.com" > -1)) {
			//it means there is links so we will remove it
			tweet = noiseTweet.slice(0, noiseTweet.indexOf("pic.twitter.com"));
		} else {
			tweet = noiseTweet;
		}

		//now will we capitalize this tweet
		args.push(tweet.toLowerCase());

		//now we will send this to c++ program

		execFile(runcmd, args, (err, stdout, stderr) => {
			if (err) {
				console.log(err);

			}
			if (stdout) {
				console.log(stdout);
			}
		});

	}
});





