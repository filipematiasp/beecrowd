var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let qtd = lines.shift();

for (let i = 0; i < qtd; i++) {
    let strings = lines.shift().split(' ');
    let first = strings[0]
    let second = strings[1]
    let join = ''

    if(strings[0].length > strings[1].length){
        bigger = strings[0].length
    } else {
        bigger = strings[1].length
    }

    for (let j = 0; j < bigger; j++) {
        if(typeof first[j] !== "undefined"){
            join = join + first[j]
        }

        if(typeof second[j] !== "undefined"){
            join = join + second[j]
        }
    }

    console.log(join);

}

