var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let date = lines[0].split('/')

console.log(date[1] + '/' + date[0] + '/' + date[2]);
console.log(date[2] + '/' + date[1] + '/' + date[0]);
console.log(date[0] + '-' + date[1] + '-' + date[2]);