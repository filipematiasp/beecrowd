var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

const qtd = lines.shift()
for(let i = 0; i < qtd; i++) {
    const valoresRef = lines.shift().split(' ')

    const firtElem = Number(valoresRef[0])
    const secondElem = Number(valoresRef[1])

    let sequecie = []

    for(let j = firtElem; j <= secondElem; j++){
        sequecie.push(j)
    }

    sequecie = sequecie.join('').split('')
    for(let k = sequecie.length - 1; k >= 0; k--){
        sequecie.push(sequecie[k])
    }

    console.log(sequecie.join(''));

}
