// Importing the http module
const http = require("http");

const hostname = '127.0.0.1';
const port = 3000;

// Creating server
const server = http.createServer((req, res) => {
	// Sending the response
	req.statuscode = 200;
	res.setHeader('content-type', 'text-plain');
	res.end("Hello Okolimo");
});

// Server listening to port 3000
server.listen(port, hostname, () => {
	console.log("Server is Running at https://${hostname}:${port}/");
});
