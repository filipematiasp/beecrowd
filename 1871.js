var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


while (lines.length > 1) {
   let values = lines.shift().split(' ')

   let first = values[0]
   let second = values[1]
   
   if(first !== '0' && second !== '0') {
    let sum = parseInt(first) + parseInt(second)

    sum = sum.toString().split('')

    sum = sum.filter(num => num !== '0')

    console.log(sum.join(''));
   }
}    