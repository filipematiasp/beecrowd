var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for (let i = 0; i < qtd; i++) {
    let phrase = lines.shift()

    if(phrase.length === 5){
       console.log('3');
    } else {
        if((phrase[1] === 'n' && phrase[2] === 'e') ||
        (phrase[0] === 'o' && phrase[2] === 'e') ||
        (phrase[0] === 'o' && phrase[1] === 'n')){
            console.log('1');
        } else {
            console.log('2');
        }
    }
    

}
