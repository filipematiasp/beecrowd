var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for(let i = 0; i < qtd; i++) {
    let strings = lines.shift()

    let mySet = new Set()
    for(let letter of strings){
        if(letter.match(/[a-zA-Z]/) !== null){
            mySet.add(letter)
        }
    }

    if(mySet.size === 26){
        console.log('frase completa')
    } else if(mySet.size >= 13){
        console.log('frase quase completa')
    }else {
        console.log('frase mal elaborada')
    }
}
