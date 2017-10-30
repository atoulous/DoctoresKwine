const fs = require('fs');
const execSync = require('child_process').execSync;
/*
  Comment
*/
let i = 5;
if (i > 0) {
i = fs.existsSync('Sully_' + i + '.js') ? i - 1 : i;
const filename = "Sully_" + i + ".js";
const cmd = "node " + filename;
const start = "const fs = require('fs');Nconst execSync = require('child_process').execSync;N/*N  CommentN*/Nlet i = I;Nif (i > 0) {Ni = fs.existsSync('Sully_' + i + '.js') ? i - 1 : i;Nconst filename = QSully_Q + i + Q.jsQ;Nconst cmd = Qnode Q + filename;Nconst start = QSTARTQ;Nconst end = Q;Mf();Mif (i > 0) execSync(cmd);M}Q;Nconst f = ";
const end = ";Mf();Mif (i > 0) execSync(cmd);M}";
const f = () => { fs.writeFileSync(filename, start.replace(/N/g, '\x0a').replace(/Q/g, '\x22').replace(/I/g, i).replace(/START/g, start) + f + end.replace(/M/g, '\x0a')); };
f();
if (i > 0) execSync(cmd);
}