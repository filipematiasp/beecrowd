var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for (let i = 0; i < qtd; i++) {
    let first = lines.shift().split(' ')

    if(first[0].length < first[1].length){
        console.log('nao encaixa');
        continue;
    } 

    if(first[0] === first[1]){
        console.log('encaixa');
        continue;
    }

    let ft = first[0]
    let nd = first[1]

    let compare = ft.substr(-(nd.length));

    if(compare === nd){
        console.log('encaixa');
    }else {
        console.log('nao encaixa');
    }




}
