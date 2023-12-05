var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let cpffirt = lines[0].split('.')
let cpfsecond = cpffirt[2].split('-')

console.log(cpffirt[0]);
console.log(cpffirt[1]);
console.log(cpfsecond[0]);
console.log(cpfsecond[1]);


