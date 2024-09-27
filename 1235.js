var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for(let i = 0; i < qtd; i++) {
    let strings = lines.shift()

    let decriptedMessage = ''

    let phrase1 = strings.substring(0, strings.length / 2).split('').reverse().join('')
    let phrase2 = strings.substring(strings.length / 2, strings.length).split('').reverse().join('')

    decriptedMessage = phrase1 + phrase2

    console.log(decriptedMessage)

}