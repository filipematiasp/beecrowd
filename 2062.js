var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift()
let array = lines.shift().split(' ')

array.forEach((item, index) => {
    if(item.length === 3){
        if(
            ((item.charAt(0) === 'O' && item.charAt(1) === 'B') || (item.charAt(0) === 'U' && item.charAt(1) === 'R')) &&
            item.charAt(2) != 'I'
        ){
            array[index] = item.slice(0, -1) + 'I'
        }
    }
})

console.log(array.join(' '));
