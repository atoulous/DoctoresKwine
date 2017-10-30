const fs = require('fs');
/*
  Comment
*/
const start = "const fs = require('fs');N/*N  CommentN*/Nconst start = QLQ;Nconst end = Q;Mf();Q;Nconst f = ";
const end = ";Mf();";
const f = () => { fs.writeFile('Grace_kid.js', start.replace(/N/g, '\x0a').replace(/Q/g, '\x22').replace(/L/g, start) + f + end.replace(/M/g, '\x0a'), (next) => next); };
f();